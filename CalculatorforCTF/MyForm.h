#pragma once
#include "D:\fame\Documents\study\C++ codes\DLL_for_calculator\DLL_for_calculator\calculator.h"
#include "msclr\marshal_cppstd.h"
#include <iostream>

namespace CalculatorforCTF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button_res;
	private: System::Windows::Forms::RadioButton^ radioButton_hex;
	private: System::Windows::Forms::RadioButton^ radioButton_dec;
	private: System::Windows::Forms::RadioButton^ radioButton_oct;
	private: System::Windows::Forms::RadioButton^ radioButton_bin;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_mult;
	private: System::Windows::Forms::Button^ button_div;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::Button^ buttonB;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonD;
	private: System::Windows::Forms::Button^ buttonE;
	private: System::Windows::Forms::Button^ buttonF;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_dot;

	private: System::Windows::Forms::Button^ button_pow;
	private: System::Windows::Forms::Button^ button_proc;
	private: System::Windows::Forms::Button^ button_oneclear;
	private: System::Windows::Forms::Button^ button11;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_res = (gcnew System::Windows::Forms::Button());
			this->radioButton_hex = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_dec = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_oct = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_bin = (gcnew System::Windows::Forms::RadioButton());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_pow = (gcnew System::Windows::Forms::Button());
			this->button_proc = (gcnew System::Windows::Forms::Button());
			this->button_oneclear = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(2, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(2, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(483, 61);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(76, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 66);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(150, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 66);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(2, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(68, 66);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(76, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(68, 66);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(150, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(68, 66);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(2, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 66);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(76, 263);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(68, 66);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(150, 263);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(68, 66);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(2, 335);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(68, 66);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button_res
			// 
			this->button_res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_res->ForeColor = System::Drawing::Color::White;
			this->button_res->Location = System::Drawing::Point(2, 407);
			this->button_res->Name = L"button_res";
			this->button_res->Size = System::Drawing::Size(142, 66);
			this->button_res->TabIndex = 11;
			this->button_res->Text = L"=";
			this->button_res->UseVisualStyleBackColor = false;
			this->button_res->Click += gcnew System::EventHandler(this, &MyForm::button_res_Click);
			// 
			// radioButton_hex
			// 
			this->radioButton_hex->AutoSize = true;
			this->radioButton_hex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_hex->Location = System::Drawing::Point(431, 116);
			this->radioButton_hex->Name = L"radioButton_hex";
			this->radioButton_hex->Size = System::Drawing::Size(60, 24);
			this->radioButton_hex->TabIndex = 12;
			this->radioButton_hex->TabStop = true;
			this->radioButton_hex->Text = L"Hex";
			this->radioButton_hex->UseVisualStyleBackColor = true;
			this->radioButton_hex->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_hex_CheckedChanged);
			// 
			// radioButton_dec
			// 
			this->radioButton_dec->AutoSize = true;
			this->radioButton_dec->Checked = true;
			this->radioButton_dec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_dec->Location = System::Drawing::Point(431, 142);
			this->radioButton_dec->Name = L"radioButton_dec";
			this->radioButton_dec->Size = System::Drawing::Size(61, 24);
			this->radioButton_dec->TabIndex = 13;
			this->radioButton_dec->TabStop = true;
			this->radioButton_dec->Text = L"Dec";
			this->radioButton_dec->UseVisualStyleBackColor = true;
			this->radioButton_dec->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_dec_CheckedChanged);
			// 
			// radioButton_oct
			// 
			this->radioButton_oct->AutoSize = true;
			this->radioButton_oct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_oct->Location = System::Drawing::Point(431, 168);
			this->radioButton_oct->Name = L"radioButton_oct";
			this->radioButton_oct->Size = System::Drawing::Size(57, 24);
			this->radioButton_oct->TabIndex = 14;
			this->radioButton_oct->TabStop = true;
			this->radioButton_oct->Text = L"Oct";
			this->radioButton_oct->UseVisualStyleBackColor = true;
			this->radioButton_oct->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_oct_CheckedChanged);
			// 
			// radioButton_bin
			// 
			this->radioButton_bin->AutoSize = true;
			this->radioButton_bin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_bin->Location = System::Drawing::Point(431, 194);
			this->radioButton_bin->Name = L"radioButton_bin";
			this->radioButton_bin->Size = System::Drawing::Size(55, 24);
			this->radioButton_bin->TabIndex = 15;
			this->radioButton_bin->TabStop = true;
			this->radioButton_bin->Text = L"Bin";
			this->radioButton_bin->UseVisualStyleBackColor = true;
			this->radioButton_bin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_bin_CheckedChanged);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(298, 122);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(68, 66);
			this->button_plus->TabIndex = 16;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_oper_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(298, 191);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(68, 66);
			this->button_minus->TabIndex = 17;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_oper_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mult->ForeColor = System::Drawing::Color::White;
			this->button_mult->Location = System::Drawing::Point(298, 263);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(68, 66);
			this->button_mult->TabIndex = 18;
			this->button_mult->Text = L"*";
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::button_oper_Click);
			// 
			// button_div
			// 
			this->button_div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->ForeColor = System::Drawing::Color::White;
			this->button_div->Location = System::Drawing::Point(298, 335);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(68, 66);
			this->button_div->TabIndex = 19;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = false;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_oper_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(2, 488);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(216, 66);
			this->button10->TabIndex = 20;
			this->button10->Text = L"CE";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// buttonA
			// 
			this->buttonA->Enabled = false;
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonA->Location = System::Drawing::Point(224, 119);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(68, 66);
			this->buttonA->TabIndex = 21;
			this->buttonA->Text = L"A";
			this->buttonA->UseVisualStyleBackColor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// buttonB
			// 
			this->buttonB->Enabled = false;
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonB->Location = System::Drawing::Point(224, 191);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(68, 66);
			this->buttonB->TabIndex = 22;
			this->buttonB->Text = L"B";
			this->buttonB->UseVisualStyleBackColor = true;
			this->buttonB->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// buttonC
			// 
			this->buttonC->Enabled = false;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->Location = System::Drawing::Point(224, 263);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(68, 66);
			this->buttonC->TabIndex = 23;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// buttonD
			// 
			this->buttonD->Enabled = false;
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonD->Location = System::Drawing::Point(224, 335);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(68, 66);
			this->buttonD->TabIndex = 24;
			this->buttonD->Text = L"D";
			this->buttonD->UseVisualStyleBackColor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// buttonE
			// 
			this->buttonE->Enabled = false;
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonE->Location = System::Drawing::Point(150, 335);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(68, 66);
			this->buttonE->TabIndex = 25;
			this->buttonE->Text = L"E";
			this->buttonE->UseVisualStyleBackColor = true;
			this->buttonE->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// buttonF
			// 
			this->buttonF->Enabled = false;
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonF->Location = System::Drawing::Point(76, 335);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(68, 66);
			this->buttonF->TabIndex = 26;
			this->buttonF->Text = L"F";
			this->buttonF->UseVisualStyleBackColor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::Red;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->ForeColor = System::Drawing::Color::White;
			this->button_close->Location = System::Drawing::Point(449, 11);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(35, 35);
			this->button_close->TabIndex = 27;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(174, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 36);
			this->label1->TabIndex = 28;
			this->label1->Text = L"BestCalc";
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::Color::White;
			this->button_dot->Location = System::Drawing::Point(298, 407);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(68, 66);
			this->button_dot->TabIndex = 29;
			this->button_dot->Text = L",";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button_pow
			// 
			this->button_pow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_pow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pow->ForeColor = System::Drawing::Color::White;
			this->button_pow->Location = System::Drawing::Point(150, 407);
			this->button_pow->Name = L"button_pow";
			this->button_pow->Size = System::Drawing::Size(68, 66);
			this->button_pow->TabIndex = 31;
			this->button_pow->Text = L"^";
			this->button_pow->UseVisualStyleBackColor = false;
			this->button_pow->Click += gcnew System::EventHandler(this, &MyForm::button_pow_Click);
			// 
			// button_proc
			// 
			this->button_proc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_proc->ForeColor = System::Drawing::Color::White;
			this->button_proc->Location = System::Drawing::Point(224, 407);
			this->button_proc->Name = L"button_proc";
			this->button_proc->Size = System::Drawing::Size(68, 66);
			this->button_proc->TabIndex = 32;
			this->button_proc->Text = L"%";
			this->button_proc->UseVisualStyleBackColor = false;
			this->button_proc->Click += gcnew System::EventHandler(this, &MyForm::button_oper_Click);
			// 
			// button_oneclear
			// 
			this->button_oneclear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_oneclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_oneclear->Location = System::Drawing::Point(223, 488);
			this->button_oneclear->Name = L"button_oneclear";
			this->button_oneclear->Size = System::Drawing::Size(143, 66);
			this->button_oneclear->TabIndex = 33;
			this->button_oneclear->Text = L"<-";
			this->button_oneclear->UseVisualStyleBackColor = false;
			this->button_oneclear->Click += gcnew System::EventHandler(this, &MyForm::button_oneclear_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->Location = System::Drawing::Point(2, 6);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 30);
			this->button11->TabIndex = 34;
			this->button11->Text = L"\?";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 566);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button_oneclear);
			this->Controls->Add(this->button_proc);
			this->Controls->Add(this->button_pow);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->radioButton_bin);
			this->Controls->Add(this->radioButton_oct);
			this->Controls->Add(this->radioButton_dec);
			this->Controls->Add(this->radioButton_hex);
			this->Controls->Add(this->button_res);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:bool clear = false;
			  bool operatorrr=false;
			  bool hex = false;
			  bool dec = false;
			  bool oct = false;
			  bool bin = false;
	public:char operation = ' ';
		  double first;
		  double second;
		  double ConvertToDecimal(String^ input, int base) {

			  double result = 0.0;
			  int pointIndex = input->IndexOf(',');

			  // Целая часть
			  if (pointIndex >= 0) {
				  String^ integerPart = input->Substring(0, pointIndex);
				  result += Convert::ToInt64(integerPart, base);
			  }
			  else {
				  // Если нет дробной части, просто конвертируем все как целое
				  return Convert::ToInt64(input, base);
			  }

			  // Дробная часть
			  if (pointIndex >= 0 && pointIndex < input->Length - 1) {
				  String^ fractionalPart = input->Substring(pointIndex + 1);

				  // Обрабатываем дробную часть, пока не достигнем 4 знаков
				  for (int i = 0; i < fractionalPart->Length; ++i) {
					  if (i >= 4) break; // Прекращаем, если уже 4 знака

					  // Обработка для шестнадцатеричной системы
					  int value;
					  if (base == 16) {
						  // Преобразуем символ в числовое значение
						  char ch = fractionalPart[i];
						  if (ch >= '0' && ch <= '9') {
							  value = ch - '0'; // '0' -> 0, '1' -> 1, ..., '9' -> 9
						  }
						  else if (ch >= 'A' && ch <= 'F') {
							  value = ch - 'A' + 10; // 'A' -> 10, 'B' -> 11, ..., 'F' -> 15
						  }
						  else if (ch >= 'a' && ch <= 'f') {
							  value = ch - 'a' + 10; // 'a' -> 10, 'b' -> 11, ..., 'f' -> 15
						  }
						  else {
							  throw gcnew FormatException("Недопустимый символ в дробной части.");
						  }
					  }
					  else {
						  // Для других систем просто используем Convert
						  value = Convert::ToInt64(fractionalPart[i].ToString(), base);
					  }

					  result += value / pow(base, i + 1);
				  }
			  }

			  return result;
		  }
		  String^ DecimalToBinary(double number) {
			  String^ result = "";
			  long long intPart = static_cast<long long>(number);
			  double fracPart = number - intPart;

			  // Целая часть
			  if (intPart == 0) {
				  result = "0";
			  }
			  else {
				  while (intPart > 0) {
					  result = (intPart % 2).ToString() + result;
					  intPart /= 2;
				  }
			  }

			  // Дробная часть
			  if (fracPart > 0) {
				  result += ",";
				  while (fracPart > 0) {
					  fracPart *= 2;
					  int bit = static_cast<int>(fracPart);
					  result += bit.ToString();
					  fracPart -= bit;
				  }
			  }

			  return result;
		  }
		  String^ DecimalToHex(double number) {
			  if (number == 0) return "0"; // Если число равно нулю, вернуть "0"

			  String^ result = "";
			  long long intPart = static_cast<long long>(number);
			  double fracPart = number - intPart;

			  // Целая часть
			  while (intPart > 0) {
				  int remainder = intPart % 16;
				  if (remainder < 10) {
					  result = remainder.ToString() + result;
				  }
				  else {
					  result = ((int)remainder).ToString("X") + result;
				  }
				  intPart /= 16;
			  }

			  // Если целая часть равна 0, но есть дробная часть, начинаем с "0."
			  if (result == "") {
				  result = "0";
			  }

			  // Дробная часть
			  if (fracPart > 0) {
				  result += ",";
				  int count = 0; // Счетчик для ограничения количества дробных знаков
				  while (fracPart > 0 && count < 4) { // Ограничиваем 4 знаками после запятой
					  fracPart *= 16;
					  int hexInt = static_cast<int>(fracPart);
					  if (hexInt < 10) {
						  result += hexInt.ToString();
					  }
					  else {
						  result += ((int)hexInt).ToString("X");
					  }
					  fracPart -= hexInt;
					  count++;
				  }
			  }

			  return result;
		  }
		  String^ DecimalToOctal(double number) {
			  String^ result = "";
			  long long intPart = static_cast<long long>(number);
			  double fracPart = number - intPart;

			  // Целая часть
			  while (intPart > 0) {
				  result = (intPart % 8).ToString() + result;
				  intPart /= 8;
			  }

			  // Дробная часть
			  if (fracPart > 0) {
				  result += ",";
				  while (fracPart > 0) {
					  fracPart *= 8;
					  int octInt = static_cast<int>(fracPart);
					  result += octInt.ToString();
					  fracPart -= octInt;
				  }
			  }

			  return result;
		  }
