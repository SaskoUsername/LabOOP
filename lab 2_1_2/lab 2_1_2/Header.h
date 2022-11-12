// Сасько Максим КІ2-21-4 Лабораторна робота N3 - 3 
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <atlbase.h> 

using namespace std;

class Student;
class Pass;
class TradeUnion;

// Пункт 1
class AbstractClass
{
public:
	virtual void IdClass() = 0;
};

class University : public AbstractClass
{
private:
	// ПУнкт 17
	friend TradeUnion;
	string adress;
	int establishment;
public:

	int ReturnNumber();

	virtual void RetNum();

	virtual void PrintIdClass(void);

	int id = rand() % 10;

	// Пунтк 4
	virtual void UnivercityId();

	// пункт 6
	int Service_dynamic();
	//Пункт 6
	void Service_static();

	//Пункт 2
	void AbstractClass::IdClass()
	{
		cout << "Works" << endl;
	}

	string name = "Khnu";
	string city_establishment = "Khmelnytskyi";
	void Sort(int arr[]); 

	University();

	// Пункт 3
	/*~University()
	{
		cout << "Destructor is working!!" << endl;
	}*/

	virtual ~University();

	void Create();

	void Delete(BSTR obj1);
};

class TradeUnion : public University
{
private:
	//пункт 3
	University un13;
	int un_id = un13.id;
	void GetUnId(University &un);
protected: //Пункт 8
	int stud_id = rand();
	int GetStudentId();
public:
	string city;
	int duration_in_days;
	string student_name;
	int price_per_day = 200;
	int price;

	void GivePass(Pass& pass);

	void Returning();

	// Пункт 7
	void PrintTicket(string name);

	// Пункт 7
	void ShowTicket(string name);

	void PrintIdClass(void);
};

// Пункт 9,10
class Pass : public TradeUnion, University 
{
private:
	string c_depeture;
	string c_arrival;
	int h_depeture = rand() % 23;
	int h_arrival = rand() % 59;
	int pass_price;
	int pass_pr_per_day;
	string pass_stud;
	// Пункт 12
	using University::name;
	// Пункт 16
	friend void TradeUnion::GivePass(Pass& pass);
	
public:
	int s_id = GetStudentId();

	void PrintIdClass(void)
	{
		cout << "Object of Pass" << endl;
	}
	//Пункт 11
	Pass(string g_city, int g_price, string g_stud_name,int g_dur_days, int g_price_per_day );
	Pass();
	
	~Pass();
};

// Пункт 1
class Student
{
private:
	string surname = "Sasko";
	string speciality;
	const int date;
	string &speciality_ref;
	string city;
	//Пункт 20
	class Brain
	{
	public:
		void GetStudentsData(int date, int group, int course, string name);
	};

	Brain brain;
public:
	// Пункт 2
	string name = "Sausage";
	TradeUnion tu;
	int age = 0;
	int course;
	int group;
	int pay;
	int average = 0;
	
	//Пункт 20
	void GetStudent();

	void PrintTravel();

	//Пункт 19
	TradeUnion ChooseTravel();

	//Пункт 6
	void ShowTravel();

	//Пункт 10
	static int ReturnPayForTravel(int price);

	//Пункт 4
	Student();
	
	//Пункт 5
	Student(int g_group, int g_course = 4);

	//Пункт 9
	~Student();
	
	/*Student(int group = 4, int course = 2, int date = 12)
	{
		this->group = group;
		this->course = course;
		this->date = date;
	}*/

};

//Пункт 11
int CountAverAge(Student stud, int arr[]);

//Пункт 12 
int CountAverAge(Student& stud, int arr[], int size);

//Пункт 13
Student GetPay();

inline string Service(TradeUnion tu)
{
	string filename;
	cin >> filename;

	tu.PrintTicket(filename);
	tu.ShowTicket(filename);

	return  filename;
}

