


#include "User.h"

using namespace System;
                            //Estos dos puntos representan la herencia
                            //La clase Entrepreneur hereda de la clase User
namespace EduFinanzasModel {
public ref class Entrepreneur: User {
    private: 
    String^ BusinessType;
    String^ EnterpriseName;
    public:
        Entrepreneur();
        Entrepreneur(String^ BusinessType, String^ EnterpriseName, int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password);

};
}
