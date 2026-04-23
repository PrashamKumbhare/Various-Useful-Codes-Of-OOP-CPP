#include <iostream>

using namespace std;

int main()
{
int a[2][2],b[2][2],sum[2][2],mul[2][2];

cout<<"Enter Elements Of First Matrix (2 x 2):"<<endl;
for(int i=0; i < 2; i++){
    for(int j=0; j < 2; j++){
        cin>>a[i][j];
    }}

cout<<"Enter Elements Of Second Matrix (2 x 2):"<<endl;
for(int i=0; i < 2; i++){
    for(int j=0; j < 2; j++){
        cin>>b[i][j];
    }
}

// Matrix Addition
for(int i=0; i < 2; i++){
    for(int j=0; j < 2; j++){

        sum[i][j] = a[i][j] + b[i][j];
    }
}

// Martix Multiplication
for(int i=0; i < 2; i++){
    for(int j=0; j < 2; j++){
        mul[i][j] = 0;
        for(int k=0; k < 2; k++){
        mul[i][j] += a[i][k] * b[k][j];
        }
    }
}

cout<<"Matrix Addition Result:"<<endl;
for(int i=0 ; i < 2; i++){
    for(int j=0 ; j < 2; j++){
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Matrix Multiplication Result:"<<endl;
for(int i=0; i < 2; i++){
    for(int j=0; j < 2; j++){
        cout<<mul[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
