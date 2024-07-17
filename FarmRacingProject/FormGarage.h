#pragma once
#include "Vehicle.h"

namespace FarmRacingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormGarage
	/// </summary>
	public ref class FormGarage : public System::Windows::Forms::Form
	{
	public:
		FormGarage(void)
		{
			InitializeComponent();
			button_garage_upgrade_car->Hide();
			button_select_car->Hide();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormGarage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_garage;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label_back_menu;
	private: System::Windows::Forms::Button^ button_select_car;
	private: System::Windows::Forms::Button^ button_next_car;
	private: System::Windows::Forms::PictureBox^ pb_garage_vehicle;
	private: System::Windows::Forms::Label^ label_vehicle_name;
	private: System::Windows::Forms::Label^ label_vehicle_power;








	private:
		int select_car = 1;
		int select_car_upgrade = 1;
	private: System::Windows::Forms::Button^ button_garage_upgrade_car;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormGarage::typeid));
			this->label_garage = (gcnew System::Windows::Forms::Label());
			this->label_back_menu = (gcnew System::Windows::Forms::Label());
			this->button_select_car = (gcnew System::Windows::Forms::Button());
			this->button_next_car = (gcnew System::Windows::Forms::Button());
			this->pb_garage_vehicle = (gcnew System::Windows::Forms::PictureBox());
			this->label_vehicle_name = (gcnew System::Windows::Forms::Label());
			this->label_vehicle_power = (gcnew System::Windows::Forms::Label());
			this->button_garage_upgrade_car = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_garage_vehicle))->BeginInit();
			this->SuspendLayout();
			// 
			// label_garage
			// 
			this->label_garage->AutoSize = true;
			this->label_garage->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_garage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_garage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_garage->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_garage->Location = System::Drawing::Point(12, 9);
			this->label_garage->Name = L"label_garage";
			this->label_garage->Size = System::Drawing::Size(128, 42);
			this->label_garage->TabIndex = 1;
			this->label_garage->Text = L"АНГАР";
			// 
			// label_back_menu
			// 
			this->label_back_menu->AutoSize = true;
			this->label_back_menu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_back_menu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_back_menu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_back_menu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_back_menu->Location = System::Drawing::Point(639, 9);
			this->label_back_menu->Name = L"label_back_menu";
			this->label_back_menu->Size = System::Drawing::Size(133, 42);
			this->label_back_menu->TabIndex = 7;
			this->label_back_menu->Text = L"НАЗАД";
			this->label_back_menu->Click += gcnew System::EventHandler(this, &FormGarage::label_back_menu_Click);
			// 
			// button_select_car
			// 
			this->button_select_car->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_select_car->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_select_car->ForeColor = System::Drawing::Color::White;
			this->button_select_car->Location = System::Drawing::Point(162, 498);
			this->button_select_car->Name = L"button_select_car";
			this->button_select_car->Size = System::Drawing::Size(112, 39);
			this->button_select_car->TabIndex = 8;
			this->button_select_car->Text = L"Выбрать";
			this->button_select_car->UseVisualStyleBackColor = false;
			this->button_select_car->Click += gcnew System::EventHandler(this, &FormGarage::button_select_car_Click);
			// 
			// button_next_car
			// 
			this->button_next_car->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_next_car->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_next_car->ForeColor = System::Drawing::Color::White;
			this->button_next_car->Location = System::Drawing::Point(412, 498);
			this->button_next_car->Name = L"button_next_car";
			this->button_next_car->Size = System::Drawing::Size(252, 39);
			this->button_next_car->TabIndex = 9;
			this->button_next_car->Text = L"Следующий трактор";
			this->button_next_car->UseVisualStyleBackColor = false;
			this->button_next_car->Click += gcnew System::EventHandler(this, &FormGarage::button_next_car_Click);
			// 
			// pb_garage_vehicle
			// 
			this->pb_garage_vehicle->BackColor = System::Drawing::Color::Transparent;
			this->pb_garage_vehicle->Location = System::Drawing::Point(162, 134);
			this->pb_garage_vehicle->Name = L"pb_garage_vehicle";
			this->pb_garage_vehicle->Size = System::Drawing::Size(437, 358);
			this->pb_garage_vehicle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pb_garage_vehicle->TabIndex = 10;
			this->pb_garage_vehicle->TabStop = false;
			this->pb_garage_vehicle->Click += gcnew System::EventHandler(this, &FormGarage::pb_garage_vehicle_Click);
			// 
			// label_vehicle_name
			// 
			this->label_vehicle_name->AutoSize = true;
			this->label_vehicle_name->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_vehicle_name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_vehicle_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_vehicle_name->ForeColor = System::Drawing::Color::White;
			this->label_vehicle_name->Location = System::Drawing::Point(313, 50);
			this->label_vehicle_name->Name = L"label_vehicle_name";
			this->label_vehicle_name->Size = System::Drawing::Size(31, 44);
			this->label_vehicle_name->TabIndex = 11;
			this->label_vehicle_name->Text = L"-";
			// 
			// label_vehicle_power
			// 
			this->label_vehicle_power->AutoSize = true;
			this->label_vehicle_power->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_vehicle_power->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_vehicle_power->Cursor = System::Windows::Forms::Cursors::Default;
			this->label_vehicle_power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_vehicle_power->ForeColor = System::Drawing::Color::White;
			this->label_vehicle_power->Location = System::Drawing::Point(315, 104);
			this->label_vehicle_power->Name = L"label_vehicle_power";
			this->label_vehicle_power->Size = System::Drawing::Size(21, 27);
			this->label_vehicle_power->TabIndex = 12;
			this->label_vehicle_power->Text = L"-";
			// 
			// button_garage_upgrade_car
			// 
			this->button_garage_upgrade_car->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_garage_upgrade_car->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_garage_upgrade_car->ForeColor = System::Drawing::Color::White;
			this->button_garage_upgrade_car->Location = System::Drawing::Point(225, 498);
			this->button_garage_upgrade_car->Name = L"button_garage_upgrade_car";
			this->button_garage_upgrade_car->Size = System::Drawing::Size(252, 39);
			this->button_garage_upgrade_car->TabIndex = 13;
			this->button_garage_upgrade_car->Text = L"Улучшить";
			this->button_garage_upgrade_car->UseVisualStyleBackColor = false;
			this->button_garage_upgrade_car->Click += gcnew System::EventHandler(this, &FormGarage::button_garage_upgrade_car_Click);
			// 
			// FormGarage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->button_garage_upgrade_car);
			this->Controls->Add(this->label_vehicle_power);
			this->Controls->Add(this->label_vehicle_name);
			this->Controls->Add(this->pb_garage_vehicle);
			this->Controls->Add(this->button_next_car);
			this->Controls->Add(this->button_select_car);
			this->Controls->Add(this->label_back_menu);
			this->Controls->Add(this->label_garage);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormGarage";
			this->Text = L"Farm Racing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_garage_vehicle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void label_back_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show(); // Открытие формы FormMenu, т.е меню
		this->Close();
		select_car = 0;
		select_car_upgrade = 0;
	}
	private: System::Void pb_garage_vehicle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
