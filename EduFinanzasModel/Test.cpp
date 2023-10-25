

#include "Test.h"
using namespace EduFinanzasModel; 
Test::Test() {

}
Test::Test(String^ Type, int Level, String^ Questions, String^ Answers, double Mark) {
	this->Type = Type;
	this->Level = Level;
	this->Questions = Questions;
	this->Answers = Answers;
	this->Mark = Mark;

}

