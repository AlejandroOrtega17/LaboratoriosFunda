#include "iostream"

using namespace std;

int main(void)
{
    int num;
    cout << ("Digite un numero: \n "); 
    cin >> num;

        if (num % 2 == 0)
        {
            cout << ("\n El numero es par") <<endl;
        }
            else
            {
            cout << ("\n El numero es impar") <<endl;
            }

    return 0;
}