#ifndef PLAYERFIELD_H
#define PLAYERFIELD_H
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <QObject>
#include <textfield.h>
#include <convonode.h>
using namespace std;

class PlayerField
{
    int pFieldId;
    TextField textField;
    ConvoNode nextNode;
public:
    PlayerField(int pFId);
    void setTextField(TextField tField);
    TextField getTextField();
    void setNextNode(ConvoNode nextN);
    ConvoNode getNextNode();
};

#endif // PLAYERFIELD_H
