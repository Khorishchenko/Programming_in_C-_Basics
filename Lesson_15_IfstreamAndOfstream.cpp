#include <iostream>
#include <string>
#include <fstream> // Підключаємо бібліотеку


int main()
{
	std::ifstream file;                                     		// створюємо об'єкт класу ifstream
	file.open("/Users/admin/Desktop/fileo/fil.txt");             	// відкриваємо файл

	// Відкриття файлу в конструкторі виглядає так
	std::ifstream file("/Users/admin/Desktop/file.txt"); 				// відкриваємо файл у конструкторі



// ==================================================================//



	// варіант перевірки з використанням методу is_open() :

	if (file.is_open())                                     		// виклик методу is_open()
	    std::cout << "Всі ОК! Файл відкритий!\n" << std::endl;
	else {
	    std::cout << "Файл не відкритий!\n" << std::endl;
	    return -1;
	}


// ================================================ ==================//

	// Оператор зчитування >>

    int valueI;
	double valueD;
	std::string str;

	file >> valueD >> valueI >> str;

	std::cout << valueD << ' ' << valueI << ' ' << str << std::endl;




// ================================================ ==================//


	Лічити слова з файлу

	for(file >> str; !file.eof(); file >> str)
	    std::cout << str << std::endl;

	std::cout << str << std::endl;



// ================================================ ==================//

	Методи getline() та get()



	Рахунка рядка з тексту
	std::string str;

	std::getline(file, str);
	std::cout << str << std::endl;

	while(std::getline(file, str))
		std::cout << str << std::endl;


	int size = 11;
	////Створюємо буфер для читання
	char *buffer = new char[size + 1];
	buffer[size] = '\0';

	////Читаємо n символів
	file.get(buffer, size);

	////виводимо лічене
	std::cout << buffer << std::endl;

	////Звільняємо буфер
	delete[] buffer;

	char value;

	while(file.get(value))
		std::cout << value << std::endl;


// ================================================ ==================//
	// Метод seekg()


	file.seekg(0,std::ios_base::end); 			//Стати в кінець файлу
	file.seekg(10,std::ios_base::end); 			//Стати на 10 байтів з кінця
	file.seekg(30,std::ios_base::beg); 			//Стати на 31-й байт
	file.seekg(3,std::ios_base::cur); 			//перестрибнути через 3 байти
	file.seekg(3); 								//перестрибнути через 3 байти - аналогічно



// ================================================ ==================//
	// Метод tellg()
	std::cout << "Перший байт: " << file.tellg() << std::endl;

	// //стаємо наприкінці файлу
	file.seekg(0, std::ios_base::end);

	// //Отримуємо поточну позицію
	std::cout << "Розмір файлу (в байтах): " << file.tellg() << std::endl;




// ===================================================================//
OFSTREAM

    // Створюємо файл
	std::ofstream fileo("/Users/admin/Desktop/fileo/file3.txt");
    fileo.open()
	 
	Відкриваємо для дописування
	std::ofstream fileo("", std::ios_base::app);


	if(fileo.is_open()) 
        std::cout << "Файл створено" << std::endl;
	else {
		std::cout << "Файл не створено" << std::endl;
	 	return -1;
	}


// ===================================================================//

	Оператор <<	

	std::string str = "Привіт світ";
	double d = 123.456;

	fileo << str << std::endl << d << std::endl;

    fileo.close();
}






// Практичні завдання !

// Читання з файлу: Створіть програму, яка читає дані з існуючого текстового файлу та виводить їх на екран.

int main()
{
	std::ifstream file;
	file.open("/Users/admin/Desktop/fileo/file.txt");


	if(file.is_open())
	{
		std::cout << "Ok" << std::endl;
	}
	else
	{
		std::cout << "Not ok" << std::endl;
		return -1;
	}

	std::string str;

	while(std::getline(file, str))
		std::cout << str << std::endl;
}



// Дан текстовий файл порахувати кількість символів в ньому.

int main()
{
	std::ifstream file;
	file.open("/Users/admin/Desktop/fileo/file.txt");


	if(file.is_open())
	{
		std::cout << "Ok" << std::endl;
	}
	else
	{
		std::cout << "Not ok" << std::endl;
		return -1;
	}

	// int count = 0;
	// char value;

	// while(file.get(value))
	// 	count++;

	// std::cout << count << std::endl;

	file.seekg(0, std::ios_base::end);
	std::cout << "Кількість символів: " << file.tellg() << std::endl;
}











// Додавання до файлу: Розширте попередню програму так, 
// щоб користувач міг додавати нові дані до файлу, не перезаписуючи існуючі дані.


int main()
{
	std::ofstream file("/Users/admin/Desktop/fileo/file3.txt");

	if(file.is_open()) 
        std::cout << "Файл створено" << std::endl;
	else {
		std::cout << "Файл не створено" << std::endl;
	 	return -1;
	}

	std::string str = "Hello World";

	file << str << std::endl;

	file.close();

	std::ofstream file;
	file.open("/Users/admin/Desktop/fileo/file3.txt", std::ios_base::app);

	if(file.is_open()) 
        std::cout << "Файл створено" << std::endl;
	else {
		std::cout << "Файл не створено" << std::endl;
	 	return -1;
	}

	file << 1234 << std::endl;
	file.close();

}




int main()
{
	std::ifstream file;                                     		
	file.open("/Users/admin/Desktop/fileo/fil.txt");     

	if (file.is_open())                                     		
	    std::cout << "Всі ОК! Файл відкритий!\n" << std::endl;
	else {
	    std::cout << "Файл не відкритий!  file  \n" << std::endl;
	    return -1;
	}


	std::ofstream file2("/Users/admin/Desktop/fileo/file2.txt");

	if (file2.is_open())                                     		
	    std::cout << "Всі ОК! Файл відкритий!\n" << std::endl;
	else {
	    std::cout << "Файл не відкритий!  file2 \n" << std::endl;
	    return -1;
	}

	char value;
	while (file.get(value))
	{
		if (value == '0')
		{
			file2 << 1;
		}
		else{
			file2 << value;
		}
	}

	file2.close();

}



// Даний текстовий файл, підрахувати скільки раз в ньому зустрічається задане слово користувачем.