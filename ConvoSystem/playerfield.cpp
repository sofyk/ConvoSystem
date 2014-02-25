#include "playerfield.h"

PlayerField::PlayerField(int pFId){
    pFieldId = pFId;
}

void PlayerField::setTextField(TextField tField){
    textField = tField;
}

TextField PlayerField::getTextField(){
    return textField;
}

void PlayerField::setNextNode(ConvoNode nextN){
    nextNode = nextN;
}

ConvoNode PlayerField::getNextNode(){
    return nextNode;
}
