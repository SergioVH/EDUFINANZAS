


#include "User.h"

using namespace System;
namespace EduFinanzasModel{


public ref class Employee: User {
private: 
    String^ Company; 
    String^ Ocupation;  
public:
    Employee(); 
    Employee(String^ Company, String^ Ocupation, int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password);
};
}
