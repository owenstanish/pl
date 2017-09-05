#include <iostream>

using namespace std;

int main()
{

    int menor;
    int mayor;
    int y=0;
    int z=0;
    int x,x2,x3,x4;
    cout << "Ingrese una nota: " << endl;
    cin>>x;
    cout << "Ingrese una nota: " << endl;
    cin>>x2;
    cout << "Ingrese una nota: " << endl;
    cin>>x3;
    cout << "Ingrese una nota: " << endl;
    cin>>x4;
    if(x>x2)
        y=x;
    else
        y=x2;
    if(x3>x4)
        z=x3;
    else
        z=x4;
    if(y>z)
        mayor=y;
    else
        mayor=z;
    //
    if(x<x2)
        y=x;
    else
        y=x2;
    if(x3<x4)
        z=x3;
    else
        z=x4;
    if(y<z)
        menor=y;
    else
        menor=z;

    cout<<"El mayor es : " << mayor <<endl;
    cout<<"El promedio es : " << (x+x2+x3+x4)/4 <<endl;
    cout<<"El menor es : " << menor <<endl;

    return 0;
}
