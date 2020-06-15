#include <iostream>
using namespace std;

bool TF(int a){
int pato;

if (a % 400 != 0 && (a % 100 == 0 || a % 4 != 0 ) )   
{
 return false;
}
else {
    return true;
}

}
int main(){

int a,rpk;

cout << "Comprobador de años bisiestos" << endl;
cout <<"ingrese un año" << endl;
cin >> a;

rpk=TF(a);

cout << rpk;
cout << endl;

if(TF(a)==true)
{
    cout << "El año si es bisiesto" << endl;
    }
else{
    cout << "el año no es bisisesto"<< endl;
    }

return 0;
}