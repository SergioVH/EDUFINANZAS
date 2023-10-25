

using namespace System;
namespace EduFinanzasModel {
public ref class Test {
public: 
    private:
    String^ Type;
    int Level;
    String^ Questions;
    String^ Answers;
    double Mark;

    public:
        Test();
        Test(String^ Type, int Level, String^ Questions, String^ Answers, double Mark); 

};
}

