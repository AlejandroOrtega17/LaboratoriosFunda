#include <iostream>

using namespace std;

int main(){
    int WB[50], f=0, n=0, buscar=0;

       cout<<"\nnumeros a ingresar : ";
       cin>>n;
       cout<<endl;
       
            for(int i=0; i<n; i++)
            {
                cout<<"Ingrese el elemento: ";
                cin>>WB[i]; 
            }

                    cout <<"\nnumero a buscar : ";
                    cin>> buscar;

                            for(int i=0; i<n; i++)
                            {
                                if(WB[i]==buscar)
                                f++; 
                            }

                                    if(f!=0)
                                    {
                                        cout<<"\nEl numero "<<buscar<<" aparece: "<<f<<" veces."<<endl;
                                    }
                                            else
                                            {
                                                cout<<"El numero "<<buscar<<" no aparece en la lista."<<endl;
                                            }

    return 0;
}