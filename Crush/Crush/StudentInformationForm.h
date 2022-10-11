#pragma once

namespace Crush {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentInformationForm
	/// </summary>
	public ref class StudentInformationForm : public System::Windows::Forms::Form
	{
	public:
		StudentInformationForm(void)
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
		~StudentInformationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblFullname;
	private: System::Windows::Forms::Label^ lblSex;
	private: System::Windows::Forms::Label^ lblStrand;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblFullname = (gcnew System::Windows::Forms::Label());
			this->lblSex = (gcnew System::Windows::Forms::Label());
			this->lblStrand = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Pink;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT INFORMATION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Leelawadee", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Cyan;
			this->label2->Location = System::Drawing::Point(29, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"FULL NAME: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Leelawadee", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Cyan;
			this->label3->Location = System::Drawing::Point(29, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"SEX: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Leelawadee", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Cyan;
			this->label4->Location = System::Drawing::Point(29, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"STRAND: ";
			// 
			// lblFullname
			// 
			this->lblFullname->AutoSize = true;
			this->lblFullname->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullname->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lblFullname->Location = System::Drawing::Point(148, 112);
			this->lblFullname->Name = L"lblFullname";
			this->lblFullname->Size = System::Drawing::Size(8, 17);
			this->lblFullname->TabIndex = 4;
			this->lblFullname->Text = L"\r\n";
			// 
			// lblSex
			// 
			this->lblSex->AutoSize = true;
			this->lblSex->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSex->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lblSex->Location = System::Drawing::Point(98, 184);
			this->lblSex->Name = L"lblSex";
			this->lblSex->Size = System::Drawing::Size(8, 17);
			this->lblSex->TabIndex = 5;
			this->lblSex->Text = L"\r\n";
			// 
			// lblStrand
			// 
			this->lblStrand->AutoSize = true;
			this->lblStrand->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStrand->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lblStrand->Location = System::Drawing::Point(129, 264);
			this->lblStrand->Name = L"lblStrand";
			this->lblStrand->Size = System::Drawing::Size(8, 17);
			this->lblStrand->TabIndex = 6;
			this->lblStrand->Text = L"\r\n";
			// 
			// StudentInformationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(319, 326);
			this->Controls->Add(this->lblStrand);
			this->Controls->Add(this->lblSex);
			this->Controls->Add(this->lblFullname);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Snow;
			this->Name = L"StudentInformationForm";
			this->Text = L"StudentInformationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
