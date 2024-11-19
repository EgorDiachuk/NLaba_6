#pragma once
#include <ctime>

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-3, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(525, 481);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(517, 455);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(222, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Результат";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(232, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Масив";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(276, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 61);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(104, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(296, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(104, 134);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(296, 147);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->listBox3);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(517, 455);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(216, 305);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 56);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Обчислити";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(368, 305);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 56);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(62, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 56);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Створити матрицю";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(191, 117);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(261, 134);
			this->listBox3->TabIndex = 1;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(62, 117);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(91, 134);
			this->listBox2->TabIndex = 0;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 479);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();

	String^ input = textBox1->Text;

	array<String^>^ elements = input->Split(' ');

	int* dynamicArray = new int[elements->Length];
	int count = 0;

	try {
		// Заповнюємо динамічний масив
		for (int i = 0; i < elements->Length; i++) {
			int number = Int32::Parse(elements[i]);
			dynamicArray[count++] = number;
			listBox1->Items->Add(number);
		}
	}
	catch (FormatException^) {
		delete[] dynamicArray; // Звільнення пам'яті
		MessageBox::Show("Будь ласка, введіть коректний числовий масив, розділений пробілами.", "Помилка вводу");
		return;
	}

	// Ініціалізація мінімального та максимального значень
	int minValue = dynamicArray[0];
	int maxValue = dynamicArray[0];

	// Знаходимо мінімальний та максимальний елементи
	for (int i = 1; i < count; i++) {
		if (dynamicArray[i] < minValue) minValue = dynamicArray[i];
		if (dynamicArray[i] > maxValue) maxValue = dynamicArray[i];
	}

	// Обчислюємо різницю
	int difference = maxValue - minValue;

	// Виводимо результат у мітку
	label2->Text = "Різниця: " + difference.ToString();

	// Звільнення пам'яті
	delete[] dynamicArray;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	listBox1->Items->Clear();
	label2->Text = "Результат";
}

private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

#include <ctime>

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rand = gcnew Random();

	listBox2->Items->Clear();

	array<array<int>^>^ matrix = gcnew array<array<int>^>(5);
	for (int i = 0; i < 5; i++) {
		matrix[i] = gcnew array<int>(5);
		String^ row = "";
		for (int j = 0; j < 5; j++) {
			matrix[i][j] = rand->Next(-10, 11); // Генеруємо числа від -10 до 10
			row += matrix[i][j].ToString() + " ";
		}
		listBox2->Items->Add(row);
	}

	this->matrixData = matrix;
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->matrixData == nullptr) {
		MessageBox::Show("Спершу створіть матрицю, натиснувши кнопку 'Створити матрицю'.", "Помилка");
		return;
	}

	int negativeSum = 0; // Сума від’ємних елементів

	// Проходимо по всій матриці
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (this->matrixData[i][j] < 0) {
				negativeSum += this->matrixData[i][j];
			}
		}
	}

	listBox3->Items->Clear();
	listBox3->Items->Add("Сума всіх від’ємних елементів: " + negativeSum.ToString());
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
	listBox3->Items->Clear();
}

private: array<array<int>^>^ matrixData;


};
}