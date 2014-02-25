#include "npcfield.h"

NpcField::NpcField(){}

void NpcField::setTextField(TextField tField){
    textField = tField;
}

TextField NpcField::getTextField(){
    return textField;
}
