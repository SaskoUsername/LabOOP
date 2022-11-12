#include "Header.h"
#include "iostream"

using namespace std;

void main()
{
	TradeUnion main_tu;

	University *universities[2];
	Student students[2];

	// Пункт 8
	University *un = new University();
	University* un2 = new University();
	University* un3 = new University();
	University* un4 = new University();
	University* un5 = new University();
	Student stud, stud2, stud3, stud4, stud5;

	stud.age = 17;
	stud2.age = 18;
	stud3.age = 24;
	stud4.age = 19;
	stud5.age = 17;

	int age_arr[] = {stud.age, stud2.age, stud3.age, stud4.age, stud5.age};
	int size = sizeof(age_arr) / sizeof(age_arr[0]);

	universities[0] = un;
	universities[1] = un2;
	//students[0] = stud3;

	// Пункт 14
	Student data(2);
	/*Student data(2, 7);
	Student data;*/

	/*un->ChooseTrav(main_tu);*/
	un->TakeTicket();
	stud.ShowTravel();

	// Пункт 10
	//stud.pay = stud.ReturnPayForTravel(8);
	//cout << "\n" << "Pay for travel: " << stud.pay;

	
	// Пункт 9
	data.GetStudent();
	/*main_tu = un->ChooseTravel(stud);
	un->PrintTicket();
	un->ShowTicket();*/
	//stud.ReturnPayForTravel(main_tu.price);
	//cout << CountAverAge(stud, age_arr, size);

	//Name();
	
	/*universities[0]->ShowTicket()*/; //Пункт 11
	/*un->Sort(age_arr);*/
	//students[0].PrintTravel();
	//students[0].ShowTravel();
	//universities[0]->GetTicket();
	//universities[0]->GetTicket(stud);

}