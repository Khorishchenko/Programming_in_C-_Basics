#include <iostream>


int main()
{
    // Завдання 2 
    // Користувач вводить дві межі діапазону. Вивести на екран усі числа з цього діапазону. 
    // Передбачити, щоб користувач міг вводити межі діапазону в довільному порядку.

    // Вивести всі парні числа з діапазону.
    // Вивести всі непарні числа з діапазону.
    // Вивести всі числа, кратні семи.

    int valueA;
    int valueB;

    std::cout << "Enter valueA: ";
    std::cin >> valueA;

    std::cout << "Enter valueB: ";
    std::cin >> valueB;


    if (valueA > valueB)
    {
        int tmp = valueA;
        valueA = valueB;
        valueB = tmp;
    }

    while (valueA < valueB)
    {
        if (valueA % 2 == 0)
        {
            std::cout << "number " << valueA  << " is парне: " << std::endl;
        }
        else if (valueA % 2 != 0)
        {
             std::cout << "number " << valueA  << " is непарне: " << std::endl;
        }
        else{
            std::cout << " " << std::endl;
        }
        
        if (valueA % 7 == 0)
        {
            std::cout << "number " << valueA  << " is кратне семи: " << std::endl;
        }
       

        valueA++;
    }




    // Завдання 3 
    // Користувач вводить дві межі діапазону. Порахувати суму всіх чисел діапазону.

    int start;
    int end;

    std::cout << "enter start: ";
    std::cin >> start;

    std::cout << "Enter end: ";
    std::cin >> end;

    if (start > end)
    {
        int tmp = start;
        start = end;
        end = start;
    }

    int sum = 0;

    for (; start <= end; start++)
    {
        sum += start;
    }

    std::cout << sum << std::endl;



    // Завдання 4 
    // Користувач із клавіатури вводить числа. Порахувати їхню суму і вивести на екран, щойно користувач введе нуль.

    int value;
    int sum = 0;

    do
    {
        std::cout << "Enter numbe: ";
        std::cin >> value;

        sum += value;
    }
    while (value != 0);

    std::cout << sum << std::endl;




}