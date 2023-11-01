#include <iostream>

// STRUCT

struct Human
{
	int age;
	std::string name;
};

int main()
{
	Human Student {23, "sergey"};

	std::cout << Student.age << ' ' << Student.name << std::endl;

	Student.age = 100;

	std::cout << Student.age << std::endl;

	return 0;
}


// ================================================================//
// Оголошення Обєктів 


// struct Human
// {
// 	int age;
// 	const char *name;
// }Student;

// int main()
// {
// 	Student = {23, "sergey"};
// 	std::cout << Student.age << ' ' << Student.name << std::endl;

// 	return 0;
// }


// ================================================================//
// Без дескриптора 

struct 					
{
	int age;
	const char *name;
}Student, Student2;

int main()
{
	Student = {23, "sergey"};
	std::cout << Student.age << ' ' << Student.name << std::endl;

	Student2 = Student;										// Присвоєння 

	std::cout << Student2.age << ' ' << Student2.name << std::endl;

	return 0;
}



// ================================================================//
// створюємо ще одну структуру, щоб вкласти її у структуру building

// Оголошення структури "Адреса"
struct Address {
    std::string street;
    std::string city;
    std::string postalCode;
};

// Оголошення структури "Контактна інформація"
struct ContactInfo {
    std::string name;
    std::string phoneNumber;
    Address address;        // Включення структури "Адреса" в "Контактну інформацію"
};

int main() {
    // Створення об'єкта типу "Контактна інформація"
    ContactInfo person;

    // Заповнення даних про контакт
    person.name = "Іван Петрович";
    person.phoneNumber = "+1234567890";
    person.address.street = "Вулиця Лісова, 5";
    person.address.city = "Київ";
    person.address.postalCode = "12345";

    // Виведення інформації про контакт на консоль
    std::cout << "Ім'я: " << person.name << std::endl;
    std::cout << "Номер телефону: " << person.phoneNumber << std::endl;
    std::cout << "Адреса: " << person.address.street << ", " << person.address.city << ", " << person.address.postalCode << std::endl;


    ContactInfo ArrPerson[2];

    for (int i = 0; i < 2; i++)
    {
        std::cin >> ArrPerson[i].name;
        std::cin >> ArrPerson[i].phoneNumber;
        std::cin >> ArrPerson[i].address.city;
        std::cin >> ArrPerson[i].address.street;
        std::cin >> ArrPerson[i].address.postalCode;
    }

    std::cout << "\n\n";
    for (int i = 0; i < 2; i++)
    {
        std::cout << ArrPerson[i].name << std::endl;
        std::cout << ArrPerson[i].phoneNumber  << std::endl;
        std::cout << ArrPerson[i].address.city  << std::endl;
        std::cout << ArrPerson[i].address.street  << std::endl;
        std::cout << ArrPerson[i].address.postalCode  << std::endl;
    }
    
    


    return 0;
}


// Завдання №1: Керування рахунком користувача
// Створіть структуру, яка представляє рахунок користувача (ім'я користувача, номер рахунку, баланс). 
// Напишіть функції для зняття грошей з рахунку, поповнення рахунку та виведення інформації про рахунок.


struct BankAkaunt
{
    int balans;
    int nomer;
    std::string name;

    void PrintBalans() const{
        std::cout << "Balans is " << balans << std::endl;
    }

    void AddBalans(int add)
    {
        if (add > 0)
        {
            balans += add;
        }
        else{
            std::cout << "add < 0" << std::endl;
        }
    }

    void GetBalans(int get) 
    {
        if (get > 0)
        {
            balans -= get;
        }
    }
};

int main()
{
    BankAkaunt person;

    person.balans = 1000;
    person.nomer = 29299292;
    person.name = "Anton";

    person.PrintBalans();

    person.AddBalans(200);
    person.PrintBalans();

    person.GetBalans(100);
    person.PrintBalans();

}





// Завдання №2: Робота з автомобілем
// Створіть структуру, що представляє інформацію про автомобіль (марка, модель, рік випуску). 
// Створіть масив структур для зберігання даних про декілька автомобілів.
// Додайте функції для виведення інформації про автомобілі та пошуку автомобіля за певними параметрами.