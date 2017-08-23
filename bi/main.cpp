#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese un ano bisciesto:" << endl;
    cin>>x;
    if(x%4==0){
        if(x%100!=0||x%400==0 )
            cout<<"Es un ano bisieto";
    else
        cout<<"No es ano bisiseto";
    }









    return 0;
}
