

#include "Entrepreneur.h"
using namespace EduFinanzasModel; 
Entrepreneur::Entrepreneur():User() {

}
Entrepreneur::Entrepreneur(String^ BusinessType, String^ EnterpriseName, int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password):User(ID ,Name, DocNumber,Email, PhoneNum,Password) {
	this->BusinessType = BusinessType;
	this->EnterpriseName = EnterpriseName;
}