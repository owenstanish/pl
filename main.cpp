#include <iostream>

using namespace std;

int nsimo(int p){

    int s;
    int ig=0;
    int nume=1;
    while(p != ig){
        nume=nume+1;
        s=0;
        for(int i=2;i<100;i++){
            if(nume%i==0){
                s++;
            }
        }
        if(s<2){//ES PRIMO
            ig++;
        }
        if(s<2 & p==ig){
            return nume;

        }
    }
}
int main()
{
    cout<<nsimo(6);

}
