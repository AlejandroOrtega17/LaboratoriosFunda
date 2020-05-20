#include "iostream"

using namespace std;

int main(void)
{
    int num = 0;
        cout << ("Digite un numero: \n "); 
        cin >>num;

        if (num >= 1)
            {
            cout << ("\n El numero es positivo") <<endl;
            }
            else if (num <= -1)
                {
                cout << ("\n El numero es negativo") <<endl;
                }
                else if (num == 0)
                    {
                    cout << "El numero es: 0" << endl;
                    }
    return 0;
}