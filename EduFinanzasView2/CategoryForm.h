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
	/// Resumen de CategoryForm
	/// </summary>
	public ref class CategoryForm : public System::Windows::Forms::Form
	{
	public:
		CategoryForm(void)
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
		~CategoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::TextBox^ txtmonto;
	private: System::Windows::Forms::TextBox^ txtdescripcion;
	private: System::Windows::Forms::DataGridView^ dgvExpenses;









	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ btnAddCategory;

	private: System::Windows::Forms::Button^ btnDeleteCategory;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;



	private: System::Windows::Forms::Button^ btnContinueCategory;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Expenses;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CategoryForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtmonto = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->dgvExpenses = (gcnew System::Windows::Forms::DataGridView());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Expenses = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAddCategory = (gcnew System::Windows::Forms::Button());
			this->btnDeleteCategory = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnContinueCategory = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvExpenses))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 211);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Movimientos";
			// 
			// txtmonto
			// 
			this->txtmonto->Location = System::Drawing::Point(332, 203);
			this->txtmonto->Name = L"txtmonto";
			this->txtmonto->Size = System::Drawing::Size(184, 22);
			this->txtmonto->TabIndex = 7;
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(580, 203);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(184, 22);
			this->txtdescripcion->TabIndex = 13;
			// 
			// dgvExpenses
			// 
			this->dgvExpenses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvExpenses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Type, this->Expenses,
					this->Description
			});
			this->dgvExpenses->Location = System::Drawing::Point(103, 303);
			this->dgvExpenses->Name = L"dgvExpenses";
			this->dgvExpenses->RowHeadersWidth = 51;
			this->dgvExpenses->RowTemplate->Height = 24;
			this->dgvExpenses->Size = System::Drawing::Size(624, 177);
			this->dgvExpenses->TabIndex = 19;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Tipo";
			this->Type->MinimumWidth = 6;
			this->Type->Name = L"Type";
			this->Type->Width = 125;
			// 
			// Expenses
			// 
			this->Expenses->HeaderText = L"Monto";
			this->Expenses->MinimumWidth = 6;
			this->Expenses->Name = L"Expenses";
			this->Expenses->Width = 125;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Descripcion";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(390, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Monto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(635, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Descripcion";
			// 
			// btnAddCategory
			// 
			this->btnAddCategory->Location = System::Drawing::Point(256, 258);
			this->btnAddCategory->Name = L"btnAddCategory";
			this->btnAddCategory->Size = System::Drawing::Size(128, 33);
			this->btnAddCategory->TabIndex = 22;
			this->btnAddCategory->Text = L"Agregar";
			this->btnAddCategory->UseVisualStyleBackColor = true;
			this->btnAddCategory->Click += gcnew System::EventHandler(this, &CategoryForm::btnAddCategory_Click);
			// 
			// btnDeleteCategory
			// 
			this->btnDeleteCategory->Location = System::Drawing::Point(418, 261);
			this->btnDeleteCategory->Name = L"btnDeleteCategory";
			this->btnDeleteCategory->Size = System::Drawing::Size(128, 24);
			this->btnDeleteCategory->TabIndex = 24;
			this->btnDeleteCategory->Text = L"Eliminar";
			this->btnDeleteCategory->UseVisualStyleBackColor = true;
			this->btnDeleteCategory->Click += gcnew System::EventHandler(this, &CategoryForm::btnDeleteCategory_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(783, 172);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(66, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"+Verde";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Firebrick;
			this->label5->Location = System::Drawing::Point(74, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 16);
			this->label5->TabIndex = 33;
			this->label5->Text = L"- Rojo";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ingreso", L"Gasto" });
			this->comboBox1->Location = System::Drawing::Point(147, 203);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 24);
			this->comboBox1->TabIndex = 34;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CategoryForm::comboBox1_SelectedIndexChanged);
			// 
			// btnContinueCategory
			// 
			this->btnContinueCategory->Location = System::Drawing::Point(611, 492);
			this->btnContinueCategory->Name = L"btnContinueCategory";
			this->btnContinueCategory->Size = System::Drawing::Size(156, 27);
			this->btnContinueCategory->TabIndex = 38;
			this->btnContinueCategory->Text = L"Continuar";
			this->btnContinueCategory->UseVisualStyleBackColor = true;
			this->btnContinueCategory->Click += gcnew System::EventHandler(this, &CategoryForm::button1_Click);
			// 
			// CategoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(776, 528);
			this->Controls->Add(this->btnContinueCategory);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnDeleteCategory);
			this->Controls->Add(this->btnAddCategory);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgvExpenses);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->txtmonto);
			this->Controls->Add(this->label1);
			this->Name = L"CategoryForm";
			this->Text = L"CategoryForm";
			this->Load += gcnew System::EventHandler(this, &CategoryForm::CategoryForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvExpenses))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void btnAddCategory_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem->ToString()->Equals("Ingreso")) {
			String^ CantidadIngresos = txtmonto->Text;  
			String^ DescripcionIngresos = txtdescripcion->Text;			 
			Revenues^ ingreso = gcnew Revenues();
			ingreso->cantidadIngresos = CantidadIngresos; 
			ingreso->descripcionIngresos = DescripcionIngresos; 
			
			//ANTES DE TRABAJAR CON EL GRID, TRABAJAMOS CON EL CONTROLLER DEL PROYECTO
			EduFinanzasController::Controller::AddIngreso(ingreso);    //Esta linea se encarga de agregar el objeto "ingreso" a la lista de ingresos
			showIngresos();
		}
		
		else if (comboBox1->SelectedItem->ToString()->Equals("Gasto")) {
			String^ CantidadGastos = txtmonto->Text;  
			String^ DescripcionGastos = txtdescripcion->Text; 
			Gastos^ gasto = gcnew Gastos();
			gasto->cantidadGastos=CantidadGastos;
			gasto->descripcionGastos=DescripcionGastos; 

			EduFinanzasController::Controller::AddGasto(gasto); 
			showEgresos();
		}
		else {
			MessageBox::Show("Debe seleccionar un tipo de movimiento");
		}
		
		
	}

