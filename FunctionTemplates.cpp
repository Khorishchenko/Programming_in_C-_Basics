#include <iostream>




template <typename T>
T Max(T a, T b)
{
    return (a > b) ? a : b;
}


// Функція для обміну значень між двома змінними:
template <typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

// Функція для знаходження середнього значення масиву:
template <typename T>
T av(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}


// Функція яка виводить будь які типи даних, у вільному порядку
template <typename T, typename T1>
void print(T valueT, T1 valueT1)
{
    std::cout << valueT << ' ' << valueT1 << std::endl;
}

template <typename T>
void MaxAndMinElement(T arr[], int size);

template <typename T>
void Sort(T arr[], int size);

template <typename T>
void PrintArray(T arr[], int size);


int main()
{
    std::cout << Max(10, 20) << std::endl;
    std::cout << Max(22.2, 33.3) << std::endl;


    double a = 10.5, b = 5.5;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;


    int arr[]{1, 2, 3, 4, 5};
    std::cout << "серед: " << av(arr, sizeof(arr)/sizeof(arr[0])) << std::endl;

    double arrD[]{2.3, 3.4, 4.5, 5.6};
    std::cout << "серед: " << av(arrD, sizeof(arrD)/sizeof(arrD[0])) << std::endl;

    print(20, 30);
    print(10, 22.3);
    print(22.4, 15);
    print('A', 200);
    print("Hello", 'B');
    print(100, "World");


    int arr[]{10, 7, 6, 2, 3, 4, 5, 6, 7};
    // MaxAndMinElement(arr, sizeof(arr)/sizeof(arr[0]));
    Sort(arr, sizeof(arr)/sizeof(arr[0]));
    PrintArray(arr, sizeof(arr)/sizeof(arr[0]));

    double arrD[]{6.7, 9.0, 4.4, 1.1, 2.2, 3.3};
    // MaxAndMinElement(arrD, sizeof(arrD)/ sizeof(arrD[0]));
    Sort(arrD, sizeof(arrD)/sizeof(arrD[0]));
    PrintArray(arrD, sizeof(arrD)/sizeof(arrD[0]));



}


// Умова завдання 1: Максимум і мінімум

// Напишіть шаблонну функцію, яка приймає масив елементів будь-якого типу і знаходить максимальний та 
// мінімальний елемент у масиві. Програма повинна бути здатною працювати з різними типами даних 
// (цілі числа, дійсні числа, рядки тощо).

template <typename T>
void MaxAndMinElement(T arr[], int size)
{
    T min = arr[0];
    T max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    std::cout << "Max element: " << max << std::endl;
    std::cout << "MIn element: " << min << std::endl; 
}


// Умова завдання 2: Сортування масиву

// Напишіть шаблонну функцію для сортування масиву елементів будь-якого типу за зростанням або спаданням.
//  Використайте алгоритм сортування, 
// такий як QuickSort або BubbleSort, та забезпечте можливість сортування різних типів даних.

template <typename T>
void Sort(T arr[], int size)
{
    std::sort(arr, arr + size);
}

template <typename T>
void PrintArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}







