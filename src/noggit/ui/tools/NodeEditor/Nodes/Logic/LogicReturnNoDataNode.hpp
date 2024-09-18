// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#ifndef NOGGIT_LOGICRETURNNODATANODE_HPP
#define NOGGIT_LOGICRETURNNODATANODE_HPP

#include "noggit/ui/tools/NodeEditor/Nodes/LogicNodeBase.hpp"

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
        class LogicReturnNoDataNode : public LogicNodeBase
        {
        Q_OBJECT

        public:
            LogicReturnNoDataNode();
            NodeValidationState validate() override;
            void compute() override;

        };

    }

}

#endif //NOGGIT_LOGICRETURNNODATANODE_HPP