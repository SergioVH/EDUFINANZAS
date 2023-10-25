#pragma once
#include "UserMainForm.h"
namespace EduFinanzasView2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Intermediario
	/// </summary>
	public ref class Intermediario : public System::Windows::Forms::Form
	{
	public:
		Intermediario(void)
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
		~Intermediario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnContinueInter;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnContinueInter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido a EduFinanzas";
			// 
			// btnContinueInter
			// 
			this->btnContinueInter->Location = System::Drawing::Point(129, 75);
			this->btnContinueInter->Name = L"btnContinueInter";
			this->btnContinueInter->Size = System::Drawing::Size(94, 22);
			this->btnContinueInter->TabIndex = 1;
			this->btnContinueInter->Text = L"Continuar";
			this->btnContinueInter->UseVisualStyleBackColor = true;
			this->btnContinueInter->Click += gcnew System::EventHandler(this, &Intermediario::btnContinueInter_Click);
			// 
			// Intermediario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(351, 118);
			this->Controls->Add(this->btnContinueInter);
			this->Controls->Add(this->label1);
			this->Name = L"Intermediario";
			this->Text = L"Intermediario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnContinueInter_Click(System::Object^ sender, System::EventArgs^ e) {
		UserMainForm^ userMainForm = gcnew UserMainForm();
		userMainForm->Show();
		this->Close();
	}
	};
}
