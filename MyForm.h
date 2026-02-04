#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ CButton;
	private: System::Windows::Forms::Button^ SignChangeButton;
	private: System::Windows::Forms::Button^ PercentButton;




	private: System::Windows::Forms::Button^ DivButton;

	private: System::Windows::Forms::Button^ MultButton;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ DifButton;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ SumButton;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ EqualsButton;
	private: System::Windows::Forms::Button^ PeriodButton;



	private: System::Windows::Forms::Button^ button20;
	private: float FirstNum;
	private: char UserAction = ' ';

	protected:

	protected:





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
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->CButton = (gcnew System::Windows::Forms::Button());
			this->SignChangeButton = (gcnew System::Windows::Forms::Button());
			this->PercentButton = (gcnew System::Windows::Forms::Button());
			this->DivButton = (gcnew System::Windows::Forms::Button());
			this->MultButton = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->DifButton = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SumButton = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->EqualsButton = (gcnew System::Windows::Forms::Button());
			this->PeriodButton = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Brown;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Location = System::Drawing::Point(300, 12);
			this->Exit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(27, 27);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"X";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// ResultLabel
			// 
			this->ResultLabel->BackColor = System::Drawing::Color::Brown;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultLabel->ForeColor = System::Drawing::Color::Black;
			this->ResultLabel->Location = System::Drawing::Point(12, 12);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(315, 52);
			this->ResultLabel->TabIndex = 1;
			this->ResultLabel->Text = L"0";
			this->ResultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CButton
			// 
			this->CButton->BackColor = System::Drawing::Color::LightCoral;
			this->CButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CButton->Location = System::Drawing::Point(14, 77);
			this->CButton->Name = L"CButton";
			this->CButton->Size = System::Drawing::Size(68, 62);
			this->CButton->TabIndex = 2;
			this->CButton->Text = L"C";
			this->CButton->UseVisualStyleBackColor = false;
			this->CButton->Click += gcnew System::EventHandler(this, &MyForm::CButton_Click);
			// 
			// SignChangeButton
			// 
			this->SignChangeButton->BackColor = System::Drawing::Color::LightCoral;
			this->SignChangeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignChangeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignChangeButton->Location = System::Drawing::Point(88, 77);
			this->SignChangeButton->Name = L"SignChangeButton";
			this->SignChangeButton->Size = System::Drawing::Size(68, 62);
			this->SignChangeButton->TabIndex = 3;
			this->SignChangeButton->Text = L"+/-";
			this->SignChangeButton->UseVisualStyleBackColor = false;
			this->SignChangeButton->Click += gcnew System::EventHandler(this, &MyForm::SignChangeButton_Click);
			// 
			// PercentButton
			// 
			this->PercentButton->BackColor = System::Drawing::Color::LightCoral;
			this->PercentButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PercentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PercentButton->Location = System::Drawing::Point(162, 77);
			this->PercentButton->Name = L"PercentButton";
			this->PercentButton->Size = System::Drawing::Size(68, 62);
			this->PercentButton->TabIndex = 4;
			this->PercentButton->Text = L"%";
			this->PercentButton->UseVisualStyleBackColor = false;
			this->PercentButton->Click += gcnew System::EventHandler(this, &MyForm::PercentButton_Click);
			// 
			// DivButton
			// 
			this->DivButton->BackColor = System::Drawing::Color::Tomato;
			this->DivButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DivButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivButton->Location = System::Drawing::Point(236, 77);
			this->DivButton->Name = L"DivButton";
			this->DivButton->Size = System::Drawing::Size(92, 62);
			this->DivButton->TabIndex = 5;
			this->DivButton->Text = L"/";
			this->DivButton->UseVisualStyleBackColor = false;
			this->DivButton->Click += gcnew System::EventHandler(this, &MyForm::DivButton_Click);
			// 
			// MultButton
			// 
			this->MultButton->BackColor = System::Drawing::Color::Tomato;
			this->MultButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MultButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MultButton->Location = System::Drawing::Point(236, 145);
			this->MultButton->Name = L"MultButton";
			this->MultButton->Size = System::Drawing::Size(91, 62);
			this->MultButton->TabIndex = 9;
			this->MultButton->Text = L"*";
			this->MultButton->UseVisualStyleBackColor = false;
			this->MultButton->Click += gcnew System::EventHandler(this, &MyForm::MultButton_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Firebrick;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(162, 145);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(68, 62);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Firebrick;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(88, 145);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 62);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Firebrick;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(14, 145);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(68, 62);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// DifButton
			// 
			this->DifButton->BackColor = System::Drawing::Color::Tomato;
			this->DifButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DifButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DifButton->Location = System::Drawing::Point(236, 213);
			this->DifButton->Name = L"DifButton";
			this->DifButton->Size = System::Drawing::Size(91, 62);
			this->DifButton->TabIndex = 13;
			this->DifButton->Text = L"-";
			this->DifButton->UseVisualStyleBackColor = false;
			this->DifButton->Click += gcnew System::EventHandler(this, &MyForm::DifButton_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Firebrick;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(162, 213);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(68, 62);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Firebrick;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(88, 213);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(68, 62);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Firebrick;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(14, 213);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(68, 62);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// SumButton
			// 
			this->SumButton->BackColor = System::Drawing::Color::Tomato;
			this->SumButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SumButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SumButton->Location = System::Drawing::Point(236, 281);
			this->SumButton->Name = L"SumButton";
			this->SumButton->Size = System::Drawing::Size(91, 62);
			this->SumButton->TabIndex = 17;
			this->SumButton->Text = L"+";
			this->SumButton->UseVisualStyleBackColor = false;
			this->SumButton->Click += gcnew System::EventHandler(this, &MyForm::SumButton_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Firebrick;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(162, 281);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(68, 62);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Firebrick;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(88, 281);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(68, 62);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Firebrick;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(14, 281);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(68, 62);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// EqualsButton
			// 
			this->EqualsButton->BackColor = System::Drawing::Color::Tomato;
			this->EqualsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EqualsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualsButton->Location = System::Drawing::Point(236, 349);
			this->EqualsButton->Name = L"EqualsButton";
			this->EqualsButton->Size = System::Drawing::Size(91, 62);
			this->EqualsButton->TabIndex = 21;
			this->EqualsButton->Text = L"=";
			this->EqualsButton->UseVisualStyleBackColor = false;
			this->EqualsButton->Click += gcnew System::EventHandler(this, &MyForm::EqualsButton_Click);
			// 
			// PeriodButton
			// 
			this->PeriodButton->BackColor = System::Drawing::Color::Firebrick;
			this->PeriodButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PeriodButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PeriodButton->Location = System::Drawing::Point(162, 349);
			this->PeriodButton->Name = L"PeriodButton";
			this->PeriodButton->Size = System::Drawing::Size(68, 62);
			this->PeriodButton->TabIndex = 20;
			this->PeriodButton->Text = L".";
			this->PeriodButton->UseVisualStyleBackColor = false;
			this->PeriodButton->Click += gcnew System::EventHandler(this, &MyForm::PeriodButton_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Firebrick;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(14, 349);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(142, 62);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::NumButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(340, 420);
			this->Controls->Add(this->EqualsButton);
			this->Controls->Add(this->PeriodButton);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->SumButton);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->DifButton);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->MultButton);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->DivButton);
			this->Controls->Add(this->PercentButton);
			this->Controls->Add(this->SignChangeButton);
			this->Controls->Add(this->CButton);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->ResultLabel);
			this->Cursor = System::Windows::Forms::Cursors::PanNorth;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ultra Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void NumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ num = safe_cast<Button^>(sender);
		if (this->ResultLabel->Text == "0")
			this->ResultLabel->Text = num->Text;
		else this->ResultLabel->Text = this->ResultLabel->Text + num->Text;
	}
