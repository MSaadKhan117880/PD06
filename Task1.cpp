#include<iostream>
using namespace std;

int main()
{
	string temperature;
	string humidity;

	cout << "Enter temperature (Warm or Cold): ";
	cin >> temperature;
	cout << "Enter humidity (Dry or Humid): ";
	cin >> humidity;

	if (temperature == "Warm" && humidity == "Dry")
	{
		cout << "Play Tennis." << endl;
	}
	else if (temperature == "Warm" && humidity == "Humid")
	{
		cout << "Swim" << endl;
	}
	else if (temperature == "Cold" && humidity == "Dry")
	{
		cout << "Play Basketball" << endl;
	}
	else if (temperature == "Cold" && humidity == "Humid")
	{
		cout << "Watch TV." << endl;
	}

	return 0;
}