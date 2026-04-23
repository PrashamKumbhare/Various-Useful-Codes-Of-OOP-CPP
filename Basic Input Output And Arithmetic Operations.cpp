#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Two Numbers To Perform Arithmetic Operations On Them:";
    cin >> a >> b;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulus = a % b;

    cout<<"Addition:"<<addition<<endl;
    cout<<"Subtraction:"<<subtraction<<endl;
    cout<<"Multiplication:"<<multiplication<<endl;
    cout<<"Division:"<<division<<endl;
    cout<<"Modulus:"<<modulus<<endl;

    return 0;


}
