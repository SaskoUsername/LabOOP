#include "Header.h"
#include "iostream"

using namespace std;

TradeUnion* Create()
{
	TradeUnion* tu1 = new TradeUnion();

	return tu1;
}

void Delete(TradeUnion* tu)
{
	delete tu;
}

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

	University* univ = new TradeUnion;

	stud.age = 17;
	stud2.age = 18;
	stud3.age = 24;
	stud4.age = 19;
	stud5.age = 17;

	int age_arr[] = {stud.age, stud2.age, stud3.age, stud4.age, stud5.age};
	int size = sizeof(age_arr) / sizeof(age_arr[0]);

	Pass pass;
	
	universities[0] = un;
	universities[1] = un2;
	//students[0] = stud3;

	// Пункт 14
	Student data(2);
	/*Student data(2, 7);
	Student data;*/
	int menu_select;
	BSTR object1 = 0;

	cout << "1 --- Create" << endl;
	cout << "2 --- Delete" << endl;
	cout << "3 --- Exit" << endl;
	
	do
	{
		cout << "Enter point of menu: " << endl;

		cin >> menu_select;


		switch (menu_select)
		{
		case 1:
			un->Create();
			cout << "Object created: "  << endl;
			break;

		case 2:

			un->Delete(object1);
			cout << "Object deleted: " << endl;
			break;

		default:
			cout << "There is no variant" << endl;
			break;
		}

	} while (menu_select != 3);
	
	// Пункт 9,10
	un->PrintIdClass();
	un = &main_tu;
	un->PrintIdClass();
	pass.PrintIdClass();
	
	// Пункт 11
	cout << univ->ReturnNumber() << endl;
	cout << univ->University::ReturnNumber() << endl;

	// Пунтк 5, 6
	/*try
	{
		throw un->Service_dynamic();

	}
	catch (int num)
	{
		cerr << "deleted number: " << num << endl;
	}*/

	/*un->ChooseTrav(main_tu);*/
	//stud.ShowTravel();

	//// Пункт 10
	////stud.pay = stud.ReturnPayForTravel(8);
	////cout << "\n" << "Pay for travel: " << stud.pay;

	//// Пункт 9
	//data.GetStudent();
	main_tu = stud.ChooseTravel();

	//Pass new_pass(main_tu.city, main_tu.price, main_tu.student_name, main_tu.duration_in_days, main_tu.price_per_day);

	//main_tu.GivePass(new_pass);

	//un->UnivercityId();

	////un->Service_static();
	try
	{
		throw Service(main_tu);
	}
	catch (string file_name)
	{

		cerr << "Read and write file successfully!";
	}
	
	/*main_tu = un->ChooseTravel(stud);
	un->PrintTicket();
	un->ShowTicket();*/
	//stud.ReturnPayForTravel(main_tu.price);
	//cout << CountAverAge(stud, age_arr, size);

	//Name();
	
	/*universities[0]->ShowTicket()*/ //Пункт 11
	/*un->Sort(age_arr);*/
	//students[0].PrintTravel();
	//students[0].ShowTravel();
	//universities[0]->GetTicket();
	//universities[0]->GetTicket(stud);
}