//
public : System::Void button_next_car_Click(System::Object^ sender, System::EventArgs^ e) {

	Vehicle T16("T16", 20, 20, 0, 0);
	Vehicle T25("T25", 27, 25, 0, 0);
	Vehicle UMZ6K("ЮМЗ-6К", 60, 35, 0, 0);
	Vehicle MTZ80("МТЗ 80", 75, 40, 0, 0);
	Vehicle CASE1455("Case IH 1455XL", 145, 65, 0, 0);
	Vehicle JohnDeere("John Deere 4755", 175, 70, 0, 0);
	Vehicle Fendt("Fendt Favorit 824", 230, 75, 0, 0);
	Vehicle DeutzM620("Deutz-Fahr Agrotron M 620", 163, 80, 0, 0);
	Vehicle JCB3230("JCB Fastrac 3230 Xtra", 195, 85, 0, 0);
	Vehicle T150K("HTZ T150K", 165, 87, 0, 0);
	Vehicle T550("T550", 175, 90, 0, 0);

	switch (select_car)
	{
	case 0:
		select_car = 1;
		select_car_upgrade = 1;
		break;
	case 1:
		this->button_select_car->Show();

		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(T16.getModel().c_str());
		label_vehicle_power->Text = "" + T16.getPower() + " л.с";

		select_car_upgrade = 1;
		select_car++;
		break;

	case 2:

		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(T25.getModel().c_str());
		label_vehicle_power->Text = "" + T25.getPower() + " л.с";

		select_car_upgrade = 2;
		select_car++;
		break;

	case 3:

		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(UMZ6K.getModel().c_str());
		label_vehicle_power->Text = "" + UMZ6K.getPower() + " л.с";

		select_car_upgrade = 3;
		select_car++;
		break;

	case 4:

		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(MTZ80.getModel().c_str());
		label_vehicle_power->Text = "" + MTZ80.getPower() + " л.с";

		select_car_upgrade = 4;
		select_car++;
		break;

	case 5:
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(CASE1455.getModel().c_str());
		label_vehicle_power->Text = "" + CASE1455.getPower() + " л.с";

		select_car_upgrade = 5;
		select_car++;
		break;

	case 6:
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(JohnDeere.getModel().c_str()); 
		label_vehicle_power->Text = "" + JohnDeere.getPower() + " л.с";

		select_car_upgrade = 6;
		select_car++;
		break;

	case 7:
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(Fendt.getModel().c_str());
		label_vehicle_power->Text = "" + Fendt.getPower() + " л.с";

		select_car_upgrade = 7;
		select_car++;
		break;

	case 8:
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");
		label_vehicle_name->Text = "" + gcnew String(DeutzM620.getModel().c_str());
		label_vehicle_power->Text = "" + DeutzM620.getPower() + " л.с";

		select_car_upgrade = 8;
		select_car++;
		break;

	case 9:

		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");

		label_vehicle_name->Text = "" + gcnew String(JCB3230.getModel().c_str());
		label_vehicle_power->Text = "" + JCB3230.getPower() + " л.с";

		select_car_upgrade = 9;
		select_car++;
		break;

	case 10:
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");

		label_vehicle_name->Text = "" + gcnew String(T150K.getModel().c_str());
		label_vehicle_power->Text = "" + T150K.getPower() + " л.с";

		select_car_upgrade = 10;
		select_car++;
		break;

	case 11:
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTOR" + select_car + ".png");

		label_vehicle_name->Text = "" + gcnew String(T550.getModel().c_str());;
		label_vehicle_power->Text = "" + T550.getPower() + " л.с";

		select_car_upgrade = 11;
		select_car++;
		if (select_car == 12) { select_car = 1; }
		break;

	}
}
public: System::Void button_garage_upgrade_car_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button_garage_upgrade_car->Hide();

	Vehicle T16("T16", 20, 20, 1, 1);
	Vehicle T25("T25", 27, 25, 1, 1);
	Vehicle UMZ6K("ЮМЗ-6К", 60, 35, 1, 1);
	Vehicle MTZ80("МТЗ 80", 75, 40, 1, 1);
	Vehicle CASE1455("Case IH 1455XL", 145, 65, 1, 1);
	Vehicle JohnDeere("John Deere 4755", 175, 70, 1, 1);
	Vehicle Fendt("Fendt Favorit 824", 230, 75, 1, 1);
	Vehicle DeutzM620("Deutz-Fahr Agrotron M 620", 163, 80, 1, 1);
	Vehicle JCB3230("JCB Fastrac 3230 Xtra", 195, 85, 1, 1);
	Vehicle T150K("HTZ T150K", 165, 87, 1, 1);
	Vehicle T550("T550", 175, 90, 1, 1);

	switch (select_car_upgrade)
	{
	case 1:
		select_car = 1;
		T16.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(T16.getModel().c_str());
		label_vehicle_power->Text = "" + T16.getPower() + " л.с";
		//select_car++;
		break;

	case 2:
		select_car = 2;
		T25.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(T25.getModel().c_str());
		label_vehicle_power->Text = "" + T25.getPower() + " л.с";

		//select_car++;
		break;

	case 3:

		select_car = 3;
		UMZ6K.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(UMZ6K.getModel().c_str());
		label_vehicle_power->Text = "" + UMZ6K.getPower() + " л.с";

		//select_car++;
		break;

	case 4:

		select_car = 4;
		MTZ80.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(MTZ80.getModel().c_str());
		label_vehicle_power->Text = "" + MTZ80.getPower() + " л.с";

		//select_car++;
		break;

	case 5:

		select_car = 5;
		CASE1455.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(CASE1455.getModel().c_str());
		label_vehicle_power->Text = "" + CASE1455.getPower() + " л.с";

		//select_car++;
		break;

	case 6:

		select_car = 6;
		JohnDeere.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(JohnDeere.getModel().c_str());
		label_vehicle_power->Text = "" + JohnDeere.getPower() + " л.с";
		//select_car++;
		break;

	case 7:
		select_car = 7;
		Fendt.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(Fendt.getModel().c_str());
		label_vehicle_power->Text = "" + Fendt.getPower() + " л.с";

		//select_car++;
		break;

	case 8:
		select_car = 8;
		DeutzM620.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(DeutzM620.getModel().c_str());
		label_vehicle_power->Text = "" + DeutzM620.getPower() + " л.с";

		//select_car++;
		break;

	case 9:

		select_car = 9;
		JCB3230.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(JCB3230.getModel().c_str());
		label_vehicle_power->Text = "" + JCB3230.getPower() + " л.с";
		//select_car++;
		break;

	case 10:

		select_car = 10;
		T150K.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(T150K.getModel().c_str());
		label_vehicle_power->Text = "" + T150K.getPower() + " л.с";
		//select_car++;
		break;

	case 11:

		select_car = 11;
		T550.tunePower();
		pb_garage_vehicle->Image = Bitmap::FromFile("TRACTORTUN" + select_car_upgrade + ".png");
		label_vehicle_name->Text = "" + gcnew String(T550.getModel().c_str());;
		label_vehicle_power->Text = "" + T550.getPower() + " л.с";

		//select_car++;
		if (select_car == 12) { select_car = 1; select_car_upgrade = 1; }
		break;

	default:
		break;
	}
}
private: System::Void button_select_car_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button_next_car->Hide();
	this->button_select_car->Hide();
	this->button_garage_upgrade_car->Show();
}
//
};
}