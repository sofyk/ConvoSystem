#include "textfield.h"

TextField::TextField(){}
/*TextField::TextField(string fId, string fText){
    fieldId = fId;
    fieldText = fText;
}
TextField::TextField(string fId){
    fieldId = fId;
}
TextField::TextField(const TextField &textField){
    fieldId = textField.fieldId;
    fieldText = textField.fieldText;
}*/
string TextField::getFieldId(){
    return fieldId;
}
void TextField::setFieldId(string fId){
    fieldId = fId;
}
string TextField::getFieldText(){
    return fieldText;
}
void TextField::setFieldText(string fText){
    fieldText = fText;
}
