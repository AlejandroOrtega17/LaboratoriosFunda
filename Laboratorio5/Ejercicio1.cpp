#include <iostream> 

using namespace std;

int MCD (int ma,int me, int lol){

    cout << "MCD" << endl;
 cout << "Digite el numero mayor" << endl; 
cin >> ma ;
cout << "Digite el numero menor" << endl;
cin >> me;


do {
    lol = ma % me;
    if( lol != 0){
        ma = me;
    me = lol;
    } 
}
while(lol!=0);
cout << "El MCD es" ;
cout << endl;


return me;
}
int main(void)
{
int ma,me,Exp,lol;

Exp = MCD(ma,me,lol);
cout << Exp << endl;
  

}
