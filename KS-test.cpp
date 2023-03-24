#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
float max(float a[])
{
	float max = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
};
int main()
{
	float arr[10];
	srand(time(0));
	cout << "\nGenerated Random number\n";
	for (int i = 0; i < 10; i++)
	{
		float num = rand() % 100;
		if (num == 0)
		{
			i--;
			continue;
		}
		arr[i] = num / 100;
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << endl;
	cout << "\n\nSorting the number in Ascending order\n";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\t";
	}
	// Table Creation
	float Dplus[10], Dminus[10], n = 1;
	;
	for (int i = 0; i < 10; i++)
	{
		Dplus[i] = (n / 10) - arr[i];
		Dminus[i] = arr[i] - ((n - 1) / 10);
		n++;
	}
	float DP = max(Dplus);
	float DM = max(Dminus);
	float D = DP > DM ? DP : DM;
	cout << "\nD= " << D << "\n";
	if (D < 0.521)
	{

		cout << "As Dcalculated < Dtabulated, the random numbers have uniform distribution ";
	}

	else
		cout << "No uniform distribution";
}
