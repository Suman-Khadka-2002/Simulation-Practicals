#include<iostream>
using namespace std;

int main()
{
    int x0, x1, a, c, m, n, arr[20];

    cout<<"enter the seed value x0: ";
    cin>>x0;
    cout<<"enter the constant multiplier: ";
    cin>>a;
    cout<<"enter the increment: ";
    cin>>c;
    cout<<"enter the modulus: ";
    cin>>m;

    cout<<"How many random numbers you want to generate: ";
    cin>>n;

    cout<<"The generated random numbers are: ";
    
    for (int i=0; i<n; i++)
    {
        x1 = (a * x0 + c) % m;
        arr[i] = x1;
        x0 = x1;

        cout<<arr[i]<<endl;
    }
    return 0;
}