#include <iostream>

using namespace std;
int invert(const int ar[],const int tam){
    for(int i=tam-1;i>=0;i--){

        cout<<ar[i]<<",";
    }
    return 0;
}
int invertR(int ar[],int pri,int ult){
    int x;
    int y=ult;
    if (pri !=y){

        ar[pri]=ar[ult];
        ar[ult]=x;
        x=ar[pri];
    }
    else{
        return ar[];
    }
    return invertR(ar,pri+1,ult-1);
}
int main()
{


    int arr[]={1,2,3,4,5,6,7};


    cout<<invertR(arr,0,6)
    return 0;


}
