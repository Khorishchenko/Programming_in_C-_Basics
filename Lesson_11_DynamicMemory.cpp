#include <iostream>
// 5. Оператори виділення пам'яті new та delete



int main()
{
    int *ptr = new int;
    *ptr = 10;

    std::cout << *ptr << std::endl;


    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    delete ptr;
    delete[] arr;
}











// Реалізувати функцію, яка приймає два числа від користувача, та створює динамічну змінну, яка містить їх суму. 


void sum(int x, int y)
{
    int *ptr = new int(x + y);

    // *ptr = x + y;

    std::cout << *ptr << std::endl;

    delete ptr;
}


int main()
{
    int x;
    int y;

    std::cout << "Enter nnumber one: ";
    std::cin >> x;

    std::cout << "Enter nnumber two: ";
    std::cin >> y;

    sum(x, y);

}



// Динамічне створення масиву: Напишіть програму, яка дозволяє користувачеві вводити розмір масиву, 
// а потім динамічно виділяє пам'ять для масиву цього розміру.

int main()
{
    int *arr = nullptr;
    int size = 0;

    do
    {
        std::cout << "Enter size arr: ";
        std::cin >> size;

        if (size > 0)
        {
            arr = new int[size];

            for (int i = 0; i < size; i++)
            {
                arr[i] = rand() % 10;
            }

            for (int i = 0; i < size; i++)
            {
                std::cout << arr[i] << ' ';
            }
            std::cout << std::endl;
        }
        else{
            std::cout << "size <= 0" << std::endl;
        }
    } while (size <= 0);

    if (arr != nullptr)
        delete[] arr;
}






// Написати функцію яка приймає вказівник на динамічний масив і його розмір. 
// Функція повинна видалити з масиву всі від'ємні значення, та повернути вказівник на новий динамічний масив.

int SIZE_ARR = 0;

int* DeleteMinusElements(int *arr = nullptr, int size = 0)
{
    if (arr == nullptr)
        return nullptr;

    int sizeMAX = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
            sizeMAX++;
    }

    int *arrMAX = nullptr;

    if (sizeMAX > 0)
    {
        arrMAX = new int[sizeMAX];

        for (int i = 0, j = 0; i < size; i++)
        {
            if (arr[i] >= 0)
            {
                arrMAX[j] = arr[i];
                j++;
            }
        }
        SIZE_ARR = sizeMAX;
    }

    delete[] arr;
    return arrMAX;
}



int main()
{
    int *arr = nullptr;
    int size;

    std::cout << "Enter size arr: ";
    std::cin >> size;

    if (size > 0)
    {
        arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 10 - 3;
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;

        arr = DeleteMinusElements(arr, size);

        for (int i = 0; i < SIZE_ARR; i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
    }
    else{
        std::cout << "size <= 0" << std::endl;
    }


    if (arr != nullptr)
        delete[] arr;
}

















// Виділення пам'яті для одного цілого числа
int main() {
    int* ptr = nullptr;

    // Виділення пам'яті для одного цілого числа
    ptr = new int;

    // Запис значення до виділеного місця пам'яті
    *ptr = 42;

    // Виведення значення
    std::cout << "Значення: " << *ptr << std::endl;

    // Звільнення виділеної пам'яті
    delete ptr;

    return 0;
}




// Виділення і звільнення пам'яті для цілочисельного масиву
int main() {
    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;

    // Виділення пам'яті для масиву з n цілих чисел
    int* arr = new int[n];

    // Читання значень елементів масиву з клавіатури
    for (int i = 0; i < n; i++) {
        std::cout << "Введіть елемент " << i << ": ";
        std::cin >> arr[i];
    }

    // Виведення значень елементів масиву
    std::cout << "Введені елементи масиву: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Звільнення виділеної пам'яті
    delete[] arr;

    return 0;
}


// Виділення і звільнення пам'яті для рядка (рядкового масиву)
int main() {
    char* str = nullptr;
    int length;

    std::cout << "Введіть довжину рядка: ";
    std::cin >> length;

    // Виділення пам'яті для рядка довжиною length + 1 (для завершувального символу '\0')
    str = new char[length + 1];

    // Введення рядка з клавіатури
    std::cout << "Введіть рядок: ";
    std::cin.ignore(); // Ігноруємо символ нового рядка після введення числа
    std::cin.getline(str, length + 1);

    // Виведення рядка
    std::cout << "Введений рядок: " << str << std::endl;

    // Звільнення виділеної пам'яті
    delete[] str;

    return 0;
}