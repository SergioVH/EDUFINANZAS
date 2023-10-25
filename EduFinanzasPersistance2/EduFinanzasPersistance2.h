#pragma once
//#include "../EduFinanzasModel/User.h"
using namespace System;
using namespace EduFinanzasModel;
using namespace System::Collections::Generic;

namespace EduFinanzasPersistance {
	public ref class Persistance {
	private:
		static List<User^>^ userslist = gcnew List<User^>();
		static List<Revenues^>^ ingresoslist = gcnew List<Revenues^>();
		static List<Gastos^>^ egresoslist = gcnew List <Gastos^>();
	public:
		//La palabra static es para programar un metodo que no hara uso del persistance
		static String^ User_File_Name = "users.txt";
		static String^ User_XML_File_Name = "users.xml";

		static String^ Ingresos_File_Name = "ingresos.txt";
		static String^ Egresos_File_Name = "egresos.txt";
		static void PersisTextFileIngresos(String^, Object^);
		static Object^ LoadTextFileIngresos(String^);

		static void PersisTextFileEgresos(String^, Object^);
		static Object^ LoadTextFileEgresos(String^);

		static void PersisTextFile(String^, Object^); //Esta cadena se interpreta asi: "quiero mediante un metodo persistir los datos de un objeto en una cadena "
		static Object^ LoadTextFile(String^); //Esto lee el archivo de texto
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);
		//Metodos para la persistencia del usuario
		static void AddedUser(User^ Usuario);
		static void UpdateUser(User^ Usuario); 
		static void DeleteUser(int userID);
		static void DeleteIngreso(String^ cantidadIngresos); 
		static void DeleteGasto(String^ cantidadGastos);
		static User^ QueryUserById(int userID); 
		static List<User^>^QueryAllUser();
		static List<Revenues^>^ QueryAllIngresos(); 
		static List<Gastos^>^ QueryAllGastos(); 
		static void AddedIngresos(Revenues^ingreso);
		static void AddedGastos(Gastos^gasto);
	};
}
	