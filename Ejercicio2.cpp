#include <iostream>

using namespace std;
#define PI 3.1416

int main()
{
    int radio;


    cout << "Ingrese el valor del radio: " << endl;
    cin >> radio;

    cout << "espere..." << endl;
    
    cout << "El perimetro obtenido es: " << PI*  (2 * radio) << endl;
    cout << "El area obtenida es: " << PI*  (radio * radio) << endl;

    return 0;

}