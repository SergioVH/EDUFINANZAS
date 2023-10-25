/**
 * Project Untitled
 */



using namespace System;
namespace EduFinanzasModel {
public ref class Saving {
private: 
    String^ Name;
    String^ SavingType;
    double AddSaved;
    double TotalSaved;
    DateTime^ InitDate;
    DateTime^ EndDate;
    double Goal;
public:
    Saving();
    Saving(String^ Name, String^ SavingType, double AddSaved, double TotalSaved, DateTime^ InitDate, DateTime^ EndDate, double Goal);
};
}