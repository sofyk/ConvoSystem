#include "convoscript.h"

ConvoScript::ConvoScript(){
    currentNode = -1;
}

void ConvoScript::addNode(){
    currentNode++;
    ConvoNode node = new ConvoNode(currentNode);
    script.push_back(node);
}

ConvoNode ConvoScript::getNode(int n){
    return script.at(n);
}

int ConvoScript::getScriptSize(){
    return script.size();
}
