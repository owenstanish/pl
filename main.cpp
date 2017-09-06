#include <iostream>

using namespace std;

bool bisiesto(int x)
{

    if(x%4==0){
        if(x%100!=0||x%400==0 )
            return true;
    }
    else
        return false;


}
int main(){
    cout<<bisiesto(2016);




    return 0;
}
