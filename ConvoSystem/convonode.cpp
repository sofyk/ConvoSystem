#include "convonode.h"

ConvoNode::ConvoNode(int nNum){
   nodeNum = nNum;
   nodeId = itoa(nNum);
   currentPField = -1;
}

string ConvoNode::getNodeId(){
    return string(nodeId);
}

void ConvoNode::setNodeId(string nId){
    nodeId = nId.c_str();
}

void ConvoNode::addNpcField(NpcField nField){
    npcField = nField;
}

void ConvoNode::addPlayerField(){
    currentPField++;
    PlayerField pField = new PlayerField(currentPField);
    playerFields.push_back(pField);
}
