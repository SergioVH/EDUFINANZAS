#pragma once
 


using namespace EduFinanzasModel;
using namespace EduFinanzasController;
namespace EduFinanzasView2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
		{
			InitializeComponent();
			//Aqui
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtCelular;




	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvUsers;





	private: System::Windows::Forms::TextBox^ txtCorreo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtContraseña;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserEmail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserPassword;

	private: System::Windows::Forms::Button^ btnContinue;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtCelular = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvUsers = (gcnew System::Windows::Forms::DataGridView());
			this->UserID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(802, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(221, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(185, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(141, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Numero de DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(124, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Numero de celular";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(258, 87);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 22);
			this->txtID->TabIndex = 5;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(258, 115);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 22);
			this->txtNombre->TabIndex = 6;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &UserForm::txtNombre_TextChanged);
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(258, 143);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 22);
			this->txtDNI->TabIndex = 7;
			// 
			// txtCelular
			// 
			this->txtCelular->Location = System::Drawing::Point(258, 171);
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(100, 22);
			this->txtCelular->TabIndex = 8;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(139, 296);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(102, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Registrarse";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &UserForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(338, 296);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &UserForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(583, 296);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &UserForm::btnDelete_Click);
			// 
			// dgvUsers
			// 
			this->dgvUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->UserID, this->UserName,
					this->UserDNI, this->UserPhone, this->UserEmail, this->UserPassword
			});
			this->dgvUsers->Location = System::Drawing::Point(84, 343);
			this->dgvUsers->Name = L"dgvUsers";
			this->dgvUsers->RowHeadersWidth = 51;
			this->dgvUsers->RowTemplate->Height = 24;
			this->dgvUsers->Size = System::Drawing::Size(603, 140);
			this->dgvUsers->TabIndex = 13;
			this->dgvUsers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dgvUsers_CellClick);
			this->dgvUsers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dgvUsers_CellContentClick);
			// 
			// UserID
			// 
			this->UserID->HeaderText = L"Codigo";
			this->UserID->MinimumWidth = 6;
			this->UserID->Name = L"UserID";
			this->UserID->Width = 125;
			// 
			// UserName
			// 
			this->UserName->HeaderText = L"Nombre";
			this->UserName->MinimumWidth = 6;
			this->UserName->Name = L"UserName";
			this->UserName->Width = 125;
			// 
			// UserDNI
			// 
			this->UserDNI->HeaderText = L"Numero DNI";
			this->UserDNI->MinimumWidth = 6;
			this->UserDNI->Name = L"UserDNI";
			this->UserDNI->Width = 125;
			// 
			// UserPhone
			// 
			this->UserPhone->HeaderText = L"Celular";
			this->UserPhone->MinimumWidth = 6;
			this->UserPhone->Name = L"UserPhone";
			this->UserPhone->Width = 125;
			// 
			// UserEmail
			// 
			this->UserEmail->HeaderText = L"Correo";
			this->UserEmail->MinimumWidth = 6;
			this->UserEmail->Name = L"UserEmail";
			this->UserEmail->Width = 125;
			// 
			// UserPassword
			// 
			this->UserPassword->HeaderText = L"Contraseña";
			this->UserPassword->MinimumWidth = 6;
			this->UserPassword->Name = L"UserPassword";
			this->UserPassword->Width = 125;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(258, 204);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(100, 22);
			this->txtCorreo->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Correo";
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(258, 232);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(100, 22);
			this->txtContraseña->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(165, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Contraseña";
			// 
			// btnContinue
			// 
			this->btnContinue->Location = System::Drawing::Point(555, 504);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(161, 35);
			this->btnContinue->TabIndex = 19;
			this->btnContinue->Text = L"Continuar";
			this->btnContinue->UseVisualStyleBackColor = true;
			this->btnContinue->Click += gcnew System::EventHandler(this, &UserForm::btnContinue_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(383, 104);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(408, 131);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(802, 552);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtCorreo);
			this->Controls->Add(this->dgvUsers);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtCelular);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int UserID = Int32::Parse(txtID->Text);
	String^ name = txtNombre->Text; 
	String^ docNumber = txtDNI->Text; 
	String^ phoneNum = txtCelular->Text; 
	String^ email = txtCorreo->Text; 
	String^ password = txtContraseña->Text;
	User^ Usuario = gcnew User ();

	Usuario->ID = UserID;                 
	Usuario->Name = name;   
	Usuario->DocNumber = docNumber; 
	Usuario->PhoneNum = phoneNum; 
	Usuario->Email = email;
	Usuario->Password = password;
	//ANTES DE TRABAJAR CON EL GRID, TRABAJAMOS CON EL CONTROLLER DEL PROYECTO
	EduFinanzasController::Controller::AddUser(Usuario); //Esta linea se encarga de agregar el objeto "usuario" a la lista de usuarios
	showUsers();
}
private: System::Void dgvUsers_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
void showUsers() { 
	List<User^>^ Usuarios = EduFinanzasController::Controller::QueryAllUser();  
	dgvUsers->Rows->Clear(); 
	for (int i = 0; i < Usuarios->Count;  i++) {
		
		User^ Usuario = Usuarios[i]; 
		dgvUsers->Rows->Add(gcnew array<String^>{
			"" + Usuario->ID, 
				Usuario->Name, 
				"" + Usuario->DocNumber, 
				"" + Usuario->PhoneNum, 
				"" + Usuario->Email, 
				"" + Usuario->Password, 
		});
	}
}
private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
	showUsers();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int userID = Int32::Parse(txtID->Text);  
	EduFinanzasController::Controller::DeleteUser(userID); 
	showUsers();
} 
private: System::Void dgvUsers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { 
	int userID = Int32::Parse(dgvUsers->Rows[dgvUsers->SelectedCells[0]->RowIndex]
		->Cells[0]->Value->ToString());
	User^ usuario = EduFinanzasController::Controller::QueryUserById(userID); 
	txtID->Text = "" + usuario->ID;
	txtNombre->Text = usuario->Name; 
	txtDNI->Text = usuario->DocNumber;
	txtCorreo->Text = usuario->Email; 
	txtCelular->Text = usuario->PhoneNum;
	txtContraseña->Text = usuario->Password;
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	int userID = Int32::Parse(txtID->Text);
	String^ Name = txtNombre->Text; 
	String^ DocNumber = txtDNI->Text;
	String^ Email = txtCorreo->Text;
	String^ PhoneNum = txtCelular->Text;
	String^ Password= txtContraseña->Text;


	User^ usuario = gcnew User(); 
	usuario->ID = userID;  
	usuario->Name = Name;
	usuario->DocNumber = DocNumber;
	usuario->Email = Email;
	usuario->PhoneNum = PhoneNum;
	usuario->Password = Password; 

	EduFinanzasController::Controller::UpdateUser(usuario); 
	showUsers(); 
}
private: System::Void pbPhoto_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close(); 
}
private: System::Void txtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
