#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class University;
class Student;

struct TradeUnion 
{
public:
	string city;
	int duration_in_days;
	string student_name;
	int price_per_day = 200;
	int price;
};

// ����� 1
class Student
{
private:
	string surname = "Sasko";
	string speciality;
	const int date;
	string &speciality_ref;
	string city;
	//����� 20
	class Brain
	{
	public:
		void GetStudentsData(int date, int group, int course, string name)
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

		TradeUnion TakeTicket(TradeUnion tu1)
		{
			cout << "Getting all data about tarvel... " << endl;

			return tu1;
		}
	};

	Brain brain;
public:
	// ����� 2
	string name = "Sausage";
	TradeUnion tu;
	int age = 0;
	int course;
	int group;
	int average = 0;
	int pay;
	
	//����� 20
	void GetStudent();

	void PrintTravel();

	//����� 19
	TradeUnion ChooseTravel();

	//����� 6
	void ShowTravel();

	//����� 10
	static int ReturnPayForTravel(int price);

	//����� 18
	TradeUnion TakeTicket();

	//����� 4
	Student();
	
	//����� 5
	Student(int g_group, int g_course = 4);

	//����� 9
	~Student();
	
	/*Student(int group = 4, int course = 2, int date = 12)
	{
		this->group = group;
		this->course = course;
		this->date = date;
	}*/

};

class University
{
private:
	string adress;
	string city_establishment;
	int establishment;
	Student stud;
public:
	string name;
	TradeUnion tu;

	// ����� 4
	void ChooseTrav(TradeUnion tu2);

	string GetStudentName(Student stud1);

	void TakeTicket();

	void Sort(int arr[]); //����� 12

	// ����� 7
	void PrintTicket(string s_name);

	// ����� 7
	void ShowTicket();
};

//����� 11
int CountAverAge(Student stud, int arr[]);

//����� 12 
int CountAverAge(Student& stud, int arr[], int size);

//����� 13
Student GetPay();