private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = dynamic_cast<Button^>(sender);
	if (clear) {
		textBox1->Text = "";
		clear = false;
	}
	if (textBox1->Text == "0") {
		textBox1->Text = "";
	}
	textBox1->Text += button->Text;
	

	}
	   private: System::Void button_oper_Click(System::Object^ sender, System::EventArgs^ e) {
		   Button^ button_oper = dynamic_cast<Button^>(sender);
		   operatorrr = true;
		   if (textBox1->Text == "") { return; }
		   if (radioButton_hex->Checked) {
			   first = ConvertToDecimal(textBox1->Text, 16);
		   }
		   else if (radioButton_dec->Checked) {
			   first = ConvertToDecimal(textBox1->Text, 10);
		   }
		   if (radioButton_oct->Checked) {
			   first = ConvertToDecimal(textBox1->Text, 8);
		   }
		   else if (radioButton_bin->Checked) {
			   first = ConvertToDecimal(textBox1->Text, 2);
		   }
		   operation = button_oper->Text[0];
		   textBox1->Text = "";
	   }

private: System::Void button_res_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") { return; }
	operatorrr = false;
	if (radioButton_hex->Checked) {
		second = ConvertToDecimal(textBox1->Text, 16);
	}
	else if (radioButton_dec->Checked) {
		second = ConvertToDecimal(textBox1->Text, 10);
	}
	if (radioButton_oct->Checked) {
		second = ConvertToDecimal(textBox1->Text, 8);
	}
	else if (radioButton_bin->Checked) {
		second = ConvertToDecimal(textBox1->Text, 2);
	}
	double res = 0;
	switch (operation) {
	case '+': 
		res = sum(first,second); 
		if (radioButton_dec->Checked) {
			textBox1->Text = res.ToString();
		}
		else if (radioButton_hex->Checked) {
			textBox1->Text = DecimalToHex(res)->ToUpper();
		}
		else if (radioButton_oct->Checked) {
			textBox1->Text = DecimalToOctal(res);
		}
		else {
			textBox1->Text = DecimalToBinary(res);
		}
		clear = true;
		break;
	case '-':
		res = minus(first, second);
		if (radioButton_dec->Checked) {
			textBox1->Text = res.ToString();
		}
		else if (radioButton_hex->Checked) {
			textBox1->Text = DecimalToHex(res)->ToUpper();
		}
		else if (radioButton_oct->Checked) {
			textBox1->Text = DecimalToOctal(res);
		}
		else {
			textBox1->Text = DecimalToBinary(res);
		}
		clear = true;
		break;
	case '*':
		res = mult(first, second);
		if (radioButton_dec->Checked) {
			textBox1->Text = res.ToString();
		}
		else if (radioButton_hex->Checked) {
			textBox1->Text = DecimalToHex(res)->ToUpper();
		}
		else if (radioButton_oct->Checked) {
			textBox1->Text = DecimalToOctal(res);
		}
		else {
			textBox1->Text = DecimalToBinary(res);
		}
		clear = true;
		break;
	case '/':
		if (second == 0) {
			MessageBox::Show("Деление на 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		res = divid(first, second);
		if (radioButton_dec->Checked) {
			textBox1->Text = res.ToString();
		}
		else if (radioButton_hex->Checked) {
			textBox1->Text = DecimalToHex(res)->ToUpper();
		}
		else if (radioButton_oct->Checked) {
			textBox1->Text = DecimalToOctal(res);
		}
		else {
			textBox1->Text = DecimalToBinary(res);
		}
		clear = true;
		break;
	case '%':
		res = fmod(first, second);
		if (radioButton_dec->Checked) {
			textBox1->Text = res.ToString();
		}
		else if (radioButton_hex->Checked) {
			textBox1->Text = DecimalToHex(res)->ToUpper();
		}
		else if (radioButton_oct->Checked) {
			textBox1->Text = DecimalToOctal(res);
		}
		else {
			textBox1->Text = DecimalToBinary(res);
		}
		clear = true;
		break;
	case 'p':
		res = pow(first, second);
		if (radioButton_dec->Checked) {
			textBox1->Text = res.ToString();
		}
		else if (radioButton_hex->Checked) {
			textBox1->Text = DecimalToHex(res)->ToUpper();
		}
		else if (radioButton_oct->Checked) {
			textBox1->Text = DecimalToOctal(res);
		}
		else {
			textBox1->Text = DecimalToBinary(res);
		}
		clear = true;
		break;
	default:break;
	}
	if (std::isinf(res)) {
		textBox1->Text = "0";
		MessageBox::Show("Результат слишком большой для вычисления!");
	}
	if (res<0) {
		textBox1->Text = "0";
		MessageBox::Show("Результат отрицательный");
	}
}

private: System::Void radioButton_hex_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	buttonA->Enabled = true;
	buttonB->Enabled = true;
	buttonC->Enabled = true;
	buttonD->Enabled = true;
	buttonE->Enabled = true;
	buttonF->Enabled = true;
	button9->Enabled = true;
	button8->Enabled = true;
	button7->Enabled = true;
	button6->Enabled = true;
	button5->Enabled = true;
	button4->Enabled = true;
	button3->Enabled = true;
	button2->Enabled = true;
	if (operatorrr) {
		if (textBox1->Text != "") {
			if (dec) {
				double wow = ConvertToDecimal(textBox1->Text, 10);
				textBox1->Text = DecimalToHex(wow)->ToUpper();
				dec = false;
			}
			else if (oct) {
				double wow = ConvertToDecimal(textBox1->Text, 8);
				textBox1->Text = DecimalToHex(wow)->ToUpper();
				oct = false;
			}
			else if (bin) {
				double wow = ConvertToDecimal(textBox1->Text, 2);
				textBox1->Text = DecimalToHex(wow)->ToUpper();
				bin = false;
			}
		}
		hex = true;
		dec = false;
		oct = false;
		bin = false;
	}
	if (textBox1->Text == "") { return; }
	if (dec) {
		double wow = ConvertToDecimal(textBox1->Text,10);
		textBox1->Text = DecimalToHex(wow)->ToUpper();
		dec = false;
	}
	else if (oct) {
		double wow = ConvertToDecimal(textBox1->Text, 8);
		textBox1->Text = DecimalToHex(wow)->ToUpper();
		oct = false;
	}
	else if (bin) {
		double wow = ConvertToDecimal(textBox1->Text, 2);
		textBox1->Text = DecimalToHex(wow)->ToUpper();
		bin = false;
	}
	hex = true;
}
private: System::Void radioButton_dec_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	button9->Enabled = true;
	button8->Enabled = true;
	button7->Enabled = true;
	button6->Enabled = true;
	button5->Enabled = true;
	button4->Enabled = true;
	button3->Enabled = true;
	button2->Enabled = true;
	if (operatorrr) {
		if (textBox1->Text != "") {
			if (hex) {
				double wow = ConvertToDecimal(textBox1->Text, 16);
				textBox1->Text = wow.ToString();
				hex = false;
			}
			else if (oct) {
				double wow = ConvertToDecimal(textBox1->Text, 8);
				textBox1->Text = wow.ToString();
				oct = false;
			}
			else if (bin) {
				double wow = ConvertToDecimal(textBox1->Text, 2);
				textBox1->Text = wow.ToString();
				bin = false;
			}
		}
		dec = true;
		hex = false;
		oct = false;
		bin = false;
	}
	if (textBox1->Text == "") { return; }
	if (hex) {
		double wow = ConvertToDecimal(textBox1->Text, 16);
		textBox1->Text = wow.ToString();
		hex = false;
	}
	else if (oct) {
		double wow = ConvertToDecimal(textBox1->Text, 8);
		textBox1->Text = wow.ToString();
		oct = false;
	}
	else if (bin) {
		double wow = ConvertToDecimal(textBox1->Text, 2);
		textBox1->Text = wow.ToString();
		bin = false;
	}
	dec = true;
}
private: System::Void radioButton_oct_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	button9->Enabled = false;
	button8->Enabled = false;
	button7->Enabled = true;
	button6->Enabled = true;
	button5->Enabled = true;
	button4->Enabled = true;
	button3->Enabled = true;
	button2->Enabled = true;
	if (operatorrr) {
		if (textBox1->Text != "") {
			if (dec) {
				double wow = ConvertToDecimal(textBox1->Text, 10);
				textBox1->Text = DecimalToOctal(wow);
				dec = false;
			}
			else if (hex) {
				double wow = ConvertToDecimal(textBox1->Text, 16);
				textBox1->Text = DecimalToOctal(wow)->ToUpper();
				hex = false;
			}
			else if (bin) {
				double wow = ConvertToDecimal(textBox1->Text, 2);
				textBox1->Text = DecimalToOctal(wow)->ToUpper();
				bin = false;
			}
		}
		oct = true;
		dec = false;
		hex = false;
		bin = false;
	}
	if (textBox1->Text == "") { return; }
	if (dec) {
		double wow = ConvertToDecimal(textBox1->Text, 10);
		textBox1->Text = DecimalToOctal(wow);
		dec = false;
	}
	else if (hex) {
		double wow = ConvertToDecimal(textBox1->Text, 16);
		textBox1->Text = DecimalToOctal(wow)->ToUpper();
		hex = false;
	}
	else if (bin) {
		double wow = ConvertToDecimal(textBox1->Text, 2);
		textBox1->Text = DecimalToOctal(wow)->ToUpper();
		bin = false;
	}
	oct = true;
    }
