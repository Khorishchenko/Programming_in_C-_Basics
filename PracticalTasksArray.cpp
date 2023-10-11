#include <iostream>
#include <algorithm>

int main()
{
    // Завдання 1 
    // Написати програму, яка виводить одновимірний масив у зворотному порядку.

    int array[10];

    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;


    std::cout << "Array revers" << std::endl;

    for (int i = size - 1; i >= 0; i--)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;











    // Завдання 2
    // Написати програму, яка копіює послідовно елементи одного масиву розміром 10 елементів у 2 масиви розміром 5 елементів кожен.


    int array[10];
    int array2[5];
    int array3[5];

    int size = std::size(array);

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    for (int i = 0, ind2 = 0, ind3 = 0; i < size; i++)
    {
        if (i < 5)
        {
            array2[ind2] = array[i];
            ind2++;
        }

        if (i >= 5)
        {
            array3[ind3] = array[i];
            ind3++;
        }
    }


    std::cout << "Enter array2: ";
    for (int i = 0; i < std::size(array2); i++)
    {
        std::cout << array2[i] << ' ';
    }
    std::cout << std::endl;


    std::cout << "Enter array3: ";
    for (int i = 0; i < std::size(array3); i++)
    {
        std::cout << array3[i] << ' ';
    }
    std::cout << std::endl;






    // Завдання 3
    // Напишіть програму, яка виконує поелементну суму двох масивів і результат заносить у третій масив.

    int array[]{1, 2, 3, 4, 5, 6, 7};
    int array2[]{1, 2, 3, 4, 5, 6, 7};

    int arraySum[std::size(array)];

    for (int i = 0; i < std::size(array); i++)
    {
        arraySum[i] = array[i] + array2[i];
        std::cout << arraySum[i] << ' ';
    }
    std::cout << std::endl;
    








    // DZ
    // Завдання 5 
    // Написати програму, що копіює елементи 2-х масивів розміром 5 елементів кожен в один масив розміром 10 елементів таким чином: 
    // спочатку копіюються послідовно всі елементи, більші за 0, потім послідовно всі елементи, що дорівнюють 0, 
    // а потім послідовно всі елементи менші за 0.
}