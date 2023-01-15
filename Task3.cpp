#include<iostream>
using namespace std;

int main()
{
	int date;
	string month;

	cout << "Enter your date of birth: ";
	cin >> date;
	cout << "Enter your month of birth: ";
	cin >> month;

	if ((month == "March" || month == "April") && (date >= 21 || date <= 19))
	{
		cout << "Your Zodiac Sign = Aries" << endl;
	}
	else if ((month == "April" || month == "May") && (date >= 20 || date <= 20))
	{
		cout << "Your Zodiac Sign = Taurus " << endl;
	}
	else if ((month == "May" || month == "June") && (date >= 21 || date <= 20))
	{
		cout << "Your Zodiac Sign = Gemini " << endl;
	}
	else if ((month == "June" || month == "July") && (date >= 21 || date <= 22))
	{
		cout << "Your Zodiac Sign = Cancer" << endl;
	}
	else if ((month == "July" || month == "August") && (date >= 23 || date <= 22))
	{
		cout << "Your Zodiac Sign = Leo " << endl;
	}
	else if ((month == "August" || month == "September") && (date >= 23 || date <= 22))
	{
		cout << "Your Zodiac Sign = Virgo" << endl;
	}
	else if ((month == "September" || month == "October") && (date >= 23 || date <= 22))
	{
		cout << "Your Zodiac Sign = Libra " << endl;
	}
	else if ((month == "October" || month == "November") && (date >= 23 || date <= 21))
	{
		cout << "Your Zodiac Sign = Scorpio" << endl;
	}
	else if ((month == "November" || month == "December") && (date >= 22 || date <= 21))
	{
		cout << "Your Zodiac Sign = Saggittarius" << endl;
	}
	else if ((month == "December" || month == "January") && (date >= 22 || date <= 19))
	{
		cout << "Your Zodiac Sign = Capricorn " << endl;
	}
	else if ((month == "January" || month == "February") && (date >= 20 || date <= 18))
	{
		cout << "Your Zodiac Sign = Aquarius" << endl;
	}
	else if ((month == "February" || month == "March") && (date >= 19 || date <= 20))
	{
		cout << "Your Zodiac Sign = Pisces" << endl;
	}


	return 0;
}