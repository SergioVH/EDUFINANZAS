

#include "Employee.h"
using namespace EduFinanzasModel; 
Employee::Employee():User() { 

}
Employee:: Employee(String^ Company, String^ Ocupation, int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password) : User(ID, Name, DocNumber, Email, PhoneNum, Password) {
	this->Company = Company;
	this->Ocupation = Ocupation;
}

