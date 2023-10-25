

#include "Expenses.h"
using namespace EduFinanzasModel;
Expenses::Expenses():Movements() {

}
Expenses::Expenses(String^ cantidadGastos, String^ descripcionGastos, double Amount, double Daily, double Weekly, double Monthly, String^ Type, String^ Currency) :Movements(Amount, Daily, Weekly, Monthly, Type, Currency) {
	this->cantidadGastos = cantidadGastos; 
	this->descripcionGastos = descripcionGastos;
}
