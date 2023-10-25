



#include "Movements.h"
using namespace System;
namespace EduFinanzasModel {
    [Serializable]
public ref class Expenses: Movements {
public: 
    property String^ cantidadGastos; 
    property String^ descripcionGastos;
public:
    Expenses(); 
    Expenses(String^ cantidadGastos, String^ descripcionGastos, double Amount, double Daily, double Weekly, double Monthly, String^ Type, String^ Currency);

};
}
