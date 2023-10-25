

#include "Student.h"
using namespace EduFinanzasModel;
Student::Student():User() {

}
Student::Student(String^ Career, 
	String^ University, 
	int ID, 
	String^ Name, 
	String^ DocNumber, 
	String^ Email, 
	String^ PhoneNum, 
	String^ Password):User(
		ID, 
		Name, 
		DocNumber, 
		Email, 
		PhoneNum, 
		Password) {
	this->Career= Career;
	this->University= University; 
}