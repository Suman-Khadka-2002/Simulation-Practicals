#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int main() {
   float arr[100];
 	srand(time(0));
   for(int i =0;i<100;i++)
   {
    float num=rand()%100;
    if(num==0){
    	i--;
    	continue;
	}
   	arr[i]=num/100;
	cout<<arr[i]<<"\t";
   }
   cout<<endl<<endl;
    int O[10];
	float chi=0;
    int index=0;
    for(float j=0;j<1;j=j+0.10)
    {
    	O[index]=0;
    	for(int i=0;i<100;i++)
		{
			if((arr[i]>j) && (arr[i]<=j+0.10))
			{
			 O[index]++;
			}
		}
		index++;
	}
	for(int i=0;i<10;i++)
	{
		chi=chi+(pow((O[i]-10),2)/10);
	}
	cout<<endl;
	cout<<"Chi value is:"<<chi<<endl;
	if(chi<16.92)
	cout<<"chi<table value,so accept the numbers";
	else
	cout<<"chi>table value, so reject the numbers";
   return 0;
}
