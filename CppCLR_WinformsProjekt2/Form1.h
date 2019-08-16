#pragma once

namespace CppCLRWinformsProjekt {

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
	private: System::Windows::Forms::TextBox^ TotalBelanja;
	private: System::Windows::Forms::TextBox^ UangDariPembeli;
	private: System::Windows::Forms::TextBox^ Kembalian;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ CounterOdolKurang;
	private: System::Windows::Forms::Button^ CounterOdolTambah;
	private: System::Windows::Forms::Button^ CounterSikatGigiKurang;
	private: System::Windows::Forms::Button^ CounterSikatGigiTambah;





	private: System::Windows::Forms::TextBox^ CounterOdol;
	private: System::Windows::Forms::TextBox^ CounterSikatGigi;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;

	protected:

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
			this->TotalBelanja = (gcnew System::Windows::Forms::TextBox());
			this->UangDariPembeli = (gcnew System::Windows::Forms::TextBox());
			this->Kembalian = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CounterOdolKurang = (gcnew System::Windows::Forms::Button());
			this->CounterOdolTambah = (gcnew System::Windows::Forms::Button());
			this->CounterSikatGigiKurang = (gcnew System::Windows::Forms::Button());
			this->CounterSikatGigiTambah = (gcnew System::Windows::Forms::Button());
			this->CounterOdol = (gcnew System::Windows::Forms::TextBox());
			this->CounterSikatGigi = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TotalBelanja
			// 
			this->TotalBelanja->AccessibleName = L"Total";
			this->TotalBelanja->Location = System::Drawing::Point(78, 41);
			this->TotalBelanja->Name = L"TotalBelanja";
			this->TotalBelanja->Size = System::Drawing::Size(171, 20);
			this->TotalBelanja->TabIndex = 0;
			this->TotalBelanja->Text = L"0";
			this->TotalBelanja->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// UangDariPembeli
			// 
			this->UangDariPembeli->AccessibleName = L"Income";
			this->UangDariPembeli->Location = System::Drawing::Point(78, 67);
			this->UangDariPembeli->Name = L"UangDariPembeli";
			this->UangDariPembeli->Size = System::Drawing::Size(171, 20);
			this->UangDariPembeli->TabIndex = 1;
			this->UangDariPembeli->Text = L"0";
			this->UangDariPembeli->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Kembalian
			// 
			this->Kembalian->AccessibleName = L"Sisa";
			this->Kembalian->Location = System::Drawing::Point(78, 93);
			this->Kembalian->Name = L"Kembalian";
			this->Kembalian->Size = System::Drawing::Size(171, 20);
			this->Kembalian->TabIndex = 2;
			this->Kembalian->Text = L"0";
			this->Kembalian->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Kembalian->TextChanged += gcnew System::EventHandler(this, &Form1::Kembalian_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"TOTAL";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::Label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"INCOME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"SISA";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->CounterOdolKurang);
			this->groupBox1->Controls->Add(this->CounterOdolTambah);
			this->groupBox1->Controls->Add(this->CounterSikatGigiKurang);
			this->groupBox1->Controls->Add(this->CounterSikatGigiTambah);
			this->groupBox1->Controls->Add(this->CounterOdol);
			this->groupBox1->Controls->Add(this->CounterSikatGigi);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(24, 131);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(225, 85);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Daftar Barang";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::GroupBox1_Enter);
			// 
			// CounterOdolKurang
			// 
			this->CounterOdolKurang->AccessibleName = L"CounterOdolKurang";
			this->CounterOdolKurang->Location = System::Drawing::Point(157, 51);
			this->CounterOdolKurang->Name = L"CounterOdolKurang";
			this->CounterOdolKurang->Size = System::Drawing::Size(15, 20);
			this->CounterOdolKurang->TabIndex = 7;
			this->CounterOdolKurang->Text = L"-";
			this->CounterOdolKurang->UseVisualStyleBackColor = true;
			this->CounterOdolKurang->Click += gcnew System::EventHandler(this, &Form1::Button4_Click);
			// 
			// CounterOdolTambah
			// 
			this->CounterOdolTambah->AccessibleName = L"CounterOdolTambah";
			this->CounterOdolTambah->Location = System::Drawing::Point(204, 52);
			this->CounterOdolTambah->Name = L"CounterOdolTambah";
			this->CounterOdolTambah->Size = System::Drawing::Size(15, 20);
			this->CounterOdolTambah->TabIndex = 6;
			this->CounterOdolTambah->Text = L"+";
			this->CounterOdolTambah->UseVisualStyleBackColor = true;
			this->CounterOdolTambah->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
			// 
			// CounterSikatGigiKurang
			// 
			this->CounterSikatGigiKurang->AccessibleName = L"CounterSikatGigiKurang";
			this->CounterSikatGigiKurang->Location = System::Drawing::Point(157, 19);
			this->CounterSikatGigiKurang->Name = L"CounterSikatGigiKurang";
			this->CounterSikatGigiKurang->Size = System::Drawing::Size(15, 20);
			this->CounterSikatGigiKurang->TabIndex = 5;
			this->CounterSikatGigiKurang->Text = L"-";
			this->CounterSikatGigiKurang->UseVisualStyleBackColor = true;
			this->CounterSikatGigiKurang->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// CounterSikatGigiTambah
			// 
			this->CounterSikatGigiTambah->AccessibleName = L"CounterSikatGigiTambah";
			this->CounterSikatGigiTambah->Location = System::Drawing::Point(204, 19);
			this->CounterSikatGigiTambah->Name = L"CounterSikatGigiTambah";
			this->CounterSikatGigiTambah->Size = System::Drawing::Size(15, 20);
			this->CounterSikatGigiTambah->TabIndex = 4;
			this->CounterSikatGigiTambah->Text = L"+";
			this->CounterSikatGigiTambah->UseVisualStyleBackColor = true;
			this->CounterSikatGigiTambah->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// CounterOdol
			// 
			this->CounterOdol->AccessibleName = L"CounterOdol";
			this->CounterOdol->Location = System::Drawing::Point(178, 52);
			this->CounterOdol->Name = L"CounterOdol";
			this->CounterOdol->Size = System::Drawing::Size(20, 20);
			this->CounterOdol->TabIndex = 3;
			this->CounterOdol->Text = L"0";
			this->CounterOdol->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CounterOdol->TextChanged += gcnew System::EventHandler(this, &Form1::CounterOdol_TextChanged);
			// 
			// CounterSikatGigi
			// 
			this->CounterSikatGigi->AccessibleName = L"CounterSikatGigi";
			this->CounterSikatGigi->Location = System::Drawing::Point(178, 19);
			this->CounterSikatGigi->Name = L"CounterSikatGigi";
			this->CounterSikatGigi->Size = System::Drawing::Size(20, 20);
			this->CounterSikatGigi->TabIndex = 2;
			this->CounterSikatGigi->Text = L"0";
			this->CounterSikatGigi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CounterSikatGigi->TextChanged += gcnew System::EventHandler(this, &Form1::CounterSikatGigi_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LightGray;
			this->label5->Location = System::Drawing::Point(11, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Odol";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Location = System::Drawing::Point(11, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Sikat Gigi";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::Label4_Click);
			// 
			// button5
			// 
			this->button5->AccessibleName = L"TombolBayar";
			this->button5->BackColor = System::Drawing::Color::Teal;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(24, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 26);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Bayar";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::Button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(74, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Simple Cashier";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(181, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 24);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Kembalian);
			this->Controls->Add(this->UangDariPembeli);
			this->Controls->Add(this->TotalBelanja);
			this->Name = L"Form1";
			this->Text = L"Simple Cashier";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CheckedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ counter = CounterSikatGigi->Text;
	int integer = System::Convert::ToInt16(counter);
	integer++;
	CounterSikatGigi->Text = System::Convert::ToString(integer);

}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ counter = CounterSikatGigi->Text;
	int integer = System::Convert::ToInt16(counter);
	integer--;
	CounterSikatGigi->Text = System::Convert::ToString(integer);
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ counter = CounterOdol->Text;
	int integer = System::Convert::ToInt16(counter);
	integer++;
	CounterOdol->Text = System::Convert::ToString(integer);
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ counter = CounterOdol->Text;
	int integer = System::Convert::ToInt16(counter);
	integer--;
	CounterOdol->Text = System::Convert::ToString(integer);
}
private: System::Void CounterSikatGigi_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int total = 0;
	int hargaSikatGigi = 5000;
	int banyakSikatGigi = System::Convert::ToInt16(CounterSikatGigi->Text);
	int hargaOdol = 3000;
	int banyakOdol = System::Convert::ToInt16(CounterOdol->Text);

	if (banyakSikatGigi <= 0) {
		banyakSikatGigi = 0;
		CounterSikatGigi->Text = System::Convert::ToString(0);
	}
	if (banyakOdol <= 0) {
		banyakOdol = 0;
		CounterOdol->Text = System::Convert::ToString(0);
	}
		

	total = banyakSikatGigi * hargaSikatGigi + banyakOdol * hargaOdol;

	TotalBelanja->Text = System::Convert::ToString(total);
}
private: System::Void CounterOdol_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int total = 0;
	int hargaSikatGigi = 5000;
	int banyakSikatGigi = System::Convert::ToInt16(CounterSikatGigi->Text);
	int hargaOdol = 3000;
	int banyakOdol = System::Convert::ToInt16(CounterOdol->Text);

	if (banyakSikatGigi <= 0) {
		banyakSikatGigi = 0;
		CounterSikatGigi->Text = System::Convert::ToString(0);
	}
	if (banyakOdol <= 0) {
		banyakOdol = 0;
		CounterOdol->Text = System::Convert::ToString(0);
	}


	total = banyakSikatGigi * hargaSikatGigi + banyakOdol * hargaOdol;

	TotalBelanja->Text = System::Convert::ToString(total);
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Hello Wordl!","jlk");

	int totalBelanja = System::Convert::ToInt32(TotalBelanja->Text);
	int uangYangDibayarkan = System::Convert::ToInt32(UangDariPembeli->Text);
	int kembalian = System::Convert::ToInt32(Kembalian->Text);

	kembalian = uangYangDibayarkan - totalBelanja;
	if (kembalian < 0) {
		MessageBox::Show("!!!! Uang yang Diberikan Masih Kurang !!!!","ERROR!!!");
	}
	else {

		Kembalian->Text = System::Convert::ToString(kembalian);
		TotalBelanja->Text = System::Convert::ToString(0);
		UangDariPembeli->Text = System::Convert::ToString(0);


		MessageBox::Show("Pembayaran Berhasil!! \n TerimaKasih Telah Bertransaksi di Toko Kami ^-^", "SUCCESS");
		
	}


}
private: System::Void Kembalian_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	TotalBelanja->Text = "0";
	UangDariPembeli->Text = "0";
	Kembalian->Text = "0";
	CounterOdol->Text = "0";
	CounterSikatGigi->Text = "0";
}
};
}