private: System::Void radioButton_bin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	button9->Enabled = false;
	button8->Enabled = false;
	button7->Enabled = false;
	button6->Enabled = false;
	button5->Enabled = false;
	button4->Enabled = false;
	button3->Enabled = false;
	button2->Enabled = false;
	if (operatorrr) {
		if (textBox1->Text != "") {
			if (dec) {
				double wow = ConvertToDecimal(textBox1->Text, 10);
				textBox1->Text = DecimalToBinary(wow);
				dec = false;
			}
			else if (oct) {
				double wow = ConvertToDecimal(textBox1->Text, 8);
				textBox1->Text = DecimalToBinary(wow)->ToUpper();
				oct = false;
			}
			else if (hex) {
				double wow = ConvertToDecimal(textBox1->Text, 16);
				textBox1->Text = DecimalToBinary(wow)->ToUpper();
				hex = false;
			}
		}
		bin = true;
		dec = false;
		oct = false;
		hex = false;
	}
	if (textBox1->Text == "") { return; }
	if (dec) {
		double wow = ConvertToDecimal(textBox1->Text, 10);
		textBox1->Text = DecimalToBinary(wow);
		dec = false;
	}
	else if (oct) {
		double wow = ConvertToDecimal(textBox1->Text, 8);
		textBox1->Text = DecimalToBinary(wow)->ToUpper();
		oct = false;
	}
	else if (hex) {
		double wow = ConvertToDecimal(textBox1->Text, 16);
		textBox1->Text = DecimalToBinary(wow)->ToUpper();
		hex = false;
	}
	bin = true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Получаем текущий текст из текстового поля
	String^ input = textBox1->Text;

	// Проверяем, содержит ли текст десятичную точку
	int pointIndex = input->IndexOf(',');

	// Если есть десятичная точка, проверяем количество знаков после неё
	if (pointIndex != -1) {
		// Подсчитываем количество знаков после десятичной точки
		int fractionalLength = input->Length - pointIndex - 1;

		// Если количество дробных знаков превышает 2
		if (fractionalLength > 4) {
			// Убираем последний введённый символ
			textBox1->Text = input->Substring(0, input->Length - 1);
			textBox1->SelectionStart = textBox1->Text->Length; // Устанавливаем курсор в конец текста
		}
	}
}

