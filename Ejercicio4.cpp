#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int op;
    float Pricea = 14.99;
    float Priceb = 6.99;
    float Pricec = 5.99;
    int a;
    char b = '$';

    string Nobrea = "Pizza";
    string Nobreb = "Hamburguesa";
    string Nobrec = "Pollo";

    while(op!=4)
    {
        cout << endl;
        cout << endl;
    cout << "1) Pizza" << endl;
    cout << "2) Hamburguesa" << endl;
    cout << "3) Pollo" << endl;
    cout << "4) Salir \n " << endl;   
    cout << "Digite su opcion: " << endl;
    cin >>op;
    cout << endl;

    switch(op)
    {
        case 1:
        cout << "Nombre del producto: \n ";
        cout << Nobrea << endl;
        cout << endl;
        cout << "Precio: \n ";
        cout << b ;
        cout << Pricea << endl;
        cout << endl;
        cout << "Cuantos productos quiere? \n";
        cin >> a;
        cout << endl;
        cout << "Su saldo a pagar es de:\n ";
        cout << b ;
        cout << (Pricea*a) ;
        break;

        case 2:
        cout << "Nombre del producto: \n ";
        cout << Nobreb << endl;
        cout << endl;
        cout << "Precio: \n ";
        cout << b ;
        cout << Priceb << endl;
        cout << endl;
        cout << "Cuantos productos quiere? \n";
        cin >> a;
        cout << endl;
        cout << "Su saldo a pagar es de:\n ";
        cout << b ;
        cout << (Priceb*a) ;
        break;

         case 3:
        cout << "Nombre del producto: \n ";
        cout << Nobrec << endl;
        cout << endl;
        cout << "Precio: \n ";
        cout << b ;
        cout << Pricec << endl;
        cout << endl;
        cout << "Cuantos productos quiere? \n";
        cin >> a;
        cout << endl;
        cout << "Su saldo a pagar es de:\n ";
        cout << b ;
        cout << (Pricec*a) ;
        break;


        default:
            if (op < 1 || op > 4 )
            {
                cout << "El digito que marco no esta en la lista " << endl;
                cout << "Por favor escriba otro numero... \n" <<endl;
            }
            break;

         
    }
    }

    return 0;
}