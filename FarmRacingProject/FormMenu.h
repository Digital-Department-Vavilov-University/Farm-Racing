#pragma once
#include "FormGarage.h" // 3 форма, ангар

namespace FarmRacingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
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
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_garage;
	protected:

	private: System::Windows::Forms::Button^ bt_race;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenu::typeid));
			this->bt_garage = (gcnew System::Windows::Forms::Button());
			this->bt_race = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_garage
			// 
			this->bt_garage->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->bt_garage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_garage->ForeColor = System::Drawing::Color::White;
			this->bt_garage->Location = System::Drawing::Point(5, 7);
			this->bt_garage->Name = L"bt_garage";
			this->bt_garage->Size = System::Drawing::Size(196, 57);
			this->bt_garage->TabIndex = 1;
			this->bt_garage->Text = L"АНГАР";
			this->bt_garage->UseVisualStyleBackColor = false;
			this->bt_garage->Click += gcnew System::EventHandler(this, &FormMenu::bt_garage_Click);
			// 
			// bt_race
			// 
			this->bt_race->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->bt_race->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_race->ForeColor = System::Drawing::Color::White;
			this->bt_race->Location = System::Drawing::Point(5, 73);
			this->bt_race->Name = L"bt_race";
			this->bt_race->Size = System::Drawing::Size(196, 57);
			this->bt_race->TabIndex = 3;
			this->bt_race->Text = L"ГОНКИ";
			this->bt_race->UseVisualStyleBackColor = false;
			this->bt_race->Click += gcnew System::EventHandler(this, &FormMenu::bt_race_Click);
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->bt_race);
			this->Controls->Add(this->bt_garage);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormMenu";
			this->Text = L"Farm Racing";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_garage_Click(System::Object^ sender, System::EventArgs^ e) {

		FormGarage^ fgarage = gcnew FormGarage(); // Ангар
		fgarage->Owner = this;
		fgarage->Show();
		this->Hide();

	}
private: System::Void bt_salon_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void bt_race_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
