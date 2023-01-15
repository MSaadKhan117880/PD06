#include<iostream>
using namespace std;

int main()
{
	int examHrs;
	int examMin;
	int stdHrs;
	int stdMin;
	
	int remainingHrs;
	int remainingMin;

	cout << "Exam Starting Time (hour): ";
	cin >> examHrs;
	if (examHrs > 23 || examHrs < 0)
	{
		cout << "Invalid Hour!Re-enter Exam Starting Time (hour): " << endl;
		cin >> examHrs;
	}
	cout << "Exam Starting Time (minutes): ";
	cin >> examMin;
	if (examMin > 59 || examMin < 0)
	{
		cout << "Invalid Minutes! Re-enter Exam Starting time (minutes): ";
		cin >> examMin;
	}
	cout << "Student hour of arrival: ";
	cin >> stdHrs;
	if (stdHrs > 23 || stdHrs < 0)
	{
		cout << "Invalid Hour! Re-enter Student's arrival hour: " << endl;
		cin >> stdHrs;
	}
	cout << "Student minutes of arrival: ";
	cin >> stdMin;
	if (stdMin > 59 || stdMin < 0)
	{
		cout << "Invalid Minutes! Re-enter Student's arrival minutes: " << endl;
		cin >> stdMin;
	}

	if (examHrs == stdHrs)
	{
		if (stdMin < examMin)
		{
			remainingMin = examMin - stdMin;
			if (remainingMin <= 30)
			{
				cout << "On Time!" << endl;
			}
			else
			{
				cout << "Early!" << endl;
			}
			cout << remainingMin << " minutes before the start." << endl;
		}
		else if (stdMin > examMin)
		{
			remainingMin = stdMin - examMin;
			cout << "Late" << endl;
			cout << remainingMin << " minutes after the start." << endl;
		}
	}
	else if (stdHrs > examHrs)
	{
		remainingHrs = stdHrs - examHrs;
		remainingMin = stdMin - examMin;
		if (stdMin < examMin)
		{
			remainingMin = -(remainingMin);
		}
		cout << "Late" << endl;
		if (remainingHrs == 1)
		{
			if (stdMin < examMin)
			{
				remainingMin = (stdMin - examMin) + 60;
				cout << remainingMin << " minutes after the start." << endl;
			}
			else
			{
				//remainingMin = remainingMin - 60;
				cout << remainingHrs << ":" << remainingMin << " hours after the start." << endl;
				//cout << remainingMin << " minutes after the start." << endl;
			}
		}
		else
		{
			if (stdMin < examMin)
			{
				remainingMin = (60 - examMin) + stdMin;
			}
			cout << remainingHrs << ":" << remainingMin << " hours after the start." << endl;
		}
	}
	else if (stdHrs < examHrs)
	{
		remainingHrs = examHrs - stdHrs;
		remainingMin = stdMin - examMin;
		if (stdMin < examMin)
		{
			remainingMin = -(remainingMin);
		}
		if (remainingHrs == 1)
		{
			if (stdMin > examMin)
			{
				remainingMin = (60 - stdMin) + examMin;
				if (remainingMin <= 30)
				{
					cout << "On time!" << endl;
				}
				else
				{
					cout << "Early!" << endl;
				}
				cout << remainingMin << " minutes before the start." << endl;
			}
			else
			{
				cout << "Early" << endl;
				cout << remainingHrs << ":" << remainingMin << " hours before the start.";
			}
		}
		else
		{
				cout << "Early" << endl;
			cout << remainingHrs << ":" << remainingMin << " hours before the start." << endl;
		}
	}

	//cout << remainingHrs << endl;
	//cout << remainingMin << endl;


	return 0;
}