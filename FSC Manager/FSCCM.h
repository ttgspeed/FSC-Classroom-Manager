#pragma once

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





















	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox1;





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
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"PS110"));
			System::Windows::Forms::TreeNode^  treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"PS111"));
			System::Windows::Forms::TreeNode^  treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"PS112"));
			System::Windows::Forms::TreeNode^  treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"PS113"));
			System::Windows::Forms::TreeNode^  treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"PS114"));
			System::Windows::Forms::TreeNode^  treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"PS115"));
			System::Windows::Forms::TreeNode^  treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"CLASSROOMS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(6) {treeNode18, 
				treeNode19, treeNode20, treeNode21, treeNode22, treeNode23}));
			System::Windows::Forms::TreeNode^  treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"PS115"));
			System::Windows::Forms::TreeNode^  treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"PS120"));
			System::Windows::Forms::TreeNode^  treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"BIO LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode25, 
				treeNode26}));
			System::Windows::Forms::TreeNode^  treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"PS118"));
			System::Windows::Forms::TreeNode^  treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"PS119"));
			System::Windows::Forms::TreeNode^  treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"PHY LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode28, 
				treeNode29}));
			System::Windows::Forms::TreeNode^  treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"PS251"));
			System::Windows::Forms::TreeNode^  treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"PS252"));
			System::Windows::Forms::TreeNode^  treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"MAT LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode31, 
				treeNode32}));
			System::Windows::Forms::TreeNode^  treeNode34 = (gcnew System::Windows::Forms::TreeNode(L"LABS", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {treeNode27, 
				treeNode30, treeNode33}));
			this->classTree = (gcnew System::Windows::Forms::TreeView());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->roomSelect = (gcnew System::Windows::Forms::TextBox());
			this->dateSelect = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// classTree
			// 
			this->classTree->Location = System::Drawing::Point(12, 12);
			this->classTree->Name = L"classTree";
			treeNode18->Name = L"Node1";
			treeNode18->Text = L"PS110";
			treeNode19->Name = L"Node3";
			treeNode19->Text = L"PS111";
			treeNode20->Name = L"Node4";
			treeNode20->Text = L"PS112";
			treeNode21->Name = L"Node5";
			treeNode21->Text = L"PS113";
			treeNode22->Name = L"Node6";
			treeNode22->Text = L"PS114";
			treeNode23->Name = L"Node7";
			treeNode23->Text = L"PS115";
			treeNode24->Checked = true;
			treeNode24->Name = L"Classrooms";
			treeNode24->Tag = L"";
			treeNode24->Text = L"CLASSROOMS";
			treeNode25->Name = L"Node12";
			treeNode25->Text = L"PS115";
			treeNode26->Name = L"Node13";
			treeNode26->Text = L"PS120";
			treeNode27->Checked = true;
			treeNode27->Name = L"BioLabs";
			treeNode27->Tag = L"isRoot";
			treeNode27->Text = L"BIO LABS";
			treeNode28->Name = L"Node14";
			treeNode28->Text = L"PS118";
			treeNode29->Name = L"Node15";
			treeNode29->Text = L"PS119";
			treeNode30->Checked = true;
			treeNode30->Name = L"PhysLabs";
			treeNode30->Tag = L"isRoot";
			treeNode30->Text = L"PHY LABS";
			treeNode31->Name = L"Node16";
			treeNode31->Text = L"PS251";
			treeNode32->Name = L"Node17";
			treeNode32->Text = L"PS252";
			treeNode33->Checked = true;
			treeNode33->Name = L"MatLabs";
			treeNode33->Tag = L"isRoot";
			treeNode33->Text = L"MAT LABS";
			treeNode34->Checked = true;
			treeNode34->Name = L"Labs";
			treeNode34->Tag = L"";
			treeNode34->Text = L"LABS";
			this->classTree->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode24, treeNode34});
			this->classTree->Size = System::Drawing::Size(148, 267);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(175, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(411, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Change Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"MAT 2450 4:45PM-6:00PM", L"CSC 2033 1:45PM-3:00PM", 
				L"MAT 2450 4:45PM-6:00PM", L"MAT 2450 4:45PM-6:00PM"});
			this->listBox1->Location = System::Drawing::Point(411, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(152, 225);
			this->listBox1->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(575, 291);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateSelect);
			this->Controls->Add(this->roomSelect);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->classTree);
			this->Name = L"Form1";
			this->Text = L"FSC Classroom Manager";
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
				//roomSelected = true;
			 }
		 }
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
			 dateSelect->Text = e->End.ToShortDateString();
			 populateForm();
			 //dateSelected = true;
		 }

		 private: void populateForm()
		 {
			 if(roomSelect->Text != "" && dateSelect->Text != "")
			 {
				 //eClass->Text = "Test";
				 //eTeacher->Text = "test2";
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //DataForm dataForm = gcnew DataForm;
			 //datarm->visible = true;
		 }
};
}

