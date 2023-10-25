#pragma once
#include "EduFinanzasPersistance.h" 
using namespace System::IO;
void EduFinanzasPersistance::Persistance::PersisTextFile(String^ filename, Object^ persistObject) {
	FileStream^ file; 
	StreamWriter^ writer; 
	//falta programar la persistencia
}
Object^EduFinanzasPersistance::Persistance::LoadTextFile(String^) {
	FileStream^ file;
	StreamReader^ reader;
	Object^ result;
	return result;
	//falta progrmar la lectura
}
void EduFinanzasPersistance::Persistance::AddedUser(User^ user) {
	PersisTextFile(File_Name,user);
}