/**
 * Project Untitled
 */




#include "Movements.h"

namespace EduFinanzasModel {
[Serializable]
public ref class Revenues: Movements {
public: 
    property String^ cantidadIngresos; 
    property String^ descripcionIngresos;
public:
    Revenues();
    Revenues(String^ cantidadIngresos, String^ descripcionIngresos, double Amount, double Daily, double Weekly, double Monthly, String^ Type, String^ Currency);

};
}

