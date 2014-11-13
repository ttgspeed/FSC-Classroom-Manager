#pragma once

#include <pugixml.hpp>
#include <iostream>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#include "utilities.h"

namespace FSCManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModifyData
	/// </summary>
	public ref class ModifyData : public System::Windows::Forms::Form
	{
	public:
		ModifyData(void)
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
		~ModifyData()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// ModifyData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"ModifyData";
			this->Text = L"ModifyData";
			this->Load += gcnew System::EventHandler(this, &ModifyData::ModifyData_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ModifyData_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
