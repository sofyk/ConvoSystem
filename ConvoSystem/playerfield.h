#ifndef PLAYERFIELD_H
#define PLAYERFIELD_H
#include <convonode.h>
#include <textfield.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <QObject>
using namespace std;

class ConvoNode; //gotta forward declare! the compiler has no idea who ConvoNode is at this point...

class PlayerField
{
    int pFieldId;
    TextField textField;
    ConvoNode* nextNode;
public:
    PlayerField(int pFId);
    void setTextField(TextField tField);
    TextField getTextField();
    void setNextNode(ConvoNode nextN);
    ConvoNode getNextNode();
};

#endif // PLAYERFIELD_H
