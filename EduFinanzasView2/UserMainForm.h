#pragma once


#include "LoginForm.h"
#include "CategoryForm.h"
namespace EduFinanzasView2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserMainForm
	/// </summary>
	public ref class UserMainForm : public System::Windows::Forms::Form
	{
	public:
		UserMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->IsMdiContainer = true; //un contenedor Mdi, es un contenedor que permite soportar ventanas internas.
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chatDeAyudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pb1;
	private: System::Windows::Forms::ToolStripMenuItem^ tusMetasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iniciarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ metasDeAhorroToolStripMenuItem;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tusMetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatDeAyudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pb1 = (gcnew System::Windows::Forms::PictureBox());
			this->metasDeAhorroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->archivoToolStripMenuItem,
					this->mantenimientosToolStripMenuItem, this->operacionesToolStripMenuItem, this->tusMetasToolStripMenuItem, this->reportesToolStripMenuItem,
					this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(902, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &UserMainForm::menuStrip1_ItemClicked);
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->usuariosToolStripMenuItem });
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(148, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserMainForm::usuariosToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->iniciarToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(208, 24);
			this->operacionesToolStripMenuItem->Text = L"Categoriza tus movimientos";
			// 
			// iniciarToolStripMenuItem
			// 
			this->iniciarToolStripMenuItem->Name = L"iniciarToolStripMenuItem";
			this->iniciarToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->iniciarToolStripMenuItem->Text = L"Iniciar";
			this->iniciarToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserMainForm::iniciarToolStripMenuItem_Click);
			// 
			// tusMetasToolStripMenuItem
			// 
			this->tusMetasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->metasDeAhorroToolStripMenuItem });
			this->tusMetasToolStripMenuItem->Name = L"tusMetasToolStripMenuItem";
			this->tusMetasToolStripMenuItem->Size = System::Drawing::Size(89, 26);
			this->tusMetasToolStripMenuItem->Text = L"Tus metas";
			this->tusMetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserMainForm::tusMetasToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(157, 24);
			this->reportesToolStripMenuItem->Text = L"Ingresa a tus Limites";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->chatDeAyudaToolStripMenuItem,
					this->acercaDeToolStripMenuItem
			});
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(139, 24);
			this->ayudaToolStripMenuItem->Text = L"Seccion de ayuda";
			// 
			// chatDeAyudaToolStripMenuItem
			// 
			this->chatDeAyudaToolStripMenuItem->Name = L"chatDeAyudaToolStripMenuItem";
			this->chatDeAyudaToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->chatDeAyudaToolStripMenuItem->Text = L"Chat de ayuda";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// pb1
			// 
			this->pb1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb1.Image")));
			this->pb1->Location = System::Drawing::Point(0, 31);
			this->pb1->Name = L"pb1";
			this->pb1->Size = System::Drawing::Size(902, 350);
			this->pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb1->TabIndex = 1;
			this->pb1->TabStop = false;
			this->pb1->Click += gcnew System::EventHandler(this, &UserMainForm::pb1_Click);
			// 
			// metasDeAhorroToolStripMenuItem
			// 
			this->metasDeAhorroToolStripMenuItem->Name = L"metasDeAhorroToolStripMenuItem";
			this->metasDeAhorroToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->metasDeAhorroToolStripMenuItem->Text = L"Metas de ahorro";
			this->metasDeAhorroToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserMainForm::metasDeAhorroToolStripMenuItem_Click);
			// 
			// UserMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(902, 377);
			this->Controls->Add(this->pb1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UserMainForm";
			this->Text = L"UserMainForm";
			this->Load += gcnew System::EventHandler(this, &UserMainForm::UserMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void operacToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void UserMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// Crear una instancia de la ventana de inicio de sesión (LoginForm)
	LoginForm^ loginForm = gcnew LoginForm();
	// Establecer ControlBox en false para ocultar los botones de cierre, minimizar y maximizar
	loginForm->ControlBox = false;
	// Mostrar la ventana de inicio de sesión de forma modal
	loginForm->ShowDialog();
} 

private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pb1_Click(System::Object^ sender, System::EventArgs^ e) { 

}
private: System::Void tusMetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void iniciarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CategoryForm^ categoryForm = gcnew CategoryForm();
	categoryForm->Show();
	
}
private: System::Void metasDeAhorroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
