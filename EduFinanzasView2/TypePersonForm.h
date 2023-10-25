#pragma once
#include "CategoryForm.h"

namespace EduFinanzasView2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TypePersonForm
	/// </summary>
	public ref class TypePersonForm : public System::Windows::Forms::Form
	{
	public:
		TypePersonForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TypePersonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnContinueTypePerson;
	private: System::Windows::Forms::ComboBox^ cmbFileFormat;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TypePersonForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnContinueTypePerson = (gcnew System::Windows::Forms::Button());
			this->cmbFileFormat = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione el tipo de persona:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(37, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(568, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// btnContinueTypePerson
			// 
			this->btnContinueTypePerson->Location = System::Drawing::Point(219, 247);
			this->btnContinueTypePerson->Name = L"btnContinueTypePerson";
			this->btnContinueTypePerson->Size = System::Drawing::Size(178, 31);
			this->btnContinueTypePerson->TabIndex = 2;
			this->btnContinueTypePerson->Text = L"Continuar";
			this->btnContinueTypePerson->UseVisualStyleBackColor = true;
			this->btnContinueTypePerson->Click += gcnew System::EventHandler(this, &TypePersonForm::btnContinueTypePerson_Click);
			// 
			// cmbFileFormat
			// 
			this->cmbFileFormat->FormattingEnabled = true;
			this->cmbFileFormat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Emprendedor", L"Estudiante", L"Empleado" });
			this->cmbFileFormat->Location = System::Drawing::Point(337, 216);
			this->cmbFileFormat->Name = L"cmbFileFormat";
			this->cmbFileFormat->Size = System::Drawing::Size(213, 24);
			this->cmbFileFormat->TabIndex = 3;
			// 
			// TypePersonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 281);
			this->Controls->Add(this->cmbFileFormat);
			this->Controls->Add(this->btnContinueTypePerson);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"TypePersonForm";
			this->Text = L"TypePersonForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: User ^ usuarioSeleccionado;
	private: System::Void btnContinueTypePerson_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cmbFileFormat->SelectedIndex == -1) { 
			MessageBox::Show("Debe seleccionar el tipo de persona que lo representa");
			return;
		}
		if (cmbFileFormat->SelectedItem->ToString()->Equals("Emprendedor")) { 
			//usuarioSeleccionado = gcnew Entrepreneur(); 
		} 
		else if (cmbFileFormat->SelectedItem->ToString()->Equals("Estudiante")) { 
			//usuarioSeleccionado = gcnew Student(); 
		}
		else if (cmbFileFormat->SelectedItem->ToString()->Equals("Empleado")) { 
			//usuarioSeleccionado = gcnew Employee(); 
		}
		MessageBox::Show("Felicidades, comienza esta nueva etapa de tu vida"); 
		CategoryForm^ categoryForm = gcnew CategoryForm();

		categoryForm->Show();
	}
};
}
