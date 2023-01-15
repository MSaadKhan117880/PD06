#include<iostream>
using namespace std;

float CalculateTotalMarks(float, float, float, float, float);
float CalculatePercentage(float);

int main()
{
	string nameOfStd;
	float mark1;
	float mark2;
	float mark3;
	float mark4;
	float mark5;

	cout << "Enter the name of the Student: ";
	cin >> nameOfStd;

	cout << "Enter the marks of English (Out of 100): ";
	cin >> mark1;
	cout << "Enter the marks of Maths (Out of 100): ";
	cin >> mark2;
	cout << "Enter the marks of Chemistry (Out of 100): ";
	cin >> mark3;
	cout << "Enter the marks of Social Sciences (Out of 100): ";
	cin >> mark4;
	cout << "Enter the marks of Biology (Out of 100): ";
	cin >> mark5;

	float totalMarks;
	float percentage;

	totalMarks = CalculateTotalMarks(mark1, mark2, mark3, mark4, mark5);
	percentage = CalculatePercentage(totalMarks);

	cout << "======Student's Name = " << nameOfStd << " =========" << endl;

	if (percentage < 40)
	{
		cout << "Grade = F" << endl;
	}

	else if (percentage <= 50)
	{
		cout << "Grade = D" << endl;
	}

	else if (percentage <= 60)
	{
		cout << "Grade = C" << endl;
	}
	else if (percentage <= 70)
	{
		cout << "Grade = B" << endl;
	}
	else if (percentage <= 80)
	{
		cout << "Grade = B+" << endl;
	}
	else if (percentage <= 90)
	{
		cout << "Grade = A" << endl;
	}
	else if (percentage <= 100)
	{
		cout << "Grade = A+" << endl;
	}

	return 0;
}

float CalculateTotalMarks(float m1, float m2, float m3, float m4, float m5)
{
	float totalMarks;
	totalMarks = m1 + m2 + m3 + m4 + m5;
	return totalMarks;
}

float CalculatePercentage(float total_marks)
{
	float percentage;
	percentage = (total_marks / 500.0) * 100.0;
	return percentage;
}