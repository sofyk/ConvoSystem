#ifndef NPCFIELD_H
#define NPCFIELD_H
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <QObject>
#include <textfield.h>
using namespace std;

class NpcField
{
    TextField textField;
public:
    NpcField();
    void setTextField(TextField tField);
    TextField getTextField();
};

#endif // NPCFIELD_H
