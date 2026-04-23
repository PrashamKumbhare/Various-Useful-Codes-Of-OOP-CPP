#include <iostream>

using namespace std;

int main()
{
    int numerator, denominator;

cout<<"Enter the numerator: ";
cin>>numerator;
cout<<"Enter the denominator: ";
cin>>denominator;

try{
    if(denominator == 0){
        throw"Error: Division by zero is not allowed!";
    }
    float result = (float)numerator/denominator;
    cout<<"Result :"<<result<<endl;
}
catch(const char* msg){
cout<<msg<<endl;
}
    return 0;
}
