#include<iostream>
using namespace std;

int main()
{
	char type;
	int min;
	int og_min;
	int min_remain;
	char time;
	float rate;
	float totalRate;

	cout << "Enter type of your service (Residential or Premium). Select (r/p): ";
	cin >> type;
	if (type == 'p' || type == 'P')
	{
		cout << "(Press 'D' for Day time or Press 'N' for night time) call: ";
		cin >> time;
		if (time != 'D' && time != 'N')
		{
			cout << "Invalid Input!" << endl;
			return 0;
		}
	}
	cout << "Enter number of minutes you've used the service: ";
	cin >> min;

	if (type == 'r' || type == 'R')
	{
		rate = 10.00;
		totalRate = 10.00;
		og_min = 50;
		if (min > 50)
		{
			min_remain = min - og_min;
			totalRate = rate + (min_remain * 0.20);
		}
	}
	else if (type == 'p' || type == 'P')
	{
		rate = 25.00;
		totalRate = 25.00;
		if (time == 'D')
		{
			og_min = 75;
			if (min > 75)
			{
				min_remain = min - og_min;
				totalRate = rate + (min_remain * 0.10);
			}
		}
		else if (time == 'N')
		{
			og_min = 100;
			if (min > 100)
			{
				min_remain = min - og_min;
				totalRate = rate + (min_remain * 0.05);
			}
		}
	}
	else
	{
		cout << "Invalid Input!" << endl;
	}

	cout << "Charges = " << totalRate << "$" << endl;

	return 0;
}

