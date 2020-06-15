#include <iostream>

using namespace std;

int hora(int hr, int mt, int sg)
{
 
    if ( hr >= 0 && hr <= 23 && mt >= 0 && mt <= 59 && sg >= 0 && sg <= 59 )
    {sg++;
     if ( sg == 60 )
    { sg = 0;
      mt++;
     if ( mt == 60 )
     {mt = 0;
      hr++;
      if ( hr == 24 )
       hr = 0;}
        }
     cout<<"Su hora +s es H: "<<hr <<" M: "<<mt<<" S: "<<sg<< endl;
     }
    else
        cout<<( "La hora que dijito es incorrecta" );
    return 0;
}


int main()
{
int hr, mt, sg, TY;

    cout<<"Adelantador de hora 1s+"<<endl;

    cout<<"Ingrese las horas: ";
    cin>>hr;
    cout<<"Ingrese los minutos: ";
    cin>>mt;
    cout<<"Ingrese los segundos: ";
    cin>>sg;


TY = hora(hr, mt, sg);

   cout<< TY <<endl; 

return 0;
}