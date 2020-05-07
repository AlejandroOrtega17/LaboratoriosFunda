#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "ingrese el primer numero entero: " << endl;
    cin >> a;
     cout << "ingrese el segundo numero entero: " << endl;
    cin >> b;
     cout << "ingrese el tercero numero entero: " << endl;
    cin >> c;
     
    int div = (a+b+c)/3;

    cout << "El resultado de su promedio es: \n " << endl;
    cout << div << endl;

    return 0;
}