


#include "FinanceEducation.h"
using namespace EduFinanzasModel; 
FinanceEducation::FinanceEducation() {

}
FinanceEducation::FinanceEducation(String^ Type, String^ Content, int Progress, List<Test^>^ listTest) {
	this->Type = Type; 
	this->Content = Content;
	this->Progress = Progress;
	this->listTest = listTest; 
}
