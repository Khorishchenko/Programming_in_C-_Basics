#include <iostream>






int main()
{
    // Змінні через посилання:
    int x = 0;
    int &refX = x;

    std::cout << x << std::endl;

    refX = 100;
    
    std::cout << x << std::endl;

}



// Параметри функцій через посилання:
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}



int main()
{
    int x = 10, y = 20;

    std::cout << "x: " << x << " ,y: " << y << std::endl;

    swap(x, y);

    std::cout << "x: " << x << " ,y: " << y << std::endl;


}


// Важливо враховувати, що функція повертає посилання на існуючу змінну, 
// тобто ця змінна повинна існувати поза межами функції. При використанні повернення посилань слід бути обережними,
// щоб уникнути помилок вказівників та збитків пам'яті.

int result = 10;

int& fun(int a = 0)
{
    result = a;
    return result;
}

int main()
{
    int value = 25;

    std::cout << "value: " << value << std::endl;
    std::cout << "result: " << result << std::endl;

    std::cout << "fun: " << fun(value) << std::endl;
    std::cout << "result: " << result << std::endl;

    fun() = 155;
    std::cout << "result: " << result << std::endl;
}






// Завдання №6: Обчислення середнього арифметичного
// Напишіть функцію, яка приймає масив дійсних чисел та повертає середнє 
// арифметичне значень у цьому масиві за допомогою посилань.

void av(int arr[], int size, int &a)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    a = sum / size;
}

int main()
{
    int const size = 5;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    int a = 0;
    av(arr, size, a);

    std::cout << "av in arr: " << a << std::endl;
}


// Завдання №4: Виведення елементів масиву
// Напишіть функцію, яка приймає масив цілих чисел та виводить всі його елементи на екран. 
// Використайте посилання для передачі масиву у функцію.