void showIngresos() { 
	List<Revenues^>^ ingresos = EduFinanzasController::Controller::QueryAllIngresos();   

	   
	for (int i = 0; i < ingresos->Count; i++) {  
		Revenues^ ingreso = ingresos[i];  
		dgvExpenses->Rows->Add(gcnew array<String^>{  
			"Ingreso", ingreso->cantidadIngresos, ingreso->descripcionIngresos 
		});
	}
}
void showEgresos() {
	List<Gastos^>^ gastos = EduFinanzasController::Controller::QueryAllGastos(); 

	for (int i = 0; i < gastos->Count; i++) { 
		Gastos^ gasto = gastos[i]; 
		dgvExpenses->Rows->Add(gcnew array<String^>{

			"Gasto", gasto->cantidadGastos, gasto->descripcionGastos 
		});
	}
}

		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//aqui
	this->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void CategoryForm_Load(System::Object^ sender, System::EventArgs^ e) {
	showIngresos(); 
	showEgresos();  
}
private: System::Void btnDeleteCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verifica si hay alguna fila seleccionada
	if (dgvExpenses->SelectedRows->Count > 0) {
		// Obtiene la fila seleccionada
		DataGridViewRow^ selectedRow = dgvExpenses->SelectedRows[0];

		// Obtiene el tipo y la cantidad de la fila seleccionada
		String^ tipoAEliminar = selectedRow->Cells[0]->Value->ToString();
		String^ cantidadABuscar = selectedRow->Cells[1]->Value->ToString();

		// Elimina la fila seleccionada
		dgvExpenses->Rows->Remove(selectedRow);

		// Llama a la lógica de eliminación en tu controlador
		if (tipoAEliminar == "Ingreso") {
			EduFinanzasController::Controller::DeleteIngreso(cantidadABuscar);
		}
		else if (tipoAEliminar == "Gasto") {
			EduFinanzasController::Controller::DeleteGasto(cantidadABuscar);
		}
	}
	else {
		// Muestra un mensaje de error si no hay fila seleccionada
		MessageBox::Show("Seleccione una fila antes de eliminar, recuerde que la seleccion se hace ubicandose a la izquierda de la tabla");
	}
}




};
}
