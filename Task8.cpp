#include<iostream>
using namespace std;

int main()
{
	int h;
	int x;
	int y;

	cout << "Enter height of the figure: ";
	cin >> h;
	if (h < 1)
	{
		cout << "Invalid Input! Please enter positive integers: ";
		cin >> h;
		if (h < 1)
		{
			return 0;
		}
	}
	cout << "Enter x coordinate of the point: ";
	cin >> x;
	if (x < 0)
	{
		cout << "Invalid Input! Please enter positive integers: ";
		cin >> x;
		if (x < 0)
		{
			return 0;
		}
	}
	cout << "Enter y coordinate of the point: ";
	cin >> y;
	if (y < 0)
	{
		cout << "Invalid Input! Please enter positive integers: ";
		cin >> y;
		if (y < 0)
		{
			return 0;
		}
	}

	if ((x >= 0 && x <= 3 * h) && (y >= 0 && y <= h))
	{
		if (y == h || y == 0)
		{
			cout << "Border." << endl;
		}
		else
		{
			cout << "Inside." << endl;
		}
	}
	else if ((x >= h && x <= 2 * h) && (y > h && y <= 4 * h))
	{
		if ((x == h || x == 2 * h))
		{
			cout << "Border." << endl;
		}
		else if (y == 2 * h || y == 3 * h)
		{
			cout << "Border." << endl;
		}
		else
		{
			cout << "Inside." << endl;
		}
	}
	else
	{
		cout << "Outside." << endl;
	}
	
	return 0;
}