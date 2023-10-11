#include <iostream>


int main()
{
    int x = 10;

    int *ptr;

    ptr = &x;

    std::cout << ptr << std::endl;
    std::cout << &x << std::endl;

    *ptr = 15;

    std::cout << x << std::endl;


}



// Завдання №1: Робота з масивом чисел
// Створіть масив цілих чисел та визначте його розмір. Напишіть функцію, яка приймає масив 
// і його розмір в якості параметрів та виводить всі елементи масиву на консоль за допомогою вказівників.


void Print(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << ptr[i] << ' ';
    }
    std::cout << std::endl;
}



int main()
{
    int arr[]{1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Print(arr, size);
}



// Завдання №2: Обмін значень
// Напишіть функцію, яка приймає два вказівники на цілі числа і обмінює їх значеннями.
// Переконайтесь, що обмін значень працює коректно, і введені значення змінилися після виклику функції.

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int x = 20;
    int y = 30;

    std::cout << "x: " << x << " y: " << y << std::endl;
    swap(&x, &y);
    std::cout << "x: " << x << " y: " << y << std::endl;
}


int main()
{

    int arr[]{1, 2, 3, 4, 5};

    int *ptr = arr;

    std::cout << *ptr << std::endl;
    std::cout << arr[0] << std::endl;


    std::cout << *(ptr + 2) << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << ptr++ << std::endl;
    std::cout << *ptr << std::endl;

    std::cout << *(ptr + 2) << std::endl;
    std::cout << ptr[2] << std::endl;

    
    // std::cout << &arr[2] << std::endl;
}