private: System::Void SumButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MathAction('+');
}
private: System::Void DifButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MathAction('-');
}
private: System::Void MultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MathAction('*');
}
private: System::Void DivButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MathAction('/');
}
private: System::Void MathAction(char Action) {
	this->FirstNum = System::Convert::ToDouble(this->ResultLabel->Text);
	this->UserAction = Action;
	this->ResultLabel->Text = "0";
}

private: System::Void EqualsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (UserAction == ' ') return;

	float Sec = System::Convert::ToDouble(this->ResultLabel->Text);
	float res;
	switch (this->UserAction) {
	case '+':res = this->FirstNum + Sec;break;
	case '-':res = this->FirstNum - Sec;break;
	case '*':res = this->FirstNum * Sec;break;
	case '%':res = this->FirstNum * Sec / 100;break;
	case '/':
		if (Sec == 0) {
			res = 0;
			MessageBox::Show(this, "Can`t do this", "Divided by zero?", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else res = this->FirstNum / Sec;
		break;
	}
	this->ResultLabel->Text = System::Convert::ToString(res);
	this->UserAction = ' ';
}
private: System::Void CButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ResultLabel->Text = "0";
	this->FirstNum = 0;
	this->UserAction = ' ';
}
private: System::Void SignChangeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	float res = System::Convert::ToDouble(this->ResultLabel->Text);
	res = -res;
	this->ResultLabel->Text = System::Convert::ToString(res);
}
private: System::Void PercentButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MathAction('%');
}
private: System::Void PeriodButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->ResultLabel->Text->Contains(","))
		this->ResultLabel->Text = this->ResultLabel->Text + ",";
}
};
}
