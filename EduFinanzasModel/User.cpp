
#include "User.h"
using namespace EduFinanzasModel; 
User::User() {

}
User::User(int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password) {
	this->ID = ID; 
	this->Name = Name;
	this->DocNumber = DocNumber;
	this->Email = Email;
	this->PhoneNum = PhoneNum;
	this->Password = Password;
}
User::User(int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password, Finance^ objFinance, FinanceEducation^ objFinanceEducation, Saving^ objSaving) {
	this->ID = ID; 
	this->Name = Name;
	this->DocNumber = DocNumber;
	this->Email = Email;
	this->PhoneNum = PhoneNum; 
	this->Password = Password; 
	this->objFinance = objFinance;
	this->objFinanceEducation = objFinanceEducation;
	this->objSaving = objSaving; 
}
