#pragma once
#include "FormMenu.h"  

namespace FarmRacingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_main;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->bt_main = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_main
			// 
			this->bt_main->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->bt_main->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F));
			this->bt_main->ForeColor = System::Drawing::Color::White;
			this->bt_main->Location = System::Drawing::Point(241, 191);
			this->bt_main->Name = L"bt_main";
			this->bt_main->Size = System::Drawing::Size(282, 50);
			this->bt_main->TabIndex = 0;
			this->bt_main->Text = L"Ќј„ј“№ »√–”";
			this->bt_main->UseVisualStyleBackColor = false;
			this->bt_main->Click += gcnew System::EventHandler(this, &FormMain::bt_main_Click);
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(797, 448);
			this->Controls->Add(this->bt_main);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormMain";
			this->Text = L"Farm Racing";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_main_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FormMenu^ fmenu = gcnew FormMenu(); // FormMenu. 2-а€ форма, где отображено меню
		fmenu->Show();
	}
	};
}
