
using namespace System;
namespace EduFinanzasModel {
public ref class Movements {
public: 
    private:
        double Amount;       
        double Daily;
        double Weekly;
        double Monthly;
        String^ Type;
        String^ Currency;
    public:
        Movements();
        Movements(double Amount, double Daily, double Weekly, double Monthly, String^ Type , String^ Currency);

};
}

