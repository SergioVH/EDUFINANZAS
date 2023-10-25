#pragma once

using namespace System;
using namespace EduFinanzasModel;
using namespace System::Collections::Generic;
namespace EduFinanzasController {
	public ref class Controller {
	public:
		static void AddUser(User^);
		static void AddIngreso(Revenues^);
		static void AddGasto(Gastos^); 
		static void DeleteUser(int userID);
		static void DeleteIngreso(String^ cantidadIngresos);
		static void DeleteGasto(String^ cantidadGastos);
		static void UpdateUser(User^ Usuario); 
		static User^ QueryUserById(int UserID);
		static List<User^>^QueryAllUser();
		static List<Revenues^>^ QueryAllIngresos();
		static List<Gastos^>^ QueryAllGastos();
		static List<User^>^buscarSesiones(String^ Name, String^ Password, int* Existe);

	};
}