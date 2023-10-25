#include "LoginForm.h"
#include "UserForm.h"


/*
System::Void EduFinanzasView2::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	
	/*
    if ((txtUsername->Text == "leonardo") && (txtPassword->Text == "pucp123")) {
        
      
        this->Close(); 
    }
    else {
        MessageBox::Show("Usuario y contraseña incorrectos.");
    }
	
}
*/
System::Void EduFinanzasView2::LoginForm::btnNewUser_Click(System::Object^ sender, System::EventArgs^ e) {  
    UserForm^ intermediario = gcnew UserForm();
    intermediario->ControlBox = false; 
    intermediario->Show();
    
}
