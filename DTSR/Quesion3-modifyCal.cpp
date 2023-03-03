//Exercise: learn how build a simple month calendar

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

bool isLeapYear(int &year){
	return year % 400 == 0 || year % 100 != 0 && year % 4 == 0;
}

void inputValidation(int &year, int &month){
	
	
	cout << "Enter calendar's year: ";
	cin >> year;

	while (cin.fail() || year < 1900 || year > 2050)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input!" << endl;
		system("pause");
		system("cls");
		cout << "Enter calendar's year: ";
		cin >> year;
	}
	cout << "Enter calendar's month: ";
	cin >> month;

	while (cin.fail() || month < 1 || month > 12)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input!" << endl;
		system("pause");
		system("cls");
		cout << "Enter calendar's year: " << year << endl;
		cout << "Enter calendar's month: ";
		cin >> month;
	}
}


void findDaysInMonth(int &month, int &days, int &year){
		if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		days = 30;
	}
	else if (month == 2)
	{
		if (isLeapYear(year))
		{
			//this means leap year
			days = 29;
		}
		else
		{
			days = 28;
		}
	}
	else
	{
		days = 31;
	}
}

void printDaysAndTitle(int &month, string &monthWord, int &year)
{
		switch (month)
	{
		case 1: monthWord = "January"; break;
		case 2: monthWord = "February"; break;
		case 3: monthWord = "March"; break;
		case 4: monthWord = "April"; break;
		case 5: monthWord = "May"; break;
		case 6: monthWord = "June"; break;
		case 7: monthWord = "July"; break;
		case 8: monthWord = "August"; break;
		case 9: monthWord = "September"; break;
		case 10: monthWord = "October"; break;
		case 11: monthWord = "November"; break;
		case 12: monthWord = "December"; break;
	}
	cout << endl << "\t\t\tCalendar Title : " << monthWord << " - " << year << endl;
	cout << string(116, '-') << endl;
	cout << setw(11) << "Sunday\t|" << setw(11) << "Monday\t|" << setw(11) << "Tuesday\t|";
	cout << setw(11) << "Wednesday\t|" << setw(11) << "Thursday\t|" << setw(11) << "Friday\t|";
	cout << setw(11) << "Saturday\t|";
	cout << endl << string(116, '-') << endl;
}




int main()
{
	//step 1: declare variables
	int month, year, days;
	string monthWord;

	//step 2: input (input validation)
	inputValidation(year, month);
	//step 3: process
	//3.1 find the days in that month
	findDaysInMonth(month, days, year);

	//step 4: output
	//4.1 print the heading and title
	printDaysAndTitle(month, monthWord, year);

	//4.2 print calendar body
	//4.2.1 find the first day location in the calendar
	unsigned a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2;
	//start day = 0 (on friday) ->convert to a more understandable location space
	int startday = ((31 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);
	switch (startday)
	{
		case 0: startday = 5; break; //friday
		case 1: startday = 6; break;//saturday
		case 2: startday = 0; break; //sunday
		case 3: startday = 1; break; //Monday
		case 4: startday = 2; break; //Tuesday
		case 5: startday = 3; break; //Wednesday
		case 6: startday = 4; break; //Thursday
	}
	//4.2.2 start to build the content
	int countPlaceForDay = 0;
	for (int i = 0; i < startday; i++)
	{
		cout << setw(11) << "\t|";
		countPlaceForDay++;
	}
	for (int i = 1; i <= days; i++)
	{
		cout << setw(11) << i << "\t|";
		countPlaceForDay++;
		if (countPlaceForDay % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl << string(116, '=') << endl;
	return 0;
}
