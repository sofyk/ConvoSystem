#include "convonode.h"

ConvoNode::ConvoNode(){}

ConvoNode::ConvoNode(int nNum){
   nodeNum = nNum;
   itoa(nNum, nodeId, 10);
   currentPField = -1;
}

string ConvoNode::getNodeId(){
    return string(nodeId);
}

void ConvoNode::setNodeId(string nId){
    nodeId = (char*)nId.c_str();
}

void ConvoNode::addNpcField(NpcField nField){
    npcField = nField;
}

void ConvoNode::addPlayerField(){
    currentPField++;
    PlayerField pField = PlayerField(currentPField);
    playerFields.push_back(pField);
}
