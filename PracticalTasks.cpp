#include <iostream>

// Логічні оператори та оператори розгалужень
int main()
{
    // Завдання 1 
    // Користувач вводить число. Визначити, чи є воно парним.

    int value;

    std::cout << "Enter number: ";
    std::cin >> value;

    if (value % 2 == 0)
    {
        std::cout << "парне" << std::endl;
    }
    else{
        std::cout << "не парне" << std::endl;
    }

    // Завдання 2 
    // Користувач вводить два числа. Вивести на екран менше з цих чисел.

    int valueA;
    int valueB;

    std::cout << "Enter valueA: ";
    std::cin >> valueA;

    std::cout << "Enter valueB: ";
    std::cin >> valueB;


    if (valueA > valueB)
    {
        std::cout << "valueB < valueA " << valueB << std::endl;
    }
    else if (valueA < valueB)
    {
        std::cout << "valueA < valueB " << valueA << std::endl;
    }
    else{
        std::cout << "valueA == valueB" << std::endl;
    }



    // Завдання 3 
    // Користувач вводить число. Визначити додатне це число, від'ємне чи дорівнює нулю


    int value;

    std::cout << "Enter number: ";
    std::cin >> value;

    if (value > 0)
    {
        std::cout << "value > 0" << std::endl;
    }
    else if (value == 0)
    {
        std::cout << "value == 0" << std::endl;
    }
    else 
    {
        std::cout << "value < 0" << std::endl;
    }



    // Завдання 4 
    // Користувач вводить два числа. Визначити, чи рівні ці числа, і якщо ні, вивести їх на екран у порядку зростання.


    int valueA;
    int valueB;

    std::cout << "Enter valueA: ";
    std::cin >> valueA;

    std::cout << "Enter valueB: ";
    std::cin >> valueB;

    if (valueA > valueB)
    {
        std::cout << valueB << ' ' << valueA << std::endl;
    }
    else if (valueA < valueB)
    {
        std::cout << valueA << ' ' << valueB << std::endl;
    }
    else
    {
        std::cout << "valueA == valueB" << std::endl;
    }




    //     Частина 2

    // Завдання 1 
    // Користувач із клавіатури вводить 5 оцінок студента. Визначити, чи допущено студента до іспиту. Студент отримує допуск, якщо його середній бал 4 бали і вище.

    int valueA;
    int valueB;
    int valueC;
    int valueD;
    int valueE;

    std::cin >> valueA >> valueB >> valueC >> valueD >> valueE;

    int sum = valueA + valueB + valueC + valueD + valueE;
    int av = sum / 5;

    if (av >= 4)
    {
        std::cout << "допущено" << std::endl;
    }
    else
    {
         std::cout << "не допущено" << std::endl;
    }



    // Завдання 2 
    // Користувач вводить із клавіатури число. Якщо воно парне, помножити його на три, інакше — поділити на два. Результат вивести на екран.


    // DZ
    // Завдання 3 
    // Написати програму-калькулятор. Користувач вводить два числа і вибирає арифметичну дію. Вивести на екран результат.
}