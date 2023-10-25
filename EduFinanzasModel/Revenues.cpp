

#include "Revenues.h"
using namespace EduFinanzasModel; 
Revenues::Revenues():Movements() {

}
Revenues::Revenues(String^ cantidadIngresos, String^ descripcionIngresos, double Amount, double Daily, double Weekly, double Monthly, String^ Type, String^ Currency):Movements(Amount, Daily, Weekly, Monthly, Type, Currency) {
	this->cantidadIngresos = cantidadIngresos; 
	this->descripcionIngresos = descripcionIngresos; 
}

