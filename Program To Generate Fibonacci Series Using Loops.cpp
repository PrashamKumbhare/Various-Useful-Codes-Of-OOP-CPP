#include <iostream>

using namespace std;

int main()
{
    int a = 0,b = 1,next,n;

    cout<<"Enter Number Of Terms For Fibonacci Series:";
    cin >> n;

    cout<<"Fibonacci Series:";
    for(int i = 1;i <= n; i++){
        cout<<a<<" ";
        next = a + b;
        a = b;
        b = next;

    }
    return 0;
}
