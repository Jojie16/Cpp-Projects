#pragma once

namespace Crush {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CrushForm
	/// </summary>
	public ref class CrushForm : public System::Windows::Forms::Form
	{
	public:
		CrushForm(void)
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
		~CrushForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::ComboBox^ cbStrand;
	private: System::Windows::Forms::TextBox^ txtFirstname;

	protected:

	protected:


	private: System::Windows::Forms::RadioButton^ rbMale;
	private: System::Windows::Forms::RadioButton^ rbFemale;
	private: System::Windows::Forms::TextBox^ txtLastname;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




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
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->cbStrand = (gcnew System::Windows::Forms::ComboBox());
			this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
			this->rbMale = (gcnew System::Windows::Forms::RadioButton());
			this->rbFemale = (gcnew System::Windows::Forms::RadioButton());
			this->txtLastname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::Gainsboro;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnSubmit->Location = System::Drawing::Point(80, 398);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(221, 60);
			this->btnSubmit->TabIndex = 0;
			this->btnSubmit->Text = L"SUBMIT";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &CrushForm::btnSubmit_Click);
			// 
			// cbStrand
			// 
			this->cbStrand->BackColor = System::Drawing::Color::Gainsboro;
			this->cbStrand->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbStrand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbStrand->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cbStrand->FormattingEnabled = true;
			this->cbStrand->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"ABM", L"BAM", L"GAS", L"HESS", L"HUMSS", L"ICT - Animation",
					L"ICT - Programming", L"STEM", L"STEM - Maritime", L"TVL"
			});
			this->cbStrand->Location = System::Drawing::Point(102, 297);
			this->cbStrand->Name = L"cbStrand";
			this->cbStrand->Size = System::Drawing::Size(167, 24);
			this->cbStrand->TabIndex = 1;
			// 
			// txtFirstname
			// 
			this->txtFirstname->BackColor = System::Drawing::Color::Gainsboro;
			this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstname->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtFirstname->Location = System::Drawing::Point(37, 83);
			this->txtFirstname->Name = L"txtFirstname";
			this->txtFirstname->Size = System::Drawing::Size(121, 22);
			this->txtFirstname->TabIndex = 2;
			// 
			// rbMale
			// 
			this->rbMale->AutoSize = true;
			this->rbMale->BackColor = System::Drawing::Color::Transparent;
			this->rbMale->Checked = true;
			this->rbMale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbMale->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbMale->Location = System::Drawing::Point(148, 167);
			this->rbMale->Name = L"rbMale";
			this->rbMale->Size = System::Drawing::Size(65, 20);
			this->rbMale->TabIndex = 4;
			this->rbMale->TabStop = true;
			this->rbMale->Text = L"MALE";
			this->rbMale->UseVisualStyleBackColor = false;
			// 
			// rbFemale
			// 
			this->rbFemale->AutoSize = true;
			this->rbFemale->BackColor = System::Drawing::Color::Transparent;
			this->rbFemale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbFemale->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rbFemale->Location = System::Drawing::Point(148, 193);
			this->rbFemale->Name = L"rbFemale";
			this->rbFemale->Size = System::Drawing::Size(84, 20);
			this->rbFemale->TabIndex = 5;
			this->rbFemale->Text = L"FEMALE";
			this->rbFemale->UseVisualStyleBackColor = false;
			// 
			// txtLastname
			// 
			this->txtLastname->BackColor = System::Drawing::Color::Gainsboro;
			this->txtLastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastname->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtLastname->Location = System::Drawing::Point(201, 83);
			this->txtLastname->Name = L"txtLastname";
			this->txtLastname->Size = System::Drawing::Size(121, 22);
			this->txtLastname->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Pink;
			this->label1->Location = System::Drawing::Point(33, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Pink;
			this->label2->Location = System::Drawing::Point(194, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Lastname:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Pink;
			this->label3->Location = System::Drawing::Point(165, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Sex:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Pink;
			this->label4->Location = System::Drawing::Point(145, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Strand:";
			// 
			// CrushForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(370, 501);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtLastname);
			this->Controls->Add(this->rbFemale);
			this->Controls->Add(this->rbMale);
			this->Controls->Add(this->txtFirstname);
			this->Controls->Add(this->cbStrand);
			this->Controls->Add(this->btnSubmit);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Name = L"CrushForm";
			this->Text = L"Student Form";
			this->Load += gcnew System::EventHandler(this, &CrushForm::CrushForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		// Varibles	

		String^ firstname;
		String^ lastname;
		String^ sex;
		String^ strand;
		bool isValid = true;

		// FirstName
		if (txtFirstname->Text->Trim()->Length > 1) {
			firstname = txtFirstname->Text;
		}
		else {
			isValid = false;
		}
		
		// LastName
		if (txtLastname->Text->Trim()->Length > 1) {
			lastname = txtLastname->Text;
		}
		else {
			isValid = false;
		}

		// Radio Button
		if (rbMale->Checked) {
			sex = rbMale->Text;
		}
		else {
			sex = rbFemale->Text;
		}

		// Strand
		strand = cbStrand->Text;
		

		//Sending to a second form if its TRUE
		if (isValid) {

			MessageBox::Show("Full Name: " + firstname + " " + lastname + "\n" + "Sex: " + sex + "\n" + "Strand: " + strand, "Infromation",MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		else {

			MessageBox::Show("Something went wrong.", "Error!", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
			
		}

	}

	   // Main Form

	private: System::Void CrushForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
		cbStrand->SelectedIndex = 0;

	}
};
}