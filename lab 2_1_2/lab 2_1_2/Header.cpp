// Сасько Максим КІ2-21-4 Лабораторна робота N3 - 3 рівень 
#include "Header.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <atlbase.h> 

using namespace std;
int g_counter = 0;
string city_est;

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

int University::ReturnNumber()
{
	return id;
}

void University::RetNum()
{
	cout << University::ReturnNumber() << endl;
}

void University::PrintIdClass(void)
{
	cout << "Object class" << endl;
}

void University::UnivercityId()
{
	cout << "The univercity id is: " << id << endl;
}

int University::Service_dynamic()
{
	int arr[10], size = 10, i, elem, j, found = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;

	}

	for (i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\nEnter Element to Delete: ";
	cin >> elem;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == elem)
		{
			for (j = i; j < (size - 1); j++)
			{
				arr[j] = arr[j + 1];
			}

			found++;
			i--;
			size--;
		}
	}

	if (found == 0)
	{
		cout << "\nElement doesn't found in the Array!";
	}

	else
	{
		cout << "\nElement Deleted Successfully!";

	}

	cout << endl;

	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return arr[i];
}

void University::Service_static()
{
	int arr[] = { 1, 7, 8, 5, 242, 3 };


	int index;
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "Enter index " << endl;
	cin >> index;
	memmove(&arr[index], &arr[index + 1], size - (index + 1));
	arr[--size] = 0;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
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

University::University()
{
	cout << "Constructor created!" << endl;
}

University::~University()
{
	cout << "Virtual destructor is working!" << endl;

}

void University::Create()
{
	HRESULT createElement(
		BSTR object1,
		IXMLDOMElement * *ppElement
	);
	exit;
}

void University::Delete(BSTR obj1)
{
	delete[] obj1;

}

void TradeUnion::PrintTicket(string name)
{
	ofstream ticket;
	ticket.open(name);
	price = duration_in_days * price_per_day;

	ticket << "Price of travel: " << price << '\n' << "Student name: " << student_name << '\n' << "City: " << city << '\n' << "Duration of travel: " << duration_in_days;

	ticket.close();
}

void TradeUnion::ShowTicket(string name)
{
	ifstream ticket(name);
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

void TradeUnion::PrintIdClass(void)
{
	cout << "Object of TradeUnion" << endl;
}

void TradeUnion::GivePass(Pass &pass)
{
	cout << "Enter a city of depeture:" << endl;
	cin >> pass.c_depeture;
	cout << "City of depeture: " << pass.c_depeture << endl;
	cout << "City of arrival: " << pass.c_arrival << endl;
	cout << "Pass price: " << pass.pass_price << endl;
	cout << "Time of arrival: " << pass.h_depeture << ":" << pass.h_arrival << endl;
	cout << "University: " << pass.name << endl;
	cout << "Student id: " << pass.s_id << endl;
}

void TradeUnion::Returning()
{
	cout << TradeUnion::ReturnNumber() << endl;
}

void TradeUnion::GetUnId(University& un)
{
	cout << "Id of University: " << un.id << endl;
}

int TradeUnion::GetStudentId()
{
	cout << "Getting student id...\n" ;
	return stud_id;
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

void Student::Brain::GetStudentsData(int date, int group, int course, string name)
{
	int id;
	cout << "Enter students id: ";

	cout << "1 - Get student date" << "\n";
	cout << "2 - Get student group" << "\n";
	cout << "3 - Get student course" << "\n";
	cout << "4 - Get student name" << "\n";
	cout << "5 - Exit" << "\n";

	do
	{
		cin >> id;

		switch (id)
		{
		case 1:
			cout << "Date: " << date << "\n";
			break;
		case 2:
			cout << "Group: " << group << "\n";
			break;
		case 3:
			cout << "Course: " << course << "\n";
			break;
		case 4:
			cout << "Name: " << name << "\n";
			break;
		case 5:
			break;
		default:
			cout << "Enter another id!";
		}

	} while (id != 5);

}


Pass::Pass(string g_city, int g_price, string g_stud_name, int g_dur_days, int g_price_per_day)
{
	c_arrival = g_city;
	pass_price = g_price;
	pass_stud = g_stud_name;
	
}

Pass::Pass()
{
	pass_stud = "Sasko";
}

Pass::~Pass()
{
	cout << "Constructor deleted" << endl;
}


