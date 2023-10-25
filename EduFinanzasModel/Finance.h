
#include "Notifications.h"
#include "Movements.h"
using namespace System;
using namespace System::Collections::Generic;
namespace EduFinanzasModel {
public ref class Finance {
public: 
    private:
        int State;
        String^ Date;
        //Aqui se representa la composicion y/o agregacion
        List<Movements^>^ ListMovements; 
        Notifications^ objNotification;
    public:
        Finance();
        Finance(int State, String^ Date, List<Movements^>^ ListMovements, Notifications^ objNotification);

};
}

