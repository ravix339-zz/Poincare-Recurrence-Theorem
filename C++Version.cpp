#include <iostream>
#include <ctime>

using namespace std;

unsigned long long int elements;
unsigned long long int i;
unsigned long long int val;
unsigned long long int counter = 0;
bool accurate = true;
void main()
{
	srand(time(NULL));
	cout << "Enter the number (positive) of elements in a box: ";
	cin >> elements;
	while (elements == 0)
	{
		cout << "Enter a number greater than or equal to 1: ";
		cin >> elements;
	}
	unsigned long long int* box1 = new(nothrow) unsigned long long int [elements];
	unsigned long long int* box2 = new(nothrow) unsigned long long int[elements];
	for (i = 0; i < elements; i++)
	{
		box1[i] = i+1;
		box2[i] = 0;
	}
	while (1)
	{
		accurate = true;
		counter++;
		val = rand() % elements;
		if (box1[val] != 0)
		{
			box1[val] = 0;
			box2[val] = val + 1;
		}
		else
		{
			box2[val] = 0;
			box1[val] = val + 1;
		}
		for (i = 0; i < elements; i++)
		{
			if (box1[i] != i + 1)
			{
				accurate = false;
				break;
			}
			else;
		}
		if (accurate == true)
		{
			break;
		}
	}
	cout << endl << "It took "<< counter<< " iterations" << endl << endl;
	system("PAUSE");
	return;
}
