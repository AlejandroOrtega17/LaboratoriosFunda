#include <iostream>
#include <string>

using namespace std;

int main(void)
{ 
 string palabra;

cout << endl;
cout << "Ingrese una palabra: " << endl;
cin >> palabra;
cout << endl;

int b= palabra.length();

cout << "La palabra " << palabra << " tiene " << b << " letras" << endl;

 if ((palabra.length()%2)== 0)
    {
        cout << "El numero de letras es par" << endl;
    }
    else {
        cout << "El numero de letras es impar "<< endl;
         }

            if((palabra.length())== 10)
            {
            cout << "La palabra es igual a 10 caracteres \n "<< endl;
            }
            else if ((palabra.length())> 10)
                {
             cout << "La palabra es mayor a 10 caracteres \n "<< endl;
                }
                else {
                  cout << "La palabra es menor a 10 caracteres" << endl;
                     }

return 0;
}
 
