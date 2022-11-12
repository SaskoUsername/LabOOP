// ������ ������ ʲ2-21-4 ����������� ������ N3 - 3 
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

// ����� 1
class AbstractClass
{
public:
	virtual void IdClass() = 0;
};

class University : public AbstractClass
{
private:
	// ����� 17
	friend TradeUnion;
	string adress;
	int establishment;
public:

	int ReturnNumber();

	virtual void RetNum();

	virtual void PrintIdClass(void);

	int id = rand() % 10;

	// ����� 4
	virtual void UnivercityId();

	// ����� 6
	int Service_dynamic();
	//����� 6
	void Service_static();

	//����� 2
	void AbstractClass::IdClass()
	{
		cout << "Works" << endl;
	}

	string name = "Khnu";
	string city_establishment = "Khmelnytskyi";
	void Sort(int arr[]); 

	University();

	// ����� 3
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
	//����� 3
	University un13;
	int un_id = un13.id;
	void GetUnId(University &un);
protected: //����� 8
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

	// ����� 7
	void PrintTicket(string name);

	// ����� 7
	void ShowTicket(string name);

	void PrintIdClass(void);
};

// ����� 9,10
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
	// ����� 12
	using University::name;
	// ����� 16
	friend void TradeUnion::GivePass(Pass& pass);
	
public:
	int s_id = GetStudentId();

	void PrintIdClass(void)
	{
		cout << "Object of Pass" << endl;
	}
	//����� 11
	Pass(string g_city, int g_price, string g_stud_name,int g_dur_days, int g_price_per_day );
	Pass();
	
	~Pass();
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
		void GetStudentsData(int date, int group, int course, string name);
	};

	Brain brain;
public:
	// ����� 2
	string name = "Sausage";
	TradeUnion tu;
	int age = 0;
	int course;
	int group;
	int pay;
	int average = 0;
	
	//����� 20
	void GetStudent();

	void PrintTravel();

	//����� 19
	TradeUnion ChooseTravel();

	//����� 6
	void ShowTravel();

	//����� 10
	static int ReturnPayForTravel(int price);

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

//����� 11
int CountAverAge(Student stud, int arr[]);

//����� 12 
int CountAverAge(Student& stud, int arr[], int size);

//����� 13
Student GetPay();

inline string Service(TradeUnion tu)
{
	string filename;
	cin >> filename;

	tu.PrintTicket(filename);
	tu.ShowTicket(filename);

	return  filename;
}

