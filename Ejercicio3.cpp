#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()

{
    float a, b, c, Ty1, Ty2, Ty3, Ty4, Ty5;

    printf ("Uso de la formula general para resolver la ecuacion cuadratica \n");

    printf ("\n Ingrese el termino a de la ecuación cuadratica: ");
    scanf ("%f",&a);
    printf ("\n Ingresa el termino b de la seccion lineal \n");
    scanf ("%f",&b);
    printf("\n Ingrese el termino C de la sección independiente \n");
    scanf ("%f",&c);
    if (a!= 0)
    {
        Ty3=pow(b,2);
        Ty4=(4*a*c);
        Ty5=(Ty3-Ty4);
        if(Ty5<0)
        {
            printf("No existen raices negativas");
            printf("\a");
        }
        if (Ty5>=0){
            Ty1=((-b+(sqrt(Ty5)))/(2*a));
            Ty2=((-b-(sqrt(Ty5)))/(2*a));
            if(Ty1==Ty2){
                printf("\n El resultado es igual para + y - y es: %.4f",Ty1);
            }


            if (Ty1!=Ty2){
                printf ("\n El resultado de + es %.4f",Ty1);
                printf ("\n El resultado de - es %.4f",Ty2);
            }
        }
    }
    if(a==0) {
        printf("No es posible realizar la operacion");
        printf("\a");
    }
    cout << "." << endl;

    return 0;

}