#pragma once

#include "Finance.h"
#include "FinanceEducation.h"
#include "Saving.h"
using namespace System;
namespace EduFinanzasModel {
[Serializable]
public ref class User {
     
    public://para que pueda ehredar sus atributos
        property int ID;
        property String^ Name;
        property String^ DocNumber;
        property String^ Email;
        property String^ PhoneNum;
        property String^ Password;
        property Finance^ objFinance;
        property FinanceEducation^ objFinanceEducation;
        property Saving ^ objSaving;
    //Implementacion de constructores
    public:
        User();
        User(int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password);
        User(int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password, Finance^ objFinance, FinanceEducation^ objFinanceEducation, Saving^ objSaving);

};
}
