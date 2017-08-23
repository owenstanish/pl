#include <iostream>

using namespace std;

int main()
{

    int p;
    cout<<"Ingrese un numero: "<<endl;
    cin>>p;
    int cont=1;
    for(int i=1;p!=i;i++){
        if (p%i==0){
            cont++;
        }
    }
    if (cont>2)
        cout<<"no es primo"<<endl;
    else
        cout<<"Es primo"<<endl;




    return 0;
}
