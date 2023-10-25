#include "EduFinanzasController.h"
using namespace System::IO;
void EduFinanzasController::Controller::AddIngreso(Revenues^ingreso) {
    EduFinanzasPersistance::Persistance::AddedIngresos(ingreso);    
}
void EduFinanzasController::Controller::AddGasto(Gastos^gasto) {
    EduFinanzasPersistance::Persistance::AddedGastos(gasto); 
}
void EduFinanzasController::Controller::AddUser(User^ Usuario) { 
	EduFinanzasPersistance::Persistance::AddedUser(Usuario); //HACEMOS USO DEL PERSISTANCE, este metodo ya esta definido en EduFinanzasPersistance 
}
void EduFinanzasController::Controller::DeleteUser(int userID) { 
	EduFinanzasPersistance::Persistance::DeleteUser(userID);  
}
void EduFinanzasController::Controller::DeleteIngreso(String^ cantidadIngresos) {
    EduFinanzasPersistance::Persistance::DeleteIngreso(cantidadIngresos); 
}
void EduFinanzasController::Controller::DeleteGasto(String^ cantidadGastos) {
    EduFinanzasPersistance::Persistance::DeleteGasto(cantidadGastos); 
}
void EduFinanzasController::Controller::UpdateUser(User^ Usuario) {    
	EduFinanzasPersistance::Persistance::UpdateUser(Usuario);   
}

User^ EduFinanzasController::Controller::QueryUserById(int userID) {  
	return EduFinanzasPersistance::Persistance::QueryUserById(userID);   
}
List<User^>^EduFinanzasController::Controller::QueryAllUser() {
	return EduFinanzasPersistance::Persistance::QueryAllUser();
}
List<Revenues^>^ EduFinanzasController::Controller::QueryAllIngresos() {
    return EduFinanzasPersistance::Persistance::QueryAllIngresos(); 
}
List<Gastos^>^ EduFinanzasController::Controller::QueryAllGastos() {
    return EduFinanzasPersistance::Persistance::QueryAllGastos(); 
}
List<User^>^ EduFinanzasController::Controller::buscarSesiones(String^ Name, String^ Password, int* Existe) {
    *Existe = 0;

    List<User^>^ listaSesionEncontrada = gcnew List<User^>();
    array<String^>^ lineas = File::ReadAllLines("users.txt");

    String^ separadores = ",";

    for each (String ^ lineaCarrera in lineas) {
        array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
        int userID = Convert::ToInt32(datos[0]);
        String^ userName = datos[1];  // Cambié el nombre de la variable para evitar sombrear el parámetro Name
        String^ DocNumber = datos[2];
        String^ Email = datos[3];
        String^ PhoneNum = datos[4];
        String^ userPassword = datos[5];  // Cambié el nombre de la variable para evitar sombrear el parámetro Password

        if (userName -> Contains(Name) && userPassword->Contains(Password)) {  // Compara directamente el nombre y la contraseña 
            *Existe = 1;
            User^ objSesion = gcnew User(userID, userName, DocNumber, Email, PhoneNum, userPassword, nullptr, nullptr, nullptr);
            listaSesionEncontrada->Add(objSesion);
        }
    }

    return listaSesionEncontrada;
}


