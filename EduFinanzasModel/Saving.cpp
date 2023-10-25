


#include "Saving.h"
using namespace EduFinanzasModel; 
Saving::Saving() {

}
Saving::Saving(String^ Name, String^ SavingType, double AddSaved, double TotalSaved, DateTime^ InitDate, DateTime^ EndDate,  double Goal) {
	this->Name= Name;
	this->SavingType = SavingType;
	this->AddSaved = AddSaved;
	this->TotalSaved = TotalSaved;
	this->InitDate = InitDate;
	this->EndDate = EndDate;
	this->Goal = Goal; 
}