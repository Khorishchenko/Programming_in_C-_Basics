#include <iostream>


int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}


bool EvenOrOdd(int value)
{
    bool _bool;

    if (value % 2 == 0)
    {
        _bool = true;
    }
    else{
        _bool = false;
    }

    return _bool;
}


void Hello(std::string str)
{
    std::cout << "Привіт " << str << std::endl;
}


int Max(int a, int b)
{
    return a > b ? a : b;
}


void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    // Завдання 1: Обчислення суми двох чисел
    // Напишіть функцію, яка приймає два аргументи (числа) і повертає їхню суму


    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(4, 4) << std::endl;




    // Завдання 2: Перевірка парності числа
    // Напишіть функцію, яка приймає одне ціле число і повертає true, якщо число парне, або false, якщо число непарне. 
    // Використовуйте цю функцію для перевірки парності числа, яке введе користувач.


    std::cout << EvenOrOdd(2) << std::endl;
    std::cout << EvenOrOdd(3) << std::endl;

    int value;
    std::cout << "Enter number: ";

    std::cin >> value;


    if (EvenOrOdd(value))
    {
        std::cout << "парне " << std::endl;
    }
    else{
        std::cout << " не парне " << std::endl;
    }






    // Завдання 3: Виведення привітання
    // Напишіть функцію, яка приймає ім'я користувача як аргумент 
    // і виводить на екран повідомлення з привітанням, використовуючи це ім'я.

    char str[] = "Anton";

    Hello("Sergii");




    // Завдання 4:
    // Пошук максимального елемента.


    int result = Max(2, 3);
    std::cout << result << std::endl;

    const int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    print(arr, size);


    int max = 0;

    for (int i = 0; i < size; i++)
    {
        max = Max(max, arr[i]);
    }

    std::cout << "max element: " << max << std::endl;



    
    // Умова завдання 5: Обчислення середнього значення
    // Напишіть функцію, яка приймає три аргументи - три цілих числа - і обчислює їхнє середнє значення.
}