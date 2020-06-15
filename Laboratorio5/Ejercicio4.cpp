#include <iostream>
using namespace std;
int Ghost(int d,int ds,int m,int ms,int a,int as)
{
    if ((d == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) || (d == 29 && m == 2) || (d == 28 && m == 2 && ((a % 4 != 0) || (a % 100) == 0) && (a % 400) != 0) || d == 31)
            {
                ms = m + 1;
                ds = 1;
            }
            else
            {
                ds = d + 1;
                ms = m;
            }

            if (ds == 1 && ms == 13)
            {
                ms = 1;
                as = a + 1;
            }
            else
                as = a;

                cout << "Año : " << as << endl;
                  cout << "Mes : " << ms << endl;
                    cout << "Dia : " << ds << endl;
                    cout << endl;
              
              return 0;
}

int main()
{
int d,ds,m,ms,a,as,SH;

cout << "Ingrese el día " <<endl;
cin >> d;
cout << "Ingrese el numero de mes" <<endl;
cin >> m;
cout << "Ingrese el año" <<endl;
cin >> a;

SH =Ghost(d,ds,m,ms,a,as);

cout << SH << endl;

return 0;
              
}