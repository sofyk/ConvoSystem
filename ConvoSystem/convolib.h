#ifndef CONVOLIB_H
#define CONVOLIB_H

class ConvoScript
{
    ConvoNode start;
public:
    ConvoScript();
    addNode();
    delNode();
    getNode();
};

class ConvoNode
{
    int nodeId;
public:
    ConvoNode();
    delConvoNode();
    int getNodeId();
    setNodeId(int nId);
    addNpcField();
    delNpcField();
    addPlayerField();
    delPlayerField();
};

#endif // CONVOLIB_H
