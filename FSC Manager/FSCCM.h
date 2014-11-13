#pragma once

#include <iostream>
#include "DataForm.h"
#include "ModifyData.h"
#include "utilities.h"

namespace FSCMAnager {

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
	private: System::Windows::Forms::TreeView^  classTree;
	protected: 

	protected: 
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  roomSelect;
	private: System::Windows::Forms::TextBox^  dateSelect;
	private: System::Windows::Forms::Button^  changeDataBtn;
	private: System::Windows::Forms::ListBox^  classList;
	private: System::Windows::Forms::Button^  newEntryBtn;

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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"PS110"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"PS111"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"PS112"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"PS113"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"PS114"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"PS115"));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"CLASSROOMS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(6) {treeNode1, 
				treeNode2, treeNode3, treeNode4, treeNode5, treeNode6}));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"PS115"));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"PS120"));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"BIO LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode8, 
				treeNode9}));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"PS118"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"PS119"));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"PHY LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode11, 
				treeNode12}));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"PS251"));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"PS252"));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"MAT LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode14, 
				treeNode15}));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {treeNode10, 
				treeNode13, treeNode16}));
			this->classTree = (gcnew System::Windows::Forms::TreeView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->roomSelect = (gcnew System::Windows::Forms::TextBox());
			this->dateSelect = (gcnew System::Windows::Forms::TextBox());
			this->changeDataBtn = (gcnew System::Windows::Forms::Button());
			this->classList = (gcnew System::Windows::Forms::ListBox());
			this->newEntryBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// classTree
			// 
			this->classTree->Location = System::Drawing::Point(12, 12);
			this->classTree->Name = L"classTree";
			treeNode1->Name = L"Node1";
			treeNode1->Text = L"PS110";
			treeNode2->Name = L"Node3";
			treeNode2->Text = L"PS111";
			treeNode3->Name = L"Node4";
			treeNode3->Text = L"PS112";
			treeNode4->Name = L"Node5";
			treeNode4->Text = L"PS113";
			treeNode5->Name = L"Node6";
			treeNode5->Text = L"PS114";
			treeNode6->Name = L"Node7";
			treeNode6->Text = L"PS115";
			treeNode7->Checked = true;
			treeNode7->Name = L"Classrooms";
			treeNode7->Tag = L"";
			treeNode7->Text = L"CLASSROOMS";
			treeNode8->Name = L"Node12";
			treeNode8->Text = L"PS115";
			treeNode9->Name = L"Node13";
			treeNode9->Text = L"PS120";
			treeNode10->Checked = true;
			treeNode10->Name = L"BioLabs";
			treeNode10->Tag = L"isRoot";
			treeNode10->Text = L"BIO LABS";
			treeNode11->Name = L"Node14";
			treeNode11->Text = L"PS118";
			treeNode12->Name = L"Node15";
			treeNode12->Text = L"PS119";
			treeNode13->Checked = true;
			treeNode13->Name = L"PhysLabs";
			treeNode13->Tag = L"isRoot";
			treeNode13->Text = L"PHY LABS";
			treeNode14->Name = L"Node16";
			treeNode14->Text = L"PS251";
			treeNode15->Name = L"Node17";
			treeNode15->Text = L"PS252";
			treeNode16->Checked = true;
			treeNode16->Name = L"MatLabs";
			treeNode16->Tag = L"isRoot";
			treeNode16->Text = L"MAT LABS";
			treeNode17->Checked = true;
			treeNode17->Name = L"Labs";
			treeNode17->Tag = L"";
			treeNode17->Text = L"LABS";
			this->classTree->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode7, treeNode17});
			this->classTree->Size = System::Drawing::Size(148, 226);
			this->classTree->TabIndex = 0;
			this->classTree->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::treeView1_AfterSelect);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(172, 12);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::monthCalendar1_DateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ROOM";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(172, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DATE";
			// 
			// roomSelect
			// 
			this->roomSelect->Enabled = false;
			this->roomSelect->Location = System::Drawing::Point(219, 187);
			this->roomSelect->Name = L"roomSelect";
			this->roomSelect->Size = System::Drawing::Size(180, 20);
			this->roomSelect->TabIndex = 4;
			// 
			// dateSelect
			// 
			this->dateSelect->Enabled = false;
			this->dateSelect->Location = System::Drawing::Point(219, 217);
			this->dateSelect->Name = L"dateSelect";
			this->dateSelect->Size = System::Drawing::Size(180, 20);
			this->dateSelect->TabIndex = 5;
			// 
			// changeDataBtn
			// 
			this->changeDataBtn->Enabled = false;
			this->changeDataBtn->Location = System::Drawing::Point(411, 185);
			this->changeDataBtn->Name = L"changeDataBtn";
			this->changeDataBtn->Size = System::Drawing::Size(152, 23);
			this->changeDataBtn->TabIndex = 8;
			this->changeDataBtn->Text = L"Remove Entry";
			this->changeDataBtn->UseVisualStyleBackColor = true;
			this->changeDataBtn->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// classList
			// 
			this->classList->FormattingEnabled = true;
			this->classList->Location = System::Drawing::Point(411, 12);
			this->classList->Name = L"classList";
			this->classList->Size = System::Drawing::Size(152, 160);
			this->classList->TabIndex = 9;
			this->classList->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// newEntryBtn
			// 
			this->newEntryBtn->Location = System::Drawing::Point(411, 215);
			this->newEntryBtn->Name = L"newEntryBtn";
			this->newEntryBtn->Size = System::Drawing::Size(152, 23);
			this->newEntryBtn->TabIndex = 10;
			this->newEntryBtn->Text = L"New Entry";
			this->newEntryBtn->UseVisualStyleBackColor = true;
			this->newEntryBtn->Click += gcnew System::EventHandler(this, &Form1::newEntryBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(575, 250);
			this->Controls->Add(this->newEntryBtn);
			this->Controls->Add(this->classList);
			this->Controls->Add(this->changeDataBtn);
			this->Controls->Add(this->dateSelect);
			this->Controls->Add(this->roomSelect);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->classTree);
			this->Name = L"Form1";
			this->Text = L"FSC Classroom Manager";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
			 //since "checked" nodes are root nodes, if a node is "checked", do not update the text box
			 if(!e->Node->Checked)
			 {
				roomSelect->Text = e->Node->Text;
				populateForm();

				utilities utils;
				utils.selectedClass = utils.formToChar(e->Node->Text);
			 }
		 }
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
			 dateSelect->Text = e->End.ToShortDateString();

			 utilities utils;
			 utils.selectedDate = utils.formToChar(e->End.ToShortDateString());

			 populateForm();
		 }

		 private: void populateForm()
		 {
			 classList->Items->Clear();

			 utilities utils;
			 if(roomSelect->Text != "" && dateSelect->Text != "")
			 {
				pugi::xml_document doc;

				if (doc.load_file("FSCM.xml")){
					pugi::xml_node ch = doc.child("FSCM").child("Classrooms").child("classroom");

					for (pugi::xml_node cl = ch.first_child(); cl; cl = cl.next_sibling())
					{
						String^ cldn = gcnew String(cl.attribute("displayname").value());
						String^ clrn = gcnew String(cl.attribute("classroom").value());
						String^ cldt = gcnew String(cl.attribute("date").value());

						if((clrn == roomSelect->Text) && (cldt == dateSelect->Text))
							classList->Items->Insert(0, cldn);
					}
				}
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 utilities utils;
			 if(roomSelect->Text != "" && dateSelect->Text != "")
			 {
				String^ curItem = classList->SelectedItem->ToString();

				pugi::xml_document doc;

				if (doc.load_file("FSCM.xml")){
					pugi::xml_node ch = doc.child("FSCM").child("Classrooms").child("classroom");

					for (pugi::xml_node cl = ch.first_child(); cl; cl = cl.next_sibling())
					{
						String^ cldn = gcnew String(cl.attribute("displayname").value());

						if(cldn == curItem){
							ch.remove_child(cl);
							std::cout << "Saving result: " << doc.save_file("FSCM.xml") << std::endl;
							populateForm();
						}
					}
				}
			 }

		 }

		 //form loading
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 utilities utils;
			 utils.initXML();

			 dateSelect->Text = monthCalendar1->TodayDate.ToShortDateString();
			 utils.selectedDate = utils.formToChar(dateSelect->Text);


		 }

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 changeDataBtn->Enabled = true;
		 }
private: System::Void newEntryBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(roomSelect->Text != ""){
				DataForm^ df = gcnew DataForm();
				df->Visible = true;
			 }
			 else
			 {
				 MessageBox::Show("Please select a valid classroom", "MessageBox Test", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }
		 }
};
}

