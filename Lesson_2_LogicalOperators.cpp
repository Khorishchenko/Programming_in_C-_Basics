// Логічні оператори й оператори розгалужень

#include <iostream>
using namespace std;

int main() {
     // > < == != || &&
    
     int A = 10;
     int B = 15;

     std::cout << (A > B) << std::endl;
     std::cout << (A < B) << std::endl;
     std::cout << (A == B) << std::endl;
     std::cout << (A != B) << std::endl;


     // && (логічне "І"): Повертає true, якщо обидва операнди є true.
     // || (логічне "АБО"): Повертає true, якщо хоча б один із операндів є true.
     // ! (логічне "НЕ"): Використовується для інвертування значення логічного виразу.


     int C = 5;

     std::cout << ((A < B) && (A > C)) << std::endl;
     std::cout << ((A > B) || (A > C)) << std::endl;
     std::cout << ((A > B) || !(A > C)) << std::endl;







     // if / if - else / if - else if - else


     int X = 10, Y = 5;

     if (X > Y)
     {

          std::cout << "X > Y" << std::endl;

     }





     int A = 10, B = 5, C = 12;

     if ((A > B) && (A > C)) // комбіноване твердження
     {
          std::cout << "A between B and C" << std::endl; // на екрані A between B and C
     }


    
     if ((A > B) || (A > C)) // комбіноване твердження
     {
          std::cout << "A > B || A < B and A > C || A < C" << std::endl; // на екрані A between B and C
     }
    



     int A = 0;

     if (A++)
     {
          std::cout << "Best test!! 1 = " << A << std::endl; // true
     }
     
     if (A++)
     {
          std::cout<< "Best test!! 2 = " << A << std::endl; // true
     }



    // яка буде вихідна величина у змінній "result", якщо "x" дорівнює 10, а "y" дорівнює 5, для такого фрагмента коду?
    int x = 10;
    int y = 5;
    int result = 0;

    if (x - y)
    {

        result = x - y;            // дія номер 1
    }
    else
    {
          result = y - x;            // дія номер 2
    }

    std::cout << result << std::endl;





//один рядок то фігурні дужки можна не вказувати

     int A = 20, B = 20;

     if (A > B)
          cout << "A > B" << endl;
     else
          cout << "A < B || A == B"<< endl;

    
    
    
//  if - else if - else

     int A = 15;
     int B = 10;
    

     if (A > B)
          cout << "A > B" << endl;
     else if (A < B)
          cout << "A < B" << endl;
     else
          cout << "A == B" << endl;



// // Кожному оператору if відповідає лише один оператор else.
// // Сукупність цих операторів - else if означає, що якщо не виконалося
// // Попереднє умова, то перевірити це. Якщо жодна з умов не вірна,
// // виконується тіло оператора else.





// тернарний оператор
     // ()? дія номер 1: дія номер 2;

     // ()? :;

     int a = 5, b = 10;
     int max = 0;

     if (a > b)
          max = a;
     else
          max = b;

     max = (a > b) ? a : b;

     std::cout << max << std::endl;



     int max = (a > b)? a: b;
     int min = (a < b)? a: b;

     if (a > b)
     max = a;
     else
     max = b;

     cout << "MAX: " << max << "\tMIN: " << min << endl;



// SWITCH

     enum WEEKS
    {
        Monday = 1,
        Tuesday,
        Wednesday, 
        Thursday,
        Friday,
        Saturday,
        Sunday,
    };


    char value;
    std::cout << "Enter number of weeks: ";
    std::cin >> value;

    switch (value)
    {
    case 'A':
        std::cout << "Навчається !!!" << std::endl;
        break;
    case WEEKS::Tuesday:
        std::cout << "Навчається !!!" << std::endl;
        break;
    case WEEKS::Wednesday:
        std::cout << "Навчання/робота !!!" << std::endl;
        break;
    case WEEKS::Thursday:
        std::cout << "Прогулянка !!!" << std::endl;
        break;
    case WEEKS::Friday:
        std::cout << "Спортзал !!!" << std::endl;
        break;
    case WEEKS::Saturday:
        std::cout << "Відпочинок !!!" << std::endl;
        break;
    case WEEKS::Sunday:
        std::cout << "Відпочинок !!!" << std::endl;
        break;
    default:
        std::cout << "Нічого не робить !!!" << std::endl;
    }


// Завдання 1
// Користувач вводить із клавіатури число. 
// Якщо воно парне, помножити його на три, інакше — поділити на два. Результат вивести на екран.

     int value;

     std::cout << "Enter number: ";
     std::cin >> value;

     if (value % 2 == 0)
     {
          value = value * 3;
     }
     else{
          value /= 2;
     }

     std::cout << value << std::endl;

}

