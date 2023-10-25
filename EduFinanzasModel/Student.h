




#include "User.h"

using namespace System;
namespace EduFinanzasModel {
public ref class Student: User {
private: 
    String^ Career;
    String^ University;
public:
    Student();
    Student(String^ Career, String^ University, int ID, String^ Name, String^ DocNumber, String^ Email, String^ PhoneNum, String^ Password); 
};
}

