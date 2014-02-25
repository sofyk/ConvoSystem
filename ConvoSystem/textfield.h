#ifndef TEXTFIELD_H
#define TEXTFIELD_H
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <QObject>
using namespace std;


class TextField
{
    string fieldId;
    string fieldText;
public:
    TextField();
//    TextField(string fId, string fText);
//    TextField(string fId);
//    TextField(const TextField &textField);
    string getFieldId();
    void setFieldId(string fId);
    string getFieldText();
    void setFieldText(string fText);
};

#endif // TEXTFIELD_H
