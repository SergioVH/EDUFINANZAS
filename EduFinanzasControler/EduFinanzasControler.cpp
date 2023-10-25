#include "EduFinanzasControler.h" 
#include "../EduFinanzasPersistance/EduFinanzasPersistance.h"


void EduFinanzasControler::Controller::AddUser(User^user) { 
	EduFinanzasPersistance::Persistance::AddedUser(user);
}