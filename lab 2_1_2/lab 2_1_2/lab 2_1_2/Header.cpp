#include "Header.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int g_counter = 0;


void Student::GetStudent()
{
	brain.GetStudentsData(date, group, course, name);
}

void Student::PrintTravel()
{
	ofstream travel;
	travel.open("travel.txt");

	travel << "City: " << tu.city << '\n' << "Price: " << tu.price << "\n" << "Duration: " << tu.duration_in_days << " days";

	travel.close();
}

TradeUnion Student::ChooseTravel()
{
	cout << "Enter your city: ";
	cin >> tu.city;
	cout << "Choose duration of travel in days: ";
	cin >> tu.duration_in_days;
	tu.price = tu.duration_in_days * tu.price_per_day;
	tu.student_name = name;
	PrintTravel();

	return tu;
}

void Student::ShowTravel()
{
	ifstream travel("travel.txt");
	string travel_text;

	if (travel.is_open())
	{
		while (getline(travel, travel_text))
		{
			cout << travel_text << "\n";
		}

		travel.close();
	}
}

int Student::ReturnPayForTravel(int price)
{
	static int s_pay = price;
	return s_pay;
}

TradeUnion Student::TakeTicket()
{
	tu = brain.TakeTicket(ChooseTravel());

	return tu;
}

Student::Student() : date(12), speciality_ref(speciality)
{
	city = "Zorya";
}

Student::Student(int g_group, int g_course) : date(12), speciality_ref(speciality)
{
	this->group = g_group;
	this->course = g_course;
}

Student::~Student()
{
	g_counter++;
	cout << "\n" << g_counter << " object of class destroyed:";
}

void University::ChooseTrav(TradeUnion tu2)
{
	tu2 = stud.ChooseTravel();
}

string University::GetStudentName(Student stud1)
{
	return stud1.name;
}

void University::TakeTicket()
{
	tu = stud.TakeTicket();
}

void University::Sort(int arr[])
{
	vector<int> ages;
	for (int i = 0; i < 5; i++)
	{
		ages.push_back(arr[i]);
	}

	sort(ages.begin(), ages.end());

	for (auto x : ages)
	{
		cout << x << " ";
	}
}

void University::PrintTicket(string s_name)
{
	ofstream ticket;
	ticket.open("ticket.txt");
	tu.price = tu.duration_in_days * tu.price_per_day;

	ticket << "Price of travel: " << tu.price << '\n' << "Student name: " << s_name << '\n' << "City: " << tu.city << '\n' << "Duration of travel: " << tu.duration_in_days;

	ticket.close();
}

void University::ShowTicket()
{
	ifstream ticket("ticket.txt");
	string ticket_text;

	if (ticket.is_open())
	{
		while (getline(ticket, ticket_text))
		{
			cout << ticket_text << "\n";
		}

		ticket.close();
	}
}

int CountAverAge(Student stud, int arr[])
{
	for (int i = 0; i < 5; i++)
	{
		stud.average += arr[i];
	}
	stud.average /= 5;

	return stud.average;
}

int CountAverAge(Student& stud, int arr[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		stud.average += arr[i];
	}
	stud.average /= 5;

	return stud.average;
}

Student GetPay()
{
	cout << Student::ReturnPayForTravel(2400);
	return Student::ReturnPayForTravel(2400);
}
