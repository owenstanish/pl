#include <iostream>

using namespace std;
int fibo(int x)
{
    if(x==0 || x==1)
       return x;
    else
       return fibo(x - 1) + fibo(x - 2);
}

int sin(int x){
    int sum=0;

    int y=0;
    int z=0;
    while(y<x){
        sum=sum+y;
        y+=3;
    }
    while(z<x){
        sum=sum+z;
        z+=5;
    }


    return sum;
}

int factore(int x){
    for (int i=1;i<50;i++){
        if (x%i!=0){
            cout<<i;

        }
    }


    return 0;
}

int main()
{

    //factore(13195);
    //cout<<fibo(6);
    cout<<sin(10);
    return 0;
}
