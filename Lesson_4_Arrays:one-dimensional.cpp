#include <iostream>


int main()
{


    // тип_даних ім'я_масиву[кількість_елементів];

    // // запис значення
    // имя_масива[0] = значення;
    // имя_масива[1] = значення;
    // имя_масива[2] = значення;



     int train[3]; // Варіант перший
    
     const int SIZE = 3; // Варіант другий!
     double br[SIZE];
    
    
     // Звернення до елементів масиву
    
     train[0] = 10;
     train[1] = 5;
     train[2] = 23;
    

     std::cout << train[0] << std::endl;
     std::cout << train[1] << std::endl;
     std::cout << train[2] << std::endl;
    

     
    
    


     // Варіанти ініціалізації масиву
       
    const int size = 100;
    int train_2[size] = {1, 30, 2};

    int train_3[] = {1, 30, 2}; // У цьому рядку масив автоматично отримає розмір
    
    char arr[]{'a', 'b', 'c', 'v', 'e', 'g', 'a', 'b', 'c', 'v', 'e' , 'g'};
    std::cout << arr[0] << ' ' << arr[4] << ' ' << arr[11] << std::endl;
    
    
    //  int ar[5] = {1, 2, 3} == int ar[5] = {1, 2, 3, 0, 0};
    
    //  int array[2] = {1, 2, 3}; // Помилка на етапі компіляції




     const int SIZE = 10;
     int arr[SIZE];

     arr[0] = 1;
     arr[1] = 2;
     arr[2] = 3;
     arr[3] = 4;
     arr[4] = 5;
     arr[5] = 6;
     arr[6] = 7;

    //  std::cout << arr[0] << arr[1] << arr[2] ...

     for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
     }

     for (int i = 0; i < SIZE; i ++)
     {
        arr[i] = rand() % 10;
     }

     std::cout << "Our arr" << std::endl;

     for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << ' ';
     std::cout << std::endl;





     // sizeof()

     int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     std::cout << "Size using sizeof(): " << sizeof(arr) / sizeof(arr[0]) << std::endl;

     char arrChar[]{'1', '2', '3'};
     std::cout << "Size using sizeof(): " << sizeof(arrChar) << std::endl;



     // size()
     int array[] = {5, 2, 9, 1, 5, 6};


     // Використання std::size() з C++11 і новіших
     int size_using_std_size = std::size(array);

     std::cout << "Size using std::size(): " << size_using_std_size << std::endl;












     // sort
     int array[] = {5, 2, 9, 1, 5, 6};
     int size = sizeof(array)/sizeof(array[0]);

     std::cout << "Original array:" << std::endl;
     for (int i = 0; i < size; i++)
     {
         std::cout << array[i] << ' ';
     }
     std::cout << std::endl;
    

     std::sort(array, array + size);

     std::cout << "Sorted array:" << std::endl;
     for (int i = 0; i < size; i++)
     {
         std::cout << array[i] << ' ';
     }
     std::cout << std::endl;



     // Використання функції сортування зі зміненим порядком через лямбда-вираз
     std::sort(array, array + size, [](int a, int b) {
         return a > b;
     });

     std::cout << "Sorted array:" << std::endl;
     for (int i = 0; i < size; i++)
     {
         std::cout << array[i] << ' ';
     }
     std::cout << std::endl;





     // Пошук мінімального та максимального значення

     int max = array[0];
     int min = array[0];

     for (int i = 0; i < size; i++)
     {
         if (array[i] > max)
             max = array[i];
         if (array[i] < min)
             min = array[i];
     }

     std::cout << "Max element is: " << max << std::endl;
     std::cout << "Min element is: " << min << std::endl;






     // Для пошуку мінімального та максимального значення в масиві можна використовувати функції std::min_element та std::max_element з бібліотеки <algorithm>

     int array[] = {5, 2, 9, 1, 5, 6};
     int size = sizeof(array)/sizeof(array[0]);

     // Знаходження мінімального та максимального значення за допомогою min_element та max_element
     int* min_element_ptr = std::min_element(array, array + size);
     int* max_element_ptr = std::max_element(array, array + size);

     std::cout << "Original array: ";
     for (int i = 0; i < size; i++) {
         std::cout << array[i] << " ";
     }
     std::cout << std::endl;

     std::cout << "Minimum element: " << *min_element_ptr << std::endl;
     std::cout << "Maximum element: " << *max_element_ptr << std::endl;



    // Завдання 1
    // В одновимірному масиві, заповненому випадковими числами, знайти елемент .

    int array[10];

    int size = std::size(array);

    std::cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << "Enter key: ";
    int key;
    std::cin >> key;

    bool found = true;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            std::cout << "key: " << "arr[" << i << ']' << std::endl;
            found = false;
        }
    }

    if (found)
    {
        std::cout << "key not found" << std::endl;
    }
}