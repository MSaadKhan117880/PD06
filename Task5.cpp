#include<iostream>
using namespace std;

int main()
{
	string fruit;
	string day;
	float quantity;
	float finalPrice;

	cout << "Enter the name of the Fruit: ";
	cin >> fruit;
	cout << "Enter the name of the Day: ";
	cin >> day;
	cout << "Enter the quantity of the Fruit: ";
	cin >> quantity;

	if ((day != "Saturday" && day != "Sunday") && (day != "sunday" && day != "saturday"))
	{
		if (fruit == "Banana")
		{
			finalPrice = quantity * 2.50;
		}
		else if (fruit == "Apple")
		{
			finalPrice = quantity * 1.20;
		}
		else if (fruit == "Orange")
		{
			finalPrice = quantity * 0.85;
		}
		else if (fruit == "Grapefruit")
		{
			finalPrice = quantity * 1.45;
		}
		else if (fruit == "Kiwi")
		{
			finalPrice = quantity * 2.70;
		}
		else if (fruit == "Pineapple")
		{
			finalPrice = quantity * 5.50;
		}
		else if (fruit == "Grapes")
		{
			finalPrice = quantity * 3.85;
		}
		else
		{
			cout << "Invalid Fruit!" << endl;
			return 0;
		}
	}

	else if (day == "Saturday" || day == "Sunday")
	{
		if (fruit == "Banana")
		{
			finalPrice = quantity * 2.70;
		}
		else if (fruit == "Apple")
		{
			finalPrice = quantity * 1.25;
		}
		else if (fruit == "Orange")
		{
			finalPrice = quantity * 0.90;
		}
		else if (fruit == "Grapefruit")
		{
			finalPrice = quantity * 1.60;
		}
		else if (fruit == "Kiwi")
		{
			finalPrice = quantity * 3.00;
		}
		else if (fruit == "Pineapple")
		{
			finalPrice = quantity * 5.60;
		}
		else if (fruit == "Grapes")
		{
			finalPrice = quantity * 4.20;
		}
		else
		{
			cout << "Invalid Fruit!" << endl;
			return 0;
		}
	}
	else
	{
		cout << "Invalid Day!" << endl;
		return 0;
	}
	cout << "Final Price = " << finalPrice << "$" << endl;

	return 0;
}