



#include "Finance.h"
using namespace EduFinanzasModel;
Finance::Finance() {

}
Finance::Finance(int State, String^ Date, List<Movements^>^ ListMovements, Notifications^ objNotification) {
	this->State = State;
	this->State = State; 
	this->ListMovements = ListMovements; 
	this->objNotification = objNotification;
}