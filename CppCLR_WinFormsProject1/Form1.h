#pragma once

#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Saludar;
	protected:

	private: System::Windows::Forms::TextBox^ txt_apellido;


	private: System::Windows::Forms::TextBox^ txt_nombre;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Saludar = (gcnew System::Windows::Forms::Button());
			this->txt_apellido = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Saludar
			// 
			this->Saludar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Saludar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Saludar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Saludar->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Saludar->ForeColor = System::Drawing::Color::Black;
			this->Saludar->Location = System::Drawing::Point(69, 210);
			this->Saludar->Name = L"Saludar";
			this->Saludar->Size = System::Drawing::Size(184, 38);
			this->Saludar->TabIndex = 0;
			this->Saludar->Text = L"Saludar!";
			this->Saludar->UseVisualStyleBackColor = false;
			this->Saludar->Click += gcnew System::EventHandler(this, &Form1::Saludar_Click);
			// 
			// txt_apellido
			// 
			this->txt_apellido->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_apellido->Location = System::Drawing::Point(69, 131);
			this->txt_apellido->Name = L"txt_apellido";
			this->txt_apellido->Size = System::Drawing::Size(184, 20);
			this->txt_apellido->TabIndex = 1;
			this->txt_apellido->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_nombre->Location = System::Drawing::Point(69, 63);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(184, 20);
			this->txt_nombre->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Apellido:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->ClientSize = System::Drawing::Size(325, 338);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->txt_apellido);
			this->Controls->Add(this->Saludar);
			this->Name = L"Form1";
			this->Text = L"app1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	


	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	


	}
	private: System::Void Saludar_Click(System::Object^ sender, System::EventArgs^ e) {
	
		std::string nombre = this->toStandardString(this->txt_nombre->Text);
		std::string apellido = this->toStandardString(this->txt_apellido->Text);

		MessageBox::Show(L"hola "+this->toSystemString(nombre) + " " + this->toSystemString(apellido));

	}

	public: static std::string toStandardString(System::String^ string){

		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		
		return returnString;

	}

	public: static String^ toSystemString(std::string str) {

		return gcnew String(str.c_str());

	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
