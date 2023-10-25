/**
 * Project Untitled
 */


#include "Test.h"
using namespace System;
using namespace System::Collections::Generic;
namespace EduFinanzasModel {
public ref class FinanceEducation {
public:
    private:
    String^ Type;
    String^ Content;
    int Progress;
    List<Test^>^ listTest;
    public:
        FinanceEducation();
        FinanceEducation(String^ Type, String^ Content, int Progress, List<Test^>^ listTest);

};
}
