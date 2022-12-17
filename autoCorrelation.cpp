#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int k,i,M,m,n;
	float sum=0, sigma, autocorrelation, Zo;
	float R[30]={0.00,0.12,0.01,0.23,0.28,0.89,0.31,0.64,0.28,0.83,0.93,0.99,0.15,0.33,0.35,0.91,0.41,0.60,0.27,0.75,0.88,0.68,0.49,0.05,0.43,0.95,0.58,0.19,0.36,0.69};	

	cout<<"the given data are: \n";
	for(k=0;k<=29;k++)
	{
		cout<<R[k]<<"\t";
	}

	cout<<"\nenter the lag value:\t";
	cin >>m;
	cout <<"enter the index or number from where we start:\t";
	cin>>i;
	cout<<"enter the number of random number generated:\t";
	cin>>n;

    M=(n-m-i)/m;
    cout<<"\nThe value of M is "<<M;

    for (k=0;k<=4;k++)
    {
    	sum=sum+(R[i+k*m])*(R[i+((k+1)*m)]);
	}
	autocorrelation=(sum/(M+1))-0.25;
	cout<<"\nThe value of autocorrelation is "<<autocorrelation;

	sigma=(sqrt(13*M+7))/(12*(M+1));
	cout<<"\nThe value of sigma is "<<sigma;

	Zo=autocorrelation/sigma;
	cout<<"\nthe value of Zo is "<<Zo;

    if (Zo<1.96)
    {
    	cout<<"\n Zo < critical value, so the hypothesis of independence cannot be rejected";
	}
	else
	{
		cout<<"\n Zo > critical value, so the hypothesis of independence can be rejected";
	}
}
