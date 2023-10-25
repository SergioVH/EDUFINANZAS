#pragma once
//#include "../EduFinanzasModel/User.h"
using namespace System; 
using namespace EduFinanzasModel;    

namespace EduFinanzasPersistance {
	public ref class Persistance {
		
	public:
		static String^ File_Name = "users.txt";
		static void PersisTextFile (String^,Object^);
		static Object^ LoadTextFile(String^); 
		//Metodos para la persistencia del usuario
		static void AddedUser(User^ user);       
	};
}

