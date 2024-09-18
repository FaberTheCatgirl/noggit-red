// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#ifndef NOGGIT_RANDOMINTEGERRANGENODE_HPP
#define NOGGIT_RANDOMINTEGERRANGENODE_HPP

#include <noggit/ui/tools/NodeEditor/Nodes/BaseNode.hpp>

using QtNodes::PortType;
using QtNodes::PortIndex;
using QtNodes::NodeData;
using QtNodes::NodeDataType;
using QtNodes::NodeDataModel;
using QtNodes::NodeValidationState;


namespace Noggit
{
    namespace Ui::Tools::NodeEditor::Nodes
    {
        class RandomIntegerRangeNode : public BaseNode
        {
        Q_OBJECT

        public:
            RandomIntegerRangeNode();
            void compute() override;
            QJsonObject save() const override;
            void restore(QJsonObject const& json_obj) override;
        };

    }

}

#endif //NOGGIT_RANDOMINTEGERRANGENODE_HPP