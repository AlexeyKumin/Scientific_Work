#pragma once
#include "StreamModel.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox12;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(155, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(155, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(321, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"l1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(321, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"l2";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(199, 56);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(155, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"t1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(33, 131);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"0,5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(155, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"T1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(33, 203);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"10";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(155, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"T2";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(33, 231);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(321, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"T4";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(199, 231);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 16;
			this->textBox8->Text = L"2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(321, 206);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"T3";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(199, 203);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 14;
			this->textBox9->Text = L"10";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(280, 323);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 17);
			this->label10->TabIndex = 19;
			this->label10->Text = L"N";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(168, 322);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 18;
			this->textBox10->Text = L"500";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(709, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(600, 379);
			this->dataGridView1->TabIndex = 20;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"G";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x1";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"x2";
			this->Column3->Name = L"Column3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(306, 60);
			this->button1->TabIndex = 21;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Location = System::Drawing::Point(414, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(260, 185);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ñïðàâêà";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(22, 137);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 17);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Mid T x2 =";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(22, 106);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 17);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Mid T x1 =";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(22, 65);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 17);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Mid x2 =";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 33);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 17);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Mid x1 =";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(33, 286);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(112, 21);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"êîíòðîëü Ò1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(321, 134);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 17);
			this->label15->TabIndex = 25;
			this->label15->Text = L"t2";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(199, 131);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 24;
			this->textBox11->Text = L"0,5";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(33, 322);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(112, 21);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Text = L"êîíòðîëü Ò3";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(280, 287);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(42, 17);
			this->label16->TabIndex = 28;
			this->label16->Text = L"maxT";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(168, 286);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 27;
			this->textBox12->Text = L"20";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1511, 498);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void pushTab(System::Windows::Forms::DataGridView^ Tab, int i, int key, int x1, int x2)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = key;
		dataGridView1->Rows[i]->Cells[1]->Value = x1;
		dataGridView1->Rows[i]->Cells[2]->Value = x2;
	}

	double controlT(StreamModel G, double T0, double maxT)
	{
		double T;
		if (G.x > (int)(T0 / G.t + 1))
		{
			if ((G.x * G.t) < (maxT))
				T = (G.x * G.t);
			else
				T = maxT;
		}
		else
			T = T0;
		return T;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int x1 = Convert::ToInt16(textBox1->Text);
		int x2 = Convert::ToInt16(textBox2->Text);
		double L1 = Convert::ToDouble(textBox3->Text);
		double L2 = Convert::ToDouble(textBox4->Text);
		double G1t = Convert::ToDouble(textBox5->Text);
		double G2t = Convert::ToDouble(textBox11->Text);
		int N = Convert::ToInt16(textBox10->Text);
		double maxT = Convert::ToInt16(textBox12->Text);

		vector<int> Tab1, Tab2, Tab3;

		vector<double> T(4);
		T[0] = Convert::ToDouble(textBox6->Text);
		T[1] = Convert::ToDouble(textBox7->Text);
		T[2] = Convert::ToDouble(textBox9->Text);
		T[3] = Convert::ToDouble(textBox8->Text);

		vector<double> T1(2);
		T1[0] = T[0];
		T1[1] = T[2];

		StreamModel G1(1, x1, G1t, L1);
		StreamModel G2(1, x2, G2t, L2);

		for (int p, i = 0; i < N; i++)
		{
			p = i % 4;
			G1.key = p + 1;
			G2.key = p + 1;
			switch (p)
			{
			case 0:
			{
				G1.move(T[p]);
				if (checkBox1->Checked)
					T[p] = controlT(G1, T1[0], maxT);
				G2.stagnation(T[p]);
				break;
			}
			case 1:
			{
				G1.service(T[p]);
				G2.stagnation(T[p]);
				break;
			}
			case 2:
			{
				G2.move(T[p]);
				if (checkBox2->Checked)
					T[p] = controlT(G2, T1[1], maxT);
				G1.stagnation(T[p]);
				break;
			}
			case 3:
			{
				G1.stagnation(T[p]);
				G2.service(T[p]);
				break;
			}
			}
			Tab1.push_back(G1.key);
			Tab2.push_back(G1.x);
			Tab3.push_back(G2.x);
		}

		dataGridView1->Rows->Clear();
		for (int i = 0; i < N; i++)
		{
			pushTab(dataGridView1, i, Tab1[i], Tab2[i], Tab3[i]);
		}

		label11->Text = "Mid x1 = " + Convert::ToString(G1.Med_x()) + "  ";
		label12->Text = "Mid x2 = " + Convert::ToString(G2.Med_x()) + "  ";
		label13->Text = "Mid T x1 = " + Convert::ToString(G1.Med_Tx()) + "  ";
		label14->Text = "Mid T x2 = " + Convert::ToString(G2.Med_Tx()) + "  ";
	}
};
}
