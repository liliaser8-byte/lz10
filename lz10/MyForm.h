#pragma once

namespace lz10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ записатиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	protected:














	protected:

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->записатиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(542, 30);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(372, 294);
			this->richTextBox1->TabIndex = 34;
			this->richTextBox1->Text = L"";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(247, 258);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(234, 22);
			this->textBox4->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(234, 29);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Введіть рік пошуку:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(177, 203);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 22);
			this->textBox3->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 159);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 22);
			this->textBox2->TabIndex = 30;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 104);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 22);
			this->textBox1->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 29);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Рік видання :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(7, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 29);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Назва книги:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 29);
			this->label2->TabIndex = 26;
			this->label2->Text = L"ПІП :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(62, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 31);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Введіть данні : ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->записатиДаніToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1033, 28);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// записатиДаніToolStripMenuItem
			// 
			this->записатиДаніToolStripMenuItem->Name = L"записатиДаніToolStripMenuItem";
			this->записатиДаніToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->записатиДаніToolStripMenuItem->Text = L"Записати дані ";
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(128, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму ";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(580, 342);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(305, 79);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Результат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(47, 344);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(407, 77);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Ввести данні";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 482);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Оголошення структури
		value struct Book
		{
			String^ author;
			String^ title;
			int year;
		};

		// Створення масиву для зберігання книг та лічильника
		array<Book>^ books = gcnew array<Book>(100);
		int bookCount = 0;
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Лабораторна робота № 10\nПрограма записує дані про книги та шукає ті, що видані раніше вказаного року.",
			"Про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Розробник програми: Серветнік Лілія\nСтудентка 3 курсу\nФакультет Математики фізики та комп'ютерних наук",
		"Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Перевірка, чи не переповнений масив
	if (bookCount >= books->Length) {
		MessageBox::Show("Масив заповнений!", "Увага");
		return;
	}

	try {
		// Зчитуємо дані з текстових полів
		String^ authorName = textBox1->Text;
		String^ bookTitle = textBox2->Text;
		int pubYear = Convert::ToInt32(textBox3->Text);

		// Записуємо у масив
		books[bookCount].author = authorName;
		books[bookCount].title = bookTitle;
		books[bookCount].year = pubYear;

		// Виводимо в перше велике поле (припустимо, це richTextBox1)
		String^ record = (bookCount + 1).ToString() + ". Автор: " + authorName +
			", Книга: \"" + bookTitle + "\", Рік: " + pubYear.ToString() + "\n";
		richTextBox1->AppendText(record);

		bookCount++; // Збільшуємо лічильник

		// Очищаємо поля
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
	}
	catch (FormatException^) {
		MessageBox::Show("Помилка! Введіть коректний рік видання (число).", "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Перевіряємо, чи є взагалі додані книги в масиві
	if (bookCount == 0) {
		MessageBox::Show("Список книг порожній. Спочатку введіть дані.", "Увага");
		return;
	}

	try {
		// Зчитуємо рік для пошуку
		int searchYear = Convert::ToInt32(textBox4->Text);

		// Готуємо початковий текст для результату
		String^ resultMessage = "Книги, видані раніше " + searchYear.ToString() + " року:\n\n";
		bool isFound = false;

		// Шукаємо в масиві
		for (int i = 0; i < bookCount; i++) {
			// УМОВА ЗАВДАННЯ 13: рік видання МЕНШИЙ за рік пошуку
			if (books[i].year < searchYear) {
				resultMessage += "- " + books[i].author + ", \"" + books[i].title + "\" (" + books[i].year.ToString() + ")\n";
				isFound = true;
			}
		}

		// Якщо підходящих книг немає
		if (!isFound) {
			resultMessage = "Книг, виданих раніше " + searchYear.ToString() + " року, не знайдено.";
		}

		MessageBox::Show(resultMessage, "Результат пошуку", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (FormatException^) {
		MessageBox::Show("Помилка! Введіть коректний рік пошуку (число).", "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
