#include <iostream>
#include <cmath>

using namespace std;



//bool mainMenu() {

//}

int main()
{
	int sizeOfMaltitudeA, sizeOfMaltitudeB;
	int* maltitudeA, * maltitudeB;

	cin >> sizeOfMaltitudeA;

	maltitudeA = new int[sizeOfMaltitudeA];

	for (int i = 0; i < sizeOfMaltitudeA; i++)
	{
		cin >> maltitudeA[i];
	}

	cin >> sizeOfMaltitudeB;

	maltitudeB = new int[sizeOfMaltitudeB];

	for (int i = 0; i < sizeOfMaltitudeB; i++)
	{
		cin >> maltitudeB[i];
	}

	for (int i = 0; i < sizeOfMaltitudeB; i++)
	{
		cout << maltitudeB[i] << " " << maltitudeA[i] << " ";
	}

	delete[]maltitudeA;
	delete[]maltitudeB;
}