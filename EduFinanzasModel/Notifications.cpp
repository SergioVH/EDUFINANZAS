


#include "Notifications.h"
using namespace EduFinanzasModel; 
Notifications::Notifications() {

}
Notifications::Notifications(bool Enabled, String^ Type, String^ Message) {
	this->Enabled = Enabled;
	this->Type = Type;
	this->Message = Message;
}