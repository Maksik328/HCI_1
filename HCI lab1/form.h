#pragma once

namespace HCIlab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form
	/// </summary>
	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
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
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter text massage";
			this->label1->Click += gcnew System::EventHandler(this, &form::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(130, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Default message 1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::OrangeRed;
			this->checkBox1->Location = System::Drawing::Point(6, 28);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(135, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Show message actions";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &form::checkBox1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Clear field", L"Copy text", L"Paste text" });
			this->comboBox1->Location = System::Drawing::Point(182, 193);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &form::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(260, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Deaufult message 2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(96, 271);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(191, 90);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Show Actions";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &form::groupBox1_Enter);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::OrangeRed;
			this->checkBox2->Location = System::Drawing::Point(6, 51);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(131, 17);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Show program actions";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &form::checkBox2_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Location = System::Drawing::Point(319, 271);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(191, 90);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Enable Actions";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::OrangeRed;
			this->checkBox4->Location = System::Drawing::Point(6, 51);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(137, 17);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"Enable program actions";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &form::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::OrangeRed;
			this->checkBox3->Location = System::Drawing::Point(6, 28);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(141, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Enable message actions";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &form::checkBox3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(96, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Program";
			this->label2->Click += gcnew System::EventHandler(this, &form::label2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(396, 182);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 41);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Execute";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &form::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(228, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(229, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(96, 413);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 28);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Enter text massage 2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(255, 421);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(229, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(265, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 30);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Part 1";
			this->label4->Click += gcnew System::EventHandler(this, &form::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(265, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 30);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Part 2";
			this->label5->Click += gcnew System::EventHandler(this, &form::label5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(130, 463);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 42);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Copy";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &form::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(325, 463);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(124, 42);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Paste";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &form::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(537, 463);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 55);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &form::button6_Click);
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(626, 530);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"form";
			this->Text = L"Lab1";
			this->Load += gcnew System::EventHandler(this, &form::form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void form_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->Checked != true)
		{
			textBox1->Enabled = false;
		}
		else
		{
			textBox1->Enabled = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox1->Text = this->textBox1->Text + "Deafult message 1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox1->Text = this->textBox1->Text + "Another deafult message 2";
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Clipboard^ clip;
		if (comboBox1->SelectedItem->ToString() == "Clear field")
		{
			this->textBox1->Text = "";
		}
		else if (comboBox1->SelectedItem->ToString() == "Copy text")
		{
			clip->SetText(this->textBox1->Text);
		}
		else if (comboBox1->SelectedItem->ToString() == "Paste text")
		{
			this->textBox1->Text = clip->GetText() + this->textBox1->Text;
		}
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox2->Checked != true)
		{
			comboBox1->Enabled = false;
		}
		else
		{
			comboBox1->Enabled = true;
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox3->Checked != true)
		{
			button1->Enabled = false;
			button2->Enabled = false;
		}
		else
		{
			button1->Enabled = true;
			button2->Enabled = true;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox4->Checked != true)
		{
			button3->Enabled = false;
		}
		else
		{
			button3->Enabled = true;
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Clipboard^ clip1;
		this->textBox2->Text = clip1->GetText();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Clipboard^ clip1;
		clip1->SetText(this->textBox2->Text);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};
}
