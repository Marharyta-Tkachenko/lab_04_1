#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int j;
	double P;

	P = 1;
	j = 1;
	while (j <= 15)
	{
		P *= sqrt((j *1.0 * j) / 1.0 + exp(-j));
		j++;
	}
	cout << P << endl;
	
	P = 1;
	j = 1;
	do {
		P *= sqrt((j * 1.0 * j) / 1.0 + exp(-j));
		j++;
	} while (j <= 15);
	cout << P << endl;

	P = 1;
	for (j = 1; j <= 15; j++)
	{
		P *= sqrt((j *1.0 * j) / 1.0 + exp(-j));
	}
	cout << P << endl;

	P = 1;
	for (j = 15; j >= 1; j--)
	{
		P *= sqrt((j * 1.0 * j) / 1.0 + exp(-j));
	}
	cout << P << endl;

	return 0;
}
