#include<iostream>
#include<conio.h>

using namespace std;

//Esta función pide los datos para llenar los arreglos 
void PD();
//Esta función hace la suma de los dos arreglos 
void CS(int drag[],int lion[],int wolf[],int);
//Esta funcion muestra la suma de los dos arreglos
int T(int wolf[],int);

int drag[100],tam;
int lion[100];
int wolf[100];

int main()
{

	PD();
    
	    cout << endl;

            CS(drag,lion,wolf,tam);

	            cout << endl;

		            T(wolf,tam);
	
	getch();
	return 0;
}

                void PD()
                {
                    cout<<"Digite el numero de elementos de la lista: ";
                    cin>>tam;
                    
                    for(int i=0;i<tam;i++)
                    {
                        cout<<i+1<<". Digite un numero de la lista 1: ";
                        cin>>drag[i];
                    }

                    cout << endl;
                    for(int i=0;i<tam;i++)
                    {
                        cout<<i+1<<". Digite un numero de la lista 2 : ";
                        cin>>lion[i];
                    }
                }



                      void CS(int drag[],int lion[],int wolf[],int tam)
						{
                         for(int i=0;i<tam;i++)
						    {
                            wolf[i] = drag[i] + lion[i] ;                                                                                                 
                            }
                        }



                                            int T(int wolf[],int tam)
                                            {

                                                for(int i=0; i<tam; i++)
                                                {
                                                    cout << wolf[i] << endl;
                                                }
                                            }