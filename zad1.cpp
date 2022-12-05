/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int q;
     int summa = 0;
     
    cout << "Введите целое число: ";
     cin >> x;
     
    cout << "Введите целое число еще раз: ";
    cin >> y;
    
    cout << "Введите целое число и еще раз: ";
    cin >> z;
    
    cout << "Введите целое число, крайний раз )): ";
    cin >> q;
    
summa = x + y + z + q;
cout << "Сумма введенных вами чисел равна: " << summa << endl;

    return 0;
}
