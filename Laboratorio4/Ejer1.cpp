#include <iostream>

using namespace std;

int main()
{
   int num1, num2;

    cout << ("Ingrese el numero a dividir: ")<< endl;
    cin >> num1;
    cout << ("Ingrese el divisor: ") <<endl; 
    cin >> num2;
    cout << endl;
        if(num1 % num2 == 0)
        {
                cout << ("El numero es divisible \n") <<endl;
        }
            else
            {
                cout << ("El numero no es divisible \n") <<endl;
            }

    return 0;
}