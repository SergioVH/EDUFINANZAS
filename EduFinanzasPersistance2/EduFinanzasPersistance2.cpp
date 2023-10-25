#pragma once
#include "EduFinanzasPersistance2.h" 
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;
//AQUI SE PROGRAMARON TODOS LOS METODOS 
void EduFinanzasPersistance::Persistance::PersisTextFile(String^ fileName, Object^ persistObject) {
	FileStream^ file;//file clase que se encarga de manejar la informacion de archivos 
	StreamWriter^ writer;// writer clase que ayuda a manejar la escritura	
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write); 
	writer = gcnew StreamWriter(file); 
	//HAREMOS UNA VERIFICACION, PARA SABER EN QUE ARCHIVO GUARDARE A LOS USUARIOS, SEPARADO DEL RESTO DE OBJETOS
	//si el objeto persist object coincide con el tipo de dato
	if (persistObject->GetType()==List<User^>::typeid) {
		List<User^>^Usuarios = (List<User^>^)persistObject;
		for (int i = 0; i < Usuarios->Count; i++) { 
			User^ r = Usuarios[i];
			writer->WriteLine(r->ID + ", " +r->Name + ", " +r->DocNumber + ", " +r->PhoneNum + ", " +r->Email + ", " +r->Password);
		}
	}

		if (writer != nullptr) writer->Close();
		if (file != nullptr) file->Close();
	
}
void EduFinanzasPersistance::Persistance::PersisTextFileEgresos(String ^ fileName, Object^ persistObject) {
	FileStream^ file;//file clase que se encarga de manejar la informacion de archivos  
	StreamWriter^ writer;// writer clase que ayuda a manejar la escritura	 
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);  
	writer = gcnew StreamWriter(file);
	//HAREMOS UNA VERIFICACION, PARA SABER EN QUE ARCHIVO GUARDARE A LOS USUARIOS, SEPARADO DEL RESTO DE OBJETOS
	//si el objeto persist object coincide con el tipo de dato
	if (persistObject->GetType() == List<Gastos^>::typeid) { 
		List<Gastos^>^ gastos = (List<Gastos^>^)persistObject; 
		for (int i = 0; i < gastos->Count; i++) { 
			Gastos^ r = gastos[i];  
			writer->WriteLine(r->cantidadGastos + ", " + r->descripcionGastos); 
		}
	}

	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();
}
Object^ EduFinanzasPersistance::Persistance::LoadTextFileEgresos(String^fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;

	//falta progrmar la lectura
	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		//llenamos el objeto reader
		reader = gcnew StreamReader(file);
		if (fileName->Equals(Egresos_File_Name)) { 
			result = gcnew List<Gastos^>(); 
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				Gastos^ gasto = gcnew Gastos(); 

				gasto->cantidadGastos = record[0]; 
				gasto->descripcionGastos = record[1]; 
				((List<Gastos^>^)result)->Add(gasto);  
			}
		}
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}
void EduFinanzasPersistance::Persistance::PersisTextFileIngresos(String^ fileName, Object^ persistObject) {
	FileStream^ file;//file clase que se encarga de manejar la informacion de archivos 
	StreamWriter^ writer;// writer clase que ayuda a manejar la escritura	
	file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
	writer = gcnew StreamWriter(file);
	//HAREMOS UNA VERIFICACION, PARA SABER EN QUE ARCHIVO GUARDARE A LOS USUARIOS, SEPARADO DEL RESTO DE OBJETOS
	//si el objeto persist object coincide con el tipo de dato
	if (persistObject->GetType() == List<Revenues^>::typeid) { 
		List<Revenues^>^ ingresos = (List<Revenues^>^)persistObject; 
		for (int i = 0; i < ingresos->Count; i++) { 
			Revenues^ r = ingresos[i]; 
			writer->WriteLine(r->cantidadIngresos + ", " + r->descripcionIngresos); 
		}
	}

	if (writer != nullptr) writer->Close();
	if (file != nullptr) file->Close();

}
Object^ EduFinanzasPersistance::Persistance::LoadTextFileIngresos(String^ fileName) { 
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;

	//falta progrmar la lectura
	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		//llenamos el objeto reader
		reader = gcnew StreamReader(file);
		if (fileName->Equals(Ingresos_File_Name)) {
			result = gcnew List<Revenues^>(); 
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break;
				array<String^>^ record = line->Split(',');
				Revenues^ ingreso = gcnew Revenues(); 
				
				ingreso->cantidadIngresos = record[0];
				ingreso->descripcionIngresos = record[1];
				((List<Revenues^>^)result)->Add(ingreso); 
			}
		}
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;

}


void EduFinanzasPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
	StreamWriter^ writer;
	try {
		writer = gcnew  StreamWriter(fileName);
		if (persistObject->GetType() == List<User^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<User^>::typeid); 
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally { //Es el más importante
		if (writer != nullptr) writer->Close();
	}
}
Object^ EduFinanzasPersistance::Persistance::LoadXMLFile(String^ fileName) {
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals(User_XML_File_Name)) {
				xmlSerializer = gcnew XmlSerializer(List<User^>::typeid); 
				result = (List<User^>^)xmlSerializer->Deserialize(reader); 
			}
			if (reader != nullptr) reader->Close();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}
	return result;
}

Object^ EduFinanzasPersistance::Persistance::LoadTextFile(String^fileName) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;

	//falta progrmar la lectura
	if (File::Exists(fileName)) {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		//llenamos el objeto reader
		reader = gcnew StreamReader(file);
		if (fileName->Equals(User_File_Name)) { 
			result = gcnew List<User^>();
			while (true) {
				String^ line = reader->ReadLine();
				if (line == nullptr) break; 
				array<String^>^ record=  line->Split(','); 
				User^ Usuario = gcnew User();
				Usuario->ID = Convert::ToInt32(record[0]);  
				Usuario->Name = record[1];
				Usuario->DocNumber = record[2];
				Usuario->PhoneNum = record[3];
				Usuario->Email = record[4];
				Usuario->Password = record[5]; 
				((List<User^>^)result)->Add(Usuario);
			}
		}
		if (reader != nullptr) reader->Close(); 
		if (file != nullptr) file->Close();
	}
	return result;
	
}
void EduFinanzasPersistance::Persistance::AddedUser(User^ Usuario) {
	userslist->Add(Usuario); 
	PersisTextFile(User_File_Name, userslist);  
	//PersistXMLFile(User_XML_File_Name, userslist);  

}


void EduFinanzasPersistance::Persistance::AddedIngresos(Revenues^ ingreso) {
	ingresoslist->Add(ingreso);  
	PersisTextFileIngresos(Ingresos_File_Name, ingresoslist); 
	

}
void EduFinanzasPersistance::Persistance::AddedGastos(Gastos^ gasto) {  
	egresoslist->Add(gasto); 
	PersisTextFileEgresos(Egresos_File_Name, egresoslist);


}
void EduFinanzasPersistance::Persistance::UpdateUser(User^ Usuario) {  
	for (int i = 0; i < userslist->Count; i++) {
		if (userslist[i]->ID == Usuario->ID)  
			userslist[i] = Usuario; 
	}
	PersisTextFile(User_File_Name, userslist); 
	//PersistXMLFile (User_XML_File_Name, userslist); 
	
}
void EduFinanzasPersistance::Persistance::DeleteUser(int userID) {
	for (int i = 0; i < userslist->Count; i++) {
		if (userslist[i]->ID == userID)
			userslist->RemoveAt(i); 
	}
	PersisTextFile(User_File_Name, userslist); 
	//PersistXMLFile(User_XML_File_Name, userslist); 
	
}
void EduFinanzasPersistance::Persistance::DeleteIngreso(String^ cantidadIngresos) { 
	for (int i = 0; i < ingresoslist->Count; i++) { 
		if (ingresoslist[i]->cantidadIngresos == cantidadIngresos)  
			ingresoslist->RemoveAt(i); 
	}
	PersisTextFileIngresos(Ingresos_File_Name, ingresoslist); 
}
void EduFinanzasPersistance::Persistance::DeleteGasto(String^ cantidadGastos) { 
	for (int i = 0; i < ingresoslist->Count; i++) {
		if (egresoslist[i]->cantidadGastos == cantidadGastos) 
			egresoslist->RemoveAt(i);
	}
	PersisTextFileEgresos(Egresos_File_Name, egresoslist); 
}
List<User^>^EduFinanzasPersistance::Persistance::QueryAllUser() { 
	userslist = (List<User^>^)LoadTextFile(User_File_Name);
	//userslist = (List<User^>^)LoadXMLFile(User_XML_File_Name);; 
	return userslist; 
}
List<Revenues^>^ EduFinanzasPersistance::Persistance::QueryAllIngresos() {
	ingresoslist=(List<Revenues^>^)LoadTextFileIngresos(Ingresos_File_Name);  
	return ingresoslist; 
	
 }
List<Gastos^>^ EduFinanzasPersistance::Persistance::QueryAllGastos() {
	egresoslist = (List<Gastos^>^)LoadTextFileEgresos(Egresos_File_Name);
	return egresoslist;

}
User^ EduFinanzasPersistance::Persistance::QueryUserById(int userID) {
	//robotsList = (List<RobotWaiter^>^)LoadTextFile(ROBOT_FILE_NAME);	
	//robotsList = (List<RobotWaiter^>^)LoadXMLFile(ROBOT_XML_FILE_NAME);
	userslist = (List<User^>^)LoadTextFile(User_File_Name); 
	for (int i = 0; i < userslist->Count; i++) {
		if (userslist[i]->ID == userID)
			return userslist[i];
	}
	return nullptr;
}