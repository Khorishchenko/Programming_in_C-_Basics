#include <iostream>


int main()
{
    int x;
    double y;
    char value;
    bool TrueOrFalse;

    x = 10;
    y = 22.2;
    value = 'A';
    TrueOrFalse = false;

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
    std::cout << "Value: " << value << std::endl;
    std::cout << "TrueOrFalse " << TrueOrFalse << std::endl;

    // + - / * %        
    // ++(інкремент) --(декримент)  мають префіксну ( ++valueA , --valueA ) і постфіксну ( valueA++ , valueA-- ) форми

    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << x / y << std::endl;
    std::cout << x * y << std::endl;


    std::cout << x++ << std::endl;
    std::cout << x << std::endl;


// завдання 1:
// Користувач вводить два числа порахувати їх суму та середнє арифметичне
    int x;
    int y;

    std::cin >> x;
    std::cin >> y;

    int sum = x + y;
    int av = sum / 2;

    std::cout << "Sum x and y = " << sum << " Av x and y = " << av << std::endl;


// Завдання 2:
// Напишіть програму, яка дозволяє користувачу вводити два числа, 
// а потім обмінює їх значеннями з використання додаткової змінної.

    int y;
    int x;

    std::cin >> y;
    std::cin >> x;

    std::cout << "Y = " << y << " X = " << x << std::endl;

    int value = y;
    y = x;
    x = value;

    std::cout << "Y = " << y << " X = " << x << std::endl;


}