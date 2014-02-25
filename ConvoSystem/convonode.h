#ifndef CONVONODE_H
#define CONVONODE_H
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <vector>
#include <QObject>
#include <npcfield.h>
#include <playerfield.h>
#include <npcfield.h>
using namespace std;

class ConvoNode
{
    char *nodeId;
    int nodeNum;
    NpcField npcField;
    std::vector<PlayerField> playerFields;
    int currentPField;
public:
    ConvoNode(int nNum);
//    delConvoNode();
    string getNodeId();
    void setNodeId(string nId);
    void addNpcField(NpcField nField);
//    delNpcField();
    void addPlayerField();
//    delPlayerField();
};

#endif // CONVONODE_H
