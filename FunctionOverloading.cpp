#include <iostream>


// ПЕРЕВАНТАЖЕННІ ФУНКЦІЇ 

int sum(int a, int b)
{
    std::cout << "Int" << std::endl;
    return a + b;
}

int sum(int a, int b, int x)
{
    std::cout << "Int" << std::endl;
    return a + b;
}

double sum(double a, double b)
{
    std::cout << "double" << std::endl;
    return a + b;
}

// АРГУМЕНТИ ПО ЗАМОВЧУВАННЮ

void print(int a = 0, int b = 0)
{
    std::cout << a << ' ' << b << std::endl;
}



void print(int a)
{
    std::cout << a << std::endl;
}


int calculateAverage(int a = 0, int b = 0, int c = 0)
{
    return (a + b + c) / 3;
}


double calculateAverage(double a = 0, double b = 0, double c = 0)
{
    return (a + b + c) / 3;
}

int main()
{
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(20.3, 30.2) << std::endl;

    print();
    print(1);
    print(2, 5);


    std::cout << calculateAverage(5, 5, 5) << std::endl;
    std::cout << calculateAverage(5, 5) << std::endl;
    std::cout << calculateAverage(5) << std::endl;

    std::cout << calculateAverage(2.2, 3.3, 4.4) << std::endl;
    std::cout << calculateAverage(2.2, 3.3) << std::endl;
    std::cout << calculateAverage(2.2) << std::endl;
}


    // Умова завдання 2: Обчислення середнього значення
    // Напишіть функцію calculateAverage, яка приймає довільну кількість аргументів чисел і обчислює їхнє середнє значення. 
    // Використайте перевантажені функції для різних типів даних (цілі числа, дійсні числа).



   
