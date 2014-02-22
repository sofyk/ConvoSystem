#ifndef CONVOLIB_H
#define CONVOLIB_H
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <QObject>
using namespace std;

class ConvoScript : public QObject
{
    //ConvoNode start;
    //ConvoNode script[];
    std::vector< ConvoNode > script;
    int scriptSize;
public:
    ConvoScript();
    void addNode();
    delNode();
    getNode();
    getScriptSize();
};

class ConvoNode : public QObject
{
    int nodeId;
    int npcFieldNum;
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

class NpcField : public QObject
{
    TextField textField;
public:
    setTextField();
    getTextField();
};

class PlayerField : public QObject
{
    TextField textField;
    ConvoNode nextNode;
public:
    setTextField();
    getTextField();
    setNextNode();
    getNextNode();
};

class TextField : public QObject
{
    string fieldId;
    string fieldText;
public:
    getFieldId();
    setFieldId();
    getFieldText();
    setFieldText();
};

#endif // CONVOLIB_H
