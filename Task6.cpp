#include<iostream>
using namespace std;

float Studio(string, int);
float Apartment(string, int);

int main()
{
	string month;

	int stay;
	float discount;
	float rate;
	float totalRateS;
	float totalRateA;

	cout << "Enter number of Stays: ";
	cin >> stay;
	cout << "Enter Month: ";
	cin >> month;

	totalRateS = Studio(month, stay);
	totalRateA = Apartment(month, stay);

	cout << "Studio = " << totalRateS << "$" << endl;
	cout << "Apartment = " << totalRateA << "$" << endl;
	

	return 0;
}

float Studio(string month, int stay)
{
	float rate;
	float discount;
	float total_rate;
	if (month == "May" || month == "October")
	{
		rate = 50.00;
		total_rate = rate * stay;
		discount;
		if (stay <= 14)
		{
			discount = total_rate *(5.0 / 100.0);
			total_rate = total_rate - discount;
		}
		else if (stay > 14)
		{
			discount = total_rate * (30.0 / 100.0);
			total_rate = total_rate - discount;
		}

	}
	else if (month == "June" || month == "September")
	{
		rate = 75.20;
		total_rate = rate * stay;
		if (stay > 14)
		{
			discount = total_rate * (20.0 / 100.0);
			total_rate = total_rate - discount;
		}
	}
	else if (month == "July" || month == "August")
	{
		rate = 76.00;
		total_rate = rate * stay;
	}
	return total_rate;
}


float Apartment(string month, int stay)
{
	float rate;
	float discount;
	float totalrate;
	if (month == "May" || month == "October")
	{
		rate = 65.00;
		totalrate = rate * stay;

	}
	else if (month == "June" || month == "September")
	{
		rate = 68.70;
		totalrate = rate * stay;
	}
	else if (month == "July" || month == "August")
	{
		rate = 77.00;
		totalrate = rate * stay;
	}
	if (stay > 14)
	{
		discount = totalrate * (10.0 / 100.0);
		totalrate = totalrate - discount;
	}

	return totalrate;
}