#pragma once

#include<iostream>

namespace StudentInformationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
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
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnYes;
	private: System::Windows::Forms::Button^ btnNo;
	private: System::Windows::Forms::Button^ btnNo2;
	private: System::Windows::Forms::Button^ btnNo3;
	private: System::Windows::Forms::Button^ btnNo4;
	private: System::Windows::Forms::Button^ btnNo5;
	private: System::Windows::Forms::Button^ btnNo6;
	private: System::Windows::Forms::Button^ btnNo7;
	private: System::Windows::Forms::Button^ btnNo8;
	private: System::Windows::Forms::Button^ btnNo10;
	private: System::Windows::Forms::Button^ btnNo9;
	private: System::Windows::Forms::Button^ btnNo11;


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
			this->btnYes = (gcnew System::Windows::Forms::Button());
			this->btnNo = (gcnew System::Windows::Forms::Button());
			this->btnNo2 = (gcnew System::Windows::Forms::Button());
			this->btnNo3 = (gcnew System::Windows::Forms::Button());
			this->btnNo4 = (gcnew System::Windows::Forms::Button());
			this->btnNo5 = (gcnew System::Windows::Forms::Button());
			this->btnNo6 = (gcnew System::Windows::Forms::Button());
			this->btnNo7 = (gcnew System::Windows::Forms::Button());
			this->btnNo8 = (gcnew System::Windows::Forms::Button());
			this->btnNo10 = (gcnew System::Windows::Forms::Button());
			this->btnNo9 = (gcnew System::Windows::Forms::Button());
			this->btnNo11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"     Hi crush\r\nCan i court you\?";
			// 
			// btnYes
			// 
			this->btnYes->BackColor = System::Drawing::Color::LimeGreen;
			this->btnYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnYes->Location = System::Drawing::Point(66, 99);
			this->btnYes->Name = L"btnYes";
			this->btnYes->Size = System::Drawing::Size(148, 93);
			this->btnYes->TabIndex = 1;
			this->btnYes->Text = L"YES!";
			this->btnYes->UseVisualStyleBackColor = false;
			this->btnYes->AutoSizeChanged += gcnew System::EventHandler(this, &StudentForm::btnYes_Click);
			this->btnYes->BackColorChanged += gcnew System::EventHandler(this, &StudentForm::btnYes_Click);
			this->btnYes->CursorChanged += gcnew System::EventHandler(this, &StudentForm::btnYes_Click);
			this->btnYes->MouseCaptureChanged += gcnew System::EventHandler(this, &StudentForm::btnYes_Click);
			// 
			// btnNo
			// 
			this->btnNo->BackColor = System::Drawing::Color::White;
			this->btnNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo->Location = System::Drawing::Point(241, 125);
			this->btnNo->Name = L"btnNo";
			this->btnNo->Size = System::Drawing::Size(75, 23);
			this->btnNo->TabIndex = 2;
			this->btnNo->Text = L"NO!!";
			this->btnNo->UseVisualStyleBackColor = false;
			this->btnNo->Click += gcnew System::EventHandler(this, &StudentForm::btnNo_Click);
			// 
			// btnNo2
			// 
			this->btnNo2->BackColor = System::Drawing::Color::White;
			this->btnNo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo2->Location = System::Drawing::Point(324, 99);
			this->btnNo2->Name = L"btnNo2";
			this->btnNo2->Size = System::Drawing::Size(75, 23);
			this->btnNo2->TabIndex = 3;
			this->btnNo2->Text = L"NO!!";
			this->btnNo2->UseVisualStyleBackColor = false;
			this->btnNo2->Click += gcnew System::EventHandler(this, &StudentForm::btnNo2_Click);
			// 
			// btnNo3
			// 
			this->btnNo3->BackColor = System::Drawing::Color::White;
			this->btnNo3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo3->Location = System::Drawing::Point(220, 77);
			this->btnNo3->Name = L"btnNo3";
			this->btnNo3->Size = System::Drawing::Size(75, 23);
			this->btnNo3->TabIndex = 4;
			this->btnNo3->Text = L"NO!!";
			this->btnNo3->UseVisualStyleBackColor = false;
			this->btnNo3->Click += gcnew System::EventHandler(this, &StudentForm::btnNo3_Click);
			// 
			// btnNo4
			// 
			this->btnNo4->BackColor = System::Drawing::Color::White;
			this->btnNo4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo4->Location = System::Drawing::Point(21, 55);
			this->btnNo4->Name = L"btnNo4";
			this->btnNo4->Size = System::Drawing::Size(75, 23);
			this->btnNo4->TabIndex = 5;
			this->btnNo4->Text = L"NO!!";
			this->btnNo4->UseVisualStyleBackColor = false;
			this->btnNo4->Click += gcnew System::EventHandler(this, &StudentForm::btnNo4_Click);
			// 
			// btnNo5
			// 
			this->btnNo5->BackColor = System::Drawing::Color::White;
			this->btnNo5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo5->Location = System::Drawing::Point(12, 157);
			this->btnNo5->Name = L"btnNo5";
			this->btnNo5->Size = System::Drawing::Size(75, 23);
			this->btnNo5->TabIndex = 6;
			this->btnNo5->Text = L"NO!!";
			this->btnNo5->UseVisualStyleBackColor = false;
			this->btnNo5->Click += gcnew System::EventHandler(this, &StudentForm::btnNo5_Click);
			// 
			// btnNo6
			// 
			this->btnNo6->BackColor = System::Drawing::Color::White;
			this->btnNo6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo6->Location = System::Drawing::Point(238, 188);
			this->btnNo6->Name = L"btnNo6";
			this->btnNo6->Size = System::Drawing::Size(57, 23);
			this->btnNo6->TabIndex = 7;
			this->btnNo6->Text = L"NO!!";
			this->btnNo6->UseVisualStyleBackColor = false;
			this->btnNo6->Click += gcnew System::EventHandler(this, &StudentForm::btnNo6_Click);
			// 
			// btnNo7
			// 
			this->btnNo7->BackColor = System::Drawing::Color::White;
			this->btnNo7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo7->Location = System::Drawing::Point(342, 29);
			this->btnNo7->Name = L"btnNo7";
			this->btnNo7->Size = System::Drawing::Size(37, 23);
			this->btnNo7->TabIndex = 8;
			this->btnNo7->Text = L"NO!!";
			this->btnNo7->UseVisualStyleBackColor = false;
			this->btnNo7->Click += gcnew System::EventHandler(this, &StudentForm::btnNo7_Click);
			// 
			// btnNo8
			// 
			this->btnNo8->BackColor = System::Drawing::Color::White;
			this->btnNo8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo8->Location = System::Drawing::Point(160, 157);
			this->btnNo8->Name = L"btnNo8";
			this->btnNo8->Size = System::Drawing::Size(31, 23);
			this->btnNo8->TabIndex = 9;
			this->btnNo8->Text = L"NO!!";
			this->btnNo8->UseVisualStyleBackColor = false;
			this->btnNo8->Click += gcnew System::EventHandler(this, &StudentForm::btnNo8_Click);
			// 
			// btnNo10
			// 
			this->btnNo10->BackColor = System::Drawing::Color::White;
			this->btnNo10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo10->Location = System::Drawing::Point(126, 87);
			this->btnNo10->Name = L"btnNo10";
			this->btnNo10->Size = System::Drawing::Size(31, 23);
			this->btnNo10->TabIndex = 10;
			this->btnNo10->Text = L"NO!!";
			this->btnNo10->UseVisualStyleBackColor = false;
			this->btnNo10->Click += gcnew System::EventHandler(this, &StudentForm::btnNo10_Click_1);
			// 
			// btnNo9
			// 
			this->btnNo9->BackColor = System::Drawing::Color::White;
			this->btnNo9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo9->Location = System::Drawing::Point(388, 188);
			this->btnNo9->Name = L"btnNo9";
			this->btnNo9->Size = System::Drawing::Size(31, 23);
			this->btnNo9->TabIndex = 11;
			this->btnNo9->Text = L"NO!!";
			this->btnNo9->UseVisualStyleBackColor = false;
			this->btnNo9->Click += gcnew System::EventHandler(this, &StudentForm::btnNo9_Click_1);
			// 
			// btnNo11
			// 
			this->btnNo11->BackColor = System::Drawing::Color::White;
			this->btnNo11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo11->Location = System::Drawing::Point(33, 9);
			this->btnNo11->Name = L"btnNo11";
			this->btnNo11->Size = System::Drawing::Size(31, 23);
			this->btnNo11->TabIndex = 12;
			this->btnNo11->Text = L"NO!!";
			this->btnNo11->UseVisualStyleBackColor = false;
			this->btnNo11->Click += gcnew System::EventHandler(this, &StudentForm::btnNo11_Click_1);
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleVioletRed;
			this->ClientSize = System::Drawing::Size(431, 223);
			this->ControlBox = false;
			this->Controls->Add(this->btnNo11);
			this->Controls->Add(this->btnNo9);
			this->Controls->Add(this->btnNo10);
			this->Controls->Add(this->btnNo8);
			this->Controls->Add(this->btnNo7);
			this->Controls->Add(this->btnNo6);
			this->Controls->Add(this->btnNo5);
			this->Controls->Add(this->btnNo4);
			this->Controls->Add(this->btnNo3);
			this->Controls->Add(this->btnNo2);
			this->Controls->Add(this->btnNo);
			this->Controls->Add(this->btnYes);
			this->Controls->Add(this->label1);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// YES

	private: System::Void btnYes_Click(System::Object^ sender, System::EventArgs^ e) {

			
		MessageBox::Show("Yieeeeeeut", "THANKYOU LORD!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			
			this->btnNo2->Hide();
			this->btnNo3->Hide();
			this->btnNo4->Hide();
			this->btnNo5->Hide();
			this->btnNo6->Hide();
			this->btnNo7->Hide();
			this->btnNo8->Hide();
			this->btnNo9->Hide();
			this->btnNo10->Hide();
			this->btnNo11->Hide();
	}

	// NO
		   
	private: System::Void btnNo_Click(System::Object^ sender, System::EventArgs^ e) {
		
		btnNo->Hide();
		this->btnNo2->Show();

	}

	// No 2
	private: System::Void btnNo2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo2->Hide();
		this->btnNo3->Show();

	}
	// N0 3
	private: System::Void btnNo3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo3->Hide();
		this->btnNo4->Show();

	}

	// MAIN CODE
	private: System::Void StudentForm_Load(System::Object^ sender, System::EventArgs^ e) {

		

		this->btnNo2->Hide();
		this->btnNo3->Hide();
		this->btnNo4->Hide();
		this->btnNo5->Hide();
		this->btnNo6->Hide();
		this->btnNo7->Hide();
		this->btnNo8->Hide();
		this->btnNo9->Hide();
		this->btnNo10->Hide();
		this->btnNo11->Hide();

	}

	// NO 4
	private: System::Void btnNo4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo4->Hide();
		this->btnNo5->Show();

	}
	// NO 5
	private: System::Void btnNo5_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo5->Hide();
		this->btnNo6->Show();

	}
	// NO 6
	private: System::Void btnNo6_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo6->Hide();
		this->btnNo7->Show();

	}
	// NO 7
	private: System::Void btnNo7_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo7->Hide();
		this->btnNo8->Show();

	}
	// NO 8
	private: System::Void btnNo8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo8->Hide();
		this->btnNo9->Show();

	}

	// NO 9
	private: System::Void btnNo9_Click_1(System::Object^ sender, System::EventArgs^ e) {

		this->btnNo9->Hide();
		this->btnNo10->Show();

	}
	//NO 10
	private: System::Void btnNo10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
		this->btnNo10->Hide();
		this->btnNo11->Show();

	
	}

	//NO 11
	private: System::Void btnNo11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
		this->btnNo11->Hide();
		this->btnNo3->Show();
		this->btnNo5->Show();
		this->btnNo2->Show();
		this->btnNo7->Show();
		this->btnNo11->Hide();
		this->btnNo4->Hide();
	
	}

};
}
