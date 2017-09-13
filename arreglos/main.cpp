#include <iostream>

using namespace std;

int suma(const int arr[],int tam){
    int sum=0;
    for (int i=0;i!=tam;i++){
        sum+=arr[i];
    }
    return sum;





}
int mayor(const int arr[],int tam){
    int may=arr[0];
    for (int i=0;i!=tam;i++){
        if(may<arr[i]){
            may=arr[i];
        }
    }
    return may;


}
int menor(const int arr[],int tam){
    int me=arr[0];
    for (int i=0;i!=tam;i++){
        if(me>arr[i]){
            me=arr[i];
        }
    }
    return me;


}

int promedio(const int arr[],int tam){
    float prom=0;
    int sum=0;
    for (int i=0;i!=tam;i++){
        sum+=arr[i];
    }
    prom=sum/tam;
    return prom;


}
//RECURSIVO
int sumRe(const int arr[],int tam){
    if (tam==1)
        return arr[0];
    else
        return arr[tam-1]+sumRe(arr,tam-1);

}
int mayorRe(const int arr[],int tam){
    if (tam==1)
        return arr[0];
    if(arr[tam-1]<arr[tam-2])
        return mayorRe(arr[tam-1],int tam-1);
    else
        int x[1]=0;
        x[1]=arr[tam-1];
        arr[tam-1]=arr[tam-2];
        arr[tam-2]=x[1];
        return mayorRe(arr[tam-1],int tam-1);


}
int main()
{
    int ar[]={7,6,3,4,5};
    //cout<<suma(ar,5);
    //cout<<mayor(ar,5);
    //cout<<menor(ar,5);
    //cout<<promedio(ar,5);
    //cout<<sumRe(ar,5);
    cout<<mayorRe(ar,5);

    return 0;
}
