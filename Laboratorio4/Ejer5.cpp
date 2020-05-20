#include <iostream>
#include <string>
using namespace std;
int main()
{
string palabra;

cout << "Ingrese su palabra: " << endl;
cin >> palabra;
cout << endl;

if (palabra.front() == palabra.back())
    {
    cout << "La letra del principio y del final son la misma" << endl;
    }
    else 
        {
        cout << "La letra del principio y del final no son la misma" << endl;
        }

    return 0;
}