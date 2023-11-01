#include <iostream>

// Цикли.

int main()
{
    // while(утверждение)
    // {
    //     действие для повторения;

    // }

    
    
    int num = 1;
    
    while (num < 6)
    {
        std::cout << "Number: " << num << std::endl;
        num++;
    }
    

    // int valueA;
    int valueD;

    std::cout << "Enter valueA: ";
    std::cin >> valueA;
    
    do
    {
        std::cout << "Enter valueD: ";
        std::cin >> valueD;
    }
    while(valueD <= 0);


    std::cout << valueA / valueD << std::endl;
    
    
    // Завдання 1 
    // Напишіть програму, яка обчислює суму цілих чисел від а до 500 (значення a вводиться з клавіатури).

    int value;

    std::cout << "Enter value: ";
    std::cin >> value;

    int sum = 0;

    while (value < 500)
    {
        sum += value++;
    }
    

    std::cout << sum << std::endl;
    
}



// FOR 

int main()
{
    // for (ініціалізація змінної; перевірка умови; зміна змінної)
    // {
    //         дія;
    // }
    
    
    
    
     for (int x = 0; x < 10; x++)
     {
        std::cout << "Hello world" << std::endl;
     }
    
    
    
    
    //  1. Ініціалізація та створення змінної проводиться у циклі.
    
     for (int a = 10; a >= 0; a -= 3)
     {
        std::cout << a << std::endl;
     }
    
    
    
    //  2. Створення змінної проводиться до циклу, а
    //  Ініціалізація у циклі.
    
     int x;

     for (x = 0; x < 5; x++)
     {

        std::cout << x << std::endl;

     }

     std::cout << x << std::endl;
    
    
    
    //  3. Ініціалізація та створення змінної  до циклу.
    
     int x = 0;
     for (; x < 5; x++)
     {
        std::cout << x << std::endl;
     }
    
    
    //  Зміна  можна перенести всередину тіла циклу

     for (int x = 1; x <= 5; )
     {
        std::cout << x << " ";
        x++;
     }
     std::cout << std::endl;
    
    
    //  Вічний цикл
     for (int x = 1;  ; x++)
     {
        std::cout << x << " ";
        
     }
     std::cout << std::endl;
    
    
    //  break!
    //  Вирішити проблему вічного циклу
    
     for (int x = 1; ; x++)
     {
        if (x == 4)
            break;                  // якщо x став дорівнює 4 -
        std::cout << x << " ";      // зупинити цикл
     }

     std::cout << "Bye! \n";

    
    
    
     // Розглянемо приклад: показати на екран усі непарні цілі числа, в діапазоні від нуля до 25 включно.
   
    
     for (int i = 0; i < 26; i++)
     {
         if (i % 2 == 0)
         {
             continue;
         }

        
         std::cout << i << " ";
     }
     std::cout << std::endl;
    


        // Завдання 1 
        // Вивести на екран усі числа від нуля до введеного користувачем числа.

        int value;

        std::cout << "Enter number: ";
        std::cin >> value;

        for (int i = 0; i < value; i++)
        {
            std::cout << i << std::endl;
        }
}