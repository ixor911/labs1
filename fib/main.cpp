#include <iostream>
using namespace std;
int n=0;
void fib(){
    int a=0, b=1, x=1;
    while(1)
    {
        //cout<<n;
        x=a;
        a=a+b;
        b=x;
        n++;
        if(a==0)
            break;
    }
}
int main(){
    fib();
    cout << n;
    return 0;
}
