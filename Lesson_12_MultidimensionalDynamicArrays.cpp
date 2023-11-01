#include <iostream>
// Багатовимірні динамічні масиви



int main()
{
    int **ptr = nullptr;

    ptr = new int*[5];

    for (int i = 0; i < 5; i++)
        ptr[i] = new int[5];

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ptr[i][j] = rand() % 10;
            std::cout << ptr[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    if (ptr != nullptr)
    {
        for (int i = 0; i < 5; i++)
            delete [] ptr[i];
        
        delete [] ptr;
    }
}







// Завдання №1: Матриця чисел
// Створіть програму, яка дозволяє користувачу ввести розмірність матриці (кількість рядків і стовпців). 
// Потім виділіть динамічну пам'ять для матриці цілих чисел та заповніть її випадковими значеннями. Виведіть матрицю на екран.

int** Masiv(int rows, int cols)
{
    int **ptr = nullptr;

    if (rows > 0 && cols > 0)
    {
        ptr = new int*[rows];

        for (int i = 0; i < rows; i++)
        {
            ptr[i] = new int[cols];
            for (int j = 0; j < cols; j++)
            {
                ptr[i][j] = rand() % 10;
            }
        }
    }
    else 
    {
        std::cout << "rows and cols < = 0" << std::endl;
    }
    return ptr;
}


int main()
{
    int rows, cols;

    std::cout << "Enter rows: ";
    std::cin >> rows;

    std::cout << "Enter cols: ";
    std::cin >> cols;

    int **arr = Masiv(rows, cols);

    if (arr != nullptr)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                std::cout << arr[i][j] << ' ';
            std::cout << std::endl; 
        }

        for (int i = 0; i < rows; i++)
            delete[] arr[i];

        delete[] arr;
    }
    else{
        std::cout << " arr is empty !" << std::endl;
    }
}


// Завдання №2: Обробка матриці
// Створіть функцію, яка приймає двовимірний динамічний масив і розмірність матриці. 
// Функція має обчислити суму елементів у кожному рядку матриці і вивести результати на консоль.







// int main(void)
// {
    // // оголошення двовимірного динамічного масиву на 10 елементів:

    // int size_row = 0, size_colum = 0;
    // cin >> size_row;
    // cin >> size_colum;

    // float **ptrarray = new float* [size_row]; // два рядки в масиві

    // for (int count = 0; count < size_row; count++)
    //      ptrarray[count] = new float [size_colum]; // і п'ять стовпців

    // // де ptrarray – масив покажчиків на виділену ділянку пам'яті під масив дійсних чисел типу float


    // // Вивільнення пам'яті, що відводиться під двомірний динамічний масив:

    // for (int count = 0; count <2; count++)
    //      delete [] ptrarray [count];
    //      // де 2 – кількість рядків у масиві

// }

// int main(void)
// {
    // srand(time(0)); // генерація випадкових чисел
    // // динамічне створення двовимірного масиву дійсних чисел на десять елементів
        
    // float **ptrarray = new float* [2]; // два рядки в масиві
        
    // for (int count = 0; count <2; count++)
    // ptrarray[count] = new float [5]; // і п'ять стовпців
        
    // // Заповнення масиву
    // for (int count_row = 0; count_row <2; count_row++)
    //      for (int count_column = 0; count_column < 5; count_column++)
    //          ptrarray[count_row][count_column] = (rand() % 10 + 1) / float((rand() % 10 + 1)); //заповнення масиву випадковими числами з масштабуванням від 1 до 10
        
    // // виведення масиву
    // for (int count_row = 0; count_row <2; count_row++)
    // {
    // for (int count_column = 0; count_column < 5; count_column++)
    // cout << setw(4) << setprecision(2) << ptrarray[count_row][count_column] << " ";
    // Cout << endl;
    // }
        
    //// видалення двовимірного динамічного масиву
    // for (int count = 0; count <2; count++)
    // delete [] ptrarray [count];

    // return 0;
// }