private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	// Проверяем, есть ли уже запятая в текстовом поле
	if (!textBox1->Text->Contains(",")&& textBox1->Text!="") {
		// Если запятой нет, добавляем её
		textBox1->Text += ",";
	}
	clear = false;
}

private: System::Void button_pow_Click(System::Object^ sender, System::EventArgs^ e) {
	operatorrr = true;
	if (textBox1->Text == "") { return; }
	if (radioButton_hex->Checked) {
		first = ConvertToDecimal(textBox1->Text, 16);
	}
	else if (radioButton_dec->Checked) {
		first = ConvertToDecimal(textBox1->Text, 10);
	}
	if (radioButton_oct->Checked) {
		first = ConvertToDecimal(textBox1->Text, 8);
	}
	else if (radioButton_bin->Checked) {
		first = ConvertToDecimal(textBox1->Text, 2);
	}
	operation = 'p';
	textBox1->Text = "";
}
private: System::Void button_oneclear_Click(System::Object^ sender, System::EventArgs^ e) {
	// Получаем текст из текстового поля
	String^ currentText = textBox1->Text;
	if (textBox1->Text == "0") { return; }
	// Проверяем, есть ли текст для удаления
	else if (currentText->Length > 0) {
		// Удаляем последний символ из текста
		currentText = currentText->Substring(0, currentText->Length - 1);

		// Обновляем текстовое поле
		textBox1->Text = currentText;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Калькулятор, выполняющий переводы чисел из одной системы счисления в другую (двоичная, восьмеричная, десятичная, шестнадцатеричная), арифметические операции между числами в различных системах счисления, конвертация дробных чисел и чисел с плавающей точкой.", "Calculator functional");
}
};
}
