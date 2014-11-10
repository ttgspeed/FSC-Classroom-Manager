#pragma once

#include <pugixml.hpp>
#include <iostream>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#include "utilities.h"

namespace FSCMAnager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DataForm
	/// </summary>
	public ref class DataForm : public System::Windows::Forms::Form
	{
	public:
		DataForm(void)
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
		~DataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  eTimeEndDel;
	protected: 
	private: System::Windows::Forms::ComboBox^  eTimeStartDel;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  eTimeEnd;
	private: System::Windows::Forms::TextBox^  eTimeStart;
	private: System::Windows::Forms::TextBox^  eTeacher;
	private: System::Windows::Forms::TextBox^  eClass;
	private: System::Windows::Forms::Button^  button1;

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
			this->eTimeEndDel = (gcnew System::Windows::Forms::ComboBox());
			this->eTimeStartDel = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->eTimeEnd = (gcnew System::Windows::Forms::TextBox());
			this->eTimeStart = (gcnew System::Windows::Forms::TextBox());
			this->eTeacher = (gcnew System::Windows::Forms::TextBox());
			this->eClass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// eTimeEndDel
			// 
			this->eTimeEndDel->FormattingEnabled = true;
			this->eTimeEndDel->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"AM", L"PM"});
			this->eTimeEndDel->Location = System::Drawing::Point(233, 86);
			this->eTimeEndDel->Name = L"eTimeEndDel";
			this->eTimeEndDel->Size = System::Drawing::Size(68, 21);
			this->eTimeEndDel->TabIndex = 23;
			// 
			// eTimeStartDel
			// 
			this->eTimeStartDel->FormattingEnabled = true;
			this->eTimeStartDel->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"AM", L"PM"});
			this->eTimeStartDel->Location = System::Drawing::Point(233, 59);
			this->eTimeStartDel->Name = L"eTimeStartDel";
			this->eTimeStartDel->Size = System::Drawing::Size(68, 21);
			this->eTimeStartDel->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 149);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(289, 118);
			this->textBox7->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"NOTES";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"END TIME";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"BEGIN TIME";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"TEACHER";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"CLASS CODE";
			// 
			// eTimeEnd
			// 
			this->eTimeEnd->Location = System::Drawing::Point(89, 87);
			this->eTimeEnd->Name = L"eTimeEnd";
			this->eTimeEnd->Size = System::Drawing::Size(137, 20);
			this->eTimeEnd->TabIndex = 15;
			// 
			// eTimeStart
			// 
			this->eTimeStart->Location = System::Drawing::Point(89, 60);
			this->eTimeStart->Name = L"eTimeStart";
			this->eTimeStart->Size = System::Drawing::Size(137, 20);
			this->eTimeStart->TabIndex = 14;
			// 
			// eTeacher
			// 
			this->eTeacher->Location = System::Drawing::Point(89, 33);
			this->eTeacher->Name = L"eTeacher";
			this->eTeacher->Size = System::Drawing::Size(212, 20);
			this->eTeacher->TabIndex = 13;
			// 
			// eClass
			// 
			this->eClass->Location = System::Drawing::Point(89, 6);
			this->eClass->Name = L"eClass";
			this->eClass->Size = System::Drawing::Size(212, 20);
			this->eClass->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DataForm::button1_Click);
			// 
			// DataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 303);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->eTimeEndDel);
			this->Controls->Add(this->eTimeStartDel);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->eTimeEnd);
			this->Controls->Add(this->eTimeStart);
			this->Controls->Add(this->eTeacher);
			this->Controls->Add(this->eClass);
			this->Name = L"DataForm";
			this->Text = L"Enter Data";
			this->Load += gcnew System::EventHandler(this, &DataForm::DataForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: char* formToChar(String ^data)
	{
		String ^str = eClass->Text;
		pin_ptr<const wchar_t> wch = PtrToStringChars(str);
		size_t convertedChars = 0;
		size_t  sizeInBytes = ((str->Length + 1) * 2);
		errno_t err = 0;
		char *ch = (char *)malloc(sizeInBytes);
		err = wcstombs_s(&convertedChars, 
						ch, sizeInBytes,
						wch, sizeInBytes);
		if (err != 0)
			printf_s("wcstombs_s  failed!\n");

		return ch;
	}*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		utilities utils;

		pugi::xml_document doc;

		if (!doc.load_file("FSCM1.xml")){
		pugi::xml_node main = doc.append_child("FSCM");

		// add description node with text child
		pugi::xml_node mc = main.append_child("Classrooms");
		pugi::xml_node ch = mc.append_child("classroom");
		pugi::xml_node cl = ch.append_child("PS100");

		cl.append_child("classcode").text().set(utils.formToChar(eClass->Text));
		cl.append_child("teacher").text().set(utils.formToChar(eTeacher->Text));
		cl.append_child("begintime").text().set(utils.formToChar(eTimeStart->Text));
		cl.append_child("endtime").text().set(utils.formToChar(eTimeEnd->Text));

		//crm.append_child(pugi::node_pcdata).set_value(utils.formToChar(eClass->Text));

		// add param node before the description
		pugi::xml_node param = main.insert_child_before("param", mc);

		// add attributes to param node
		param.append_attribute("name") = "version";
		param.append_attribute("value") = 1.1;
		param.insert_attribute_after("type", param.attribute("name")) = "float";
		//]

		std::cout << "Saving result: " << doc.save_file("FSCM.xml") << std::endl;
		}
	}

private: System::Void DataForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
