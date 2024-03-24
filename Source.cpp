#include <iostream>
#include<windows.h>
#include "gotoxy.h"
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Employinfo {
	string Fname, Mname, Dob, Address, Position, email, contact, Id, Pin, taxes;
	float Gpay = 0, wDay=0, Pnum=0, Psal=0, Ttax=0, bene=0, Npay=0;

}employee[10];
struct Archive {
	string Fname, Mname, Dob, Address, Position, email, contact, Id, Pin, taxes;
	float Gpay = 0, wDay = 0, Pnum = 0, Psal = 0, Ttax = 0, bene = 0, Npay = 0;

}arch[10];

int Psalary[6] = { 0,600,500,400,300,300 };
float total;
int benefits = 300;
string Pos[6] = { " ","Manager","Supervisor","TeamLeader","fgv","uhvjbi" };

int opt = 0, Ecount = 0, sto = 0;
string user, pin;
void search();
void addEm();
void uppin();
void archive();
//void save();
void admin();
void border()
{
	for (int i = 0; i < 51; i++)
	{
		gotoxy(35 + i, 1);
		cout << char(205);
		gotoxy(35 + i, 4);
		cout << char(205);
		gotoxy(35 + i, 28);
		cout << char(205);
	}
	for (int i = 0; i < 28; i++)
	{
		gotoxy(35, 1 + i);
		cout << char(219);
		gotoxy(86, 1 + i);
		cout << char(219);

	}
}
void sbr()
{
	for (int i = 0; i < 85; i++)
	{
		gotoxy(20 + i, 3);
		cout << char(205);
		gotoxy(20 + i, 5);
		cout << char(205);
		gotoxy(20 + i, 28);
		cout << char(205);
	}
	for (int i = 0; i < 26; i++)
	{
		gotoxy(20, 3 + i);
		cout << char(219);
		gotoxy(104, 3 + i);
		cout << char(219);

	}
}

int main()
{
	admin();
	gotoxy(1, 29);
	system("pause");
}
void admin()
{
	system("cls");
	// load();
	gotoxy(50, 5);
	cout << "EMPLOYEE  INFORMATION";
	gotoxy(52, 6);
	cout << "MANAGEMENT SYSTEM";
	gotoxy(57, 9);
	cout << "MAIN MENU";
	int x, style = 205;
	gotoxy(50, 10);
	for (x = 3; x <= 24; x++)
	{
		printf("%c", style);
	}
	gotoxy(50, 11);
	cout << "[1] Add Employee Record";
	gotoxy(50, 12);
	cout << "[2] Search Employee Record";
	gotoxy(50, 13);
	cout << "[3] Update Employee Record";
	gotoxy(50, 14);
	cout << "[4] Archive Employee Record";
	gotoxy(50, 15);
	cout << "[5] Help";
	gotoxy(50, 16);
	cout << "[6] Exit";



	/* gotoxy(103, 20);
	 cout << "Description";
	 gotoxy(84, 21);
	 for (x = 84; x <= 118; x++)
	 {
		 printf("%c", style);
	 }
	 gotoxy(84, 22);
	 cout << "Contribution";
	 gotoxy(86, 23);
	 cout << "Pag ibig - P100";
	 gotoxy(86, 24);
	 cout << "SSS - P100";
	 gotoxy(86, 25);
	 cout << "PhilHealth - P100";
	 gotoxy(84, 26);
	 cout << "Tax Computations";
	 gotoxy(86, 27);
	 cout << "15% - Below P10,000(Salary)";
	 gotoxy(86, 28);
	 cout << "20% - Above P10,001 and Below P15,000(Salary)";
	 gotoxy(86, 29);
	 cout << "25% - Above P15,001 and Below P20,000(Salary)";
	 gotoxy(86, 30);
	 cout << "30% - Above P20,001(Salary)";*/



	gotoxy(50, 18);
	cout << "-->  "; cin >> opt;

	switch (opt)
	{
	case 1: addEm(); break;
	case 2: search(); break;
	case 3: uppin(); break;
	case 4:  archive(); break;
	case 5: cout << "hihi"; break;
	default:
		gotoxy(43, 30);
		cout << "Invalid Input";
		gotoxy(43, 31);
		system("pause");
		admin();
	}
}
void addEm()
{
	system("cls");
	border();
	cin.ignore();
	int y = 6;
	for (int i = 0; i < 3; i++)
	{
		gotoxy(36, y);
		cout << "--------------------------------------------------";
		y += 2;
	}
	gotoxy(43, 0);
	cout << "EMPLOYEE INFORMATION MANAGEMENT SYSTEM";
	gotoxy(52, 2);
	cout << "ADD EMPLOYEE RECORD";
	gotoxy(37, 5);
	cout << "Enter Full Name  : ";
	gotoxy(37, 7);
	cout << "Enter Adress : ";
	gotoxy(37, 9);
	cout << "Enter birthday : ";

	gotoxy(37, 11);
	cout << "Position List";
	gotoxy(37, 12);
	cout << "[1] Manager";
	gotoxy(37, 13);
	cout << "[2] Supervisor";
	gotoxy(37, 14);
	cout << "[3] TeamLeader";
	gotoxy(37, 15);
	cout << "[4] isip kayo";
	gotoxy(37, 16);
	cout << "[5] Dmga position";
	gotoxy(37, 17);
	cout << "Enter Position : ";
	y = 18;
	for (int i = 0; i < 5; i++)
	{
		gotoxy(36, y);
		cout << "--------------------------------------------------";
		y += 2;
	}
	gotoxy(37, 19);
	cout << "How many Day of Work per week : ";
	gotoxy(37, 21);
	cout << "Contact no. : ";
	gotoxy(37, 23);
	cout << "Email address : ";
	gotoxy(37, 25);
	cout << "Enter ID : ";
	gotoxy(37, 27);
	cout << "Enter pin : ";

	gotoxy(56, 5);
	getline(cin, employee[Ecount].Fname);
	gotoxy(56, 7);
	getline(cin, employee[Ecount].Address);
	gotoxy(56, 9);
	getline(cin, employee[Ecount].Dob);
	gotoxy(54, 17);
	cin >> opt;

	switch (opt) {
	case 1: break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	default: cout << "\nInvalid Input\n";
		system("pause");
		admin();
	}

	employee[Ecount].Psal = Psalary[opt];
	employee[Ecount].Position = Pos[opt];

	gotoxy(70, 19);
	cin >> employee[Ecount].wDay;
	cin.ignore();

	employee[Ecount].Gpay = employee[Ecount].Psal * employee[Ecount].wDay;


	if (employee[Ecount].Gpay <= 10000) {
		employee[Ecount].taxes = "15%";
		employee[Ecount].Ttax = (employee[Ecount].Gpay * .15) + benefits;
	}
	else if (employee[Ecount].Gpay >= 10001 && employee[Ecount].Gpay <= 15000) {
		employee[Ecount].taxes = "20%";
		employee[Ecount].Ttax = (employee[Ecount].Gpay * .15) + benefits;
	}
	else if (employee[Ecount].Gpay >= 15001 && employee[Ecount].Gpay <= 20000) {
		employee[Ecount].taxes = "25%";
		employee[Ecount].Ttax = (employee[Ecount].Gpay * .15) + benefits;
	}
	else if (employee[Ecount].Gpay >= 20001) {
		employee[Ecount].taxes = "30%";
		employee[Ecount].Ttax = (employee[Ecount].Gpay * .15) + benefits;
	}

	employee[Ecount].Npay = employee[Ecount].Gpay - employee[Ecount].Ttax;

	gotoxy(52, 21);
	getline(cin, employee[Ecount].contact);
	gotoxy(54, 23);
	getline(cin, employee[Ecount].email);
	gotoxy(48, 25);
	cin >> user;

	for (int i = 0; i < Ecount; i++) {
		if (user == employee[i].Id) {
			gotoxy(45, 22);
			cout << "There same id on other employee";
			gotoxy(45, 23);
			system("pause");
			admin();
		}

	}
	gotoxy(50, 27);
	cin >> pin;

	for (int i = 0; i < Ecount; i++) {
		if (pin == employee[i].Pin) {
			gotoxy(45, 22);
			cout << "There same id on other employee";
			gotoxy(45, 23);
			system("pause");
			admin();
		}

	}

	employee[Ecount].Id = user;
	employee[Ecount].Pin = pin;


	gotoxy(52, 23);
	cout << "Employee Added!";
	gotoxy(52, 24);
	system("pause");
	Ecount++;
	// save();
	admin();

}
void search()
{
	string id;
	system("cls");
	// load();
	sbr();
	gotoxy(48, 4);
	cout << "SEARCH EMPLOYEE INFORMATION";
	gotoxy(23, 6);
	cout << "Records ";
	gotoxy(23, 7);
	cout << "No.";
	gotoxy(32, 7);
	cout << "FullName";
	gotoxy(60, 7);
	cout << "Position";
	gotoxy(75, 7);
	cout << "ID";
	gotoxy(80, 7);
	cout << "PiN\n";
	for (int i = 0; i < Ecount; i++)
	{
		gotoxy(23, 8 + i);
		cout << "[" << i + 1 << "]";
		gotoxy(30, 8 + i);
		cout << employee[i].Fname;
		gotoxy(60, 8 + i);
		cout << employee[i].Position;
		gotoxy(75, 8 + i);
		cout << employee[i].Id;
		gotoxy(80, 8 + i);
		cout << employee[i].Pin << endl;
	}
	gotoxy(35, 26);
	cout << "Enter Id to search and view all information. (     )";
	gotoxy(81, 26);
	cin >> id;
	string name, add, dob, Taxes, bday, pos,Id,pin ;
	float psal=0, wday=0, gpay=0, npay=0, ttax = 0;
	/* for (int i = 0; i < Ecount; i++) {

		 if (id == employee[i].Id) {
			 system("cls");
			 sbr();
			 gotoxy(52, 7);
			 cout << "Employee full information ";
			 gotoxy(43, 9);
			 cout << "Fullname : " << employee[i].Fname;
			 gotoxy(43, 10);
			 cout << "Address  :" << employee[i].Address;
			 gotoxy(43, 11);
			 cout << "Birthday : " << employee[i].Dob;
			 gotoxy(43, 12);
			 cout << "Position : " << employee[i].Position;
			 gotoxy(43, 13);
			 cout << "Per Hour : P" << employee[i].Psal;
			 gotoxy(43, 14);
			 cout << "WorkDay : " << employee[i].wDay;
			 gotoxy(43, 15);
			 cout << "Gross Pay : P" << employee[i].Gpay;
			 gotoxy(43, 16);
			 cout << "Tax Percentage : " << employee[i].taxes;
			 gotoxy(43, 17);
			 cout << "Contributions : ";
			 gotoxy(45, 18);
			 cout << "Phil Health - P100";
			 gotoxy(45, 19);
			 cout << "Pag ibig - P100";
			 gotoxy(45, 20);
			 cout << "SSS -100";
			 gotoxy(43, 21);
			 cout << "Tax : P" << employee[i].Ttax;
			 gotoxy(43, 22);
			 cout << "Net Pay : P" << employee[i].Npay;
			 gotoxy(46, 24);
			 cout << "To Logout ";
			 system("pause");
			 main();
			 break;
		 }
	 }*/
	for (int i = 0; i < Ecount; i++) {

		if (id == employee[i].Id) {
			system("cls");
			sbr();

			name = employee[i].Fname;
			add = employee[i].Address;
			dob = employee[i].Dob;
			pos = employee[i].Position;
			psal = employee[i].Psal;
			wday = employee[i].wDay;
			gpay = employee[i].Gpay;
			Taxes = employee[i].taxes;
			ttax = employee[i].Ttax;
			npay = employee[i].Npay;
			Id = employee[i].Id;
			pin = employee[i].Pin;

			arch[sto].Fname = name;
			arch[sto].Address = add;
			arch[sto].Dob = dob;
			arch[sto].Position = pos;
			arch[sto].Psal = psal;
			arch[sto].wDay = wday;
			arch[sto].Gpay = gpay;
			arch[sto].taxes = Taxes;
			arch[sto].Ttax = ttax;
			arch[sto].Npay = npay;
			arch[sto].Id = Id;
			arch[sto].Pin = pin;
			Ecount--;
			sto++;

			gotoxy(46, 24);
			cout << "To Logout ";
			system("pause");
			main();
			break;
		}
	}

 gotoxy(46, 12);
 cout << "Incorrect User/Pin ";
 gotoxy(46, 13);
 system("pause");
 main();




 }
 void uppin()
 {
	 system("cls");
	 string pin, Pinn, upin;
	 gotoxy(35, 26);
	 cout << "Enter Id to search and view all information. (     )";
	 gotoxy(81, 26);
	 cin >> pin;
	 for (int i = 0; i < Ecount; i++) {

		 if (pin == employee[i].Pin) {
			 system("cls");
			 sbr();
			 gotoxy(52, 7);
			 cout << "Current pin  " << employee[i].Pin;
			 gotoxy(35, 10);
			 cout << "Enter updated pin :";
			 gotoxy(55, 10);
			 cin >> upin;
			 for (int i = 0; i < Ecount; i++) {
				 if (upin == employee[i].Pin) {
					 gotoxy(45, 27);
					 cout << "Same Pin Other Employee";
					 gotoxy(45, 28);
					 system("pause");
					 main();
				 }
			 }
			 employee[i].Pin = upin;

			 gotoxy(45, 27);
			 cout << "Pin Updated Successful";
			 gotoxy(45, 28);
			 system("Pause");
			 main();
		 }
		 else {
			 gotoxy(45, 27);
			 cout << "Employee Record Not Found";
			 gotoxy(45, 28);
			 system("pause");
		 }
	 }
 }
 void archive()
 {
	 string id, y;
	 system("cls");
	 // load();
	 sbr();
	 gotoxy(55, 4);
	 cout << "ARCHIVE";
	 gotoxy(23, 6);
	 cout << "Records ";
	 gotoxy(23, 7);
	 cout << "No.";
	 gotoxy(32, 7);
	 cout << "FullName";
	 gotoxy(60, 7);
	 cout << "Position";
	 gotoxy(75, 7);
	 cout << "ID";
	 gotoxy(80, 7);
	 cout << "PiN\n";
	 for (int i = 0; i < sto; i++)
	 {
		 gotoxy(23, 8 + i);
		 cout << "[" << i + 1 << "]";
		 gotoxy(30, 8 + i);
		 cout << arch[i].Fname;
		 gotoxy(60, 8 + i);
		 cout << arch[i].Address;
		 gotoxy(75, 8 + i);
		 cout << arch[i].Dob;
		 gotoxy(80, 8 + i);
		 cout << arch[i].Position;
	 }

	 gotoxy(35, 26);
	 cout << "Enter Id to search and view all information. (     )";
	 gotoxy(81, 26);
	 cin >> id;
	 for (int i = 0; i < sto; i++) {

		 if (id == arch[i].Id) {
			 system("cls");
			 sbr();
			 gotoxy(52, 7);
			 cout << "Employee full information ";
			 gotoxy(43, 9);
			 cout << "Fullname : " << arch[i].Fname;
			 gotoxy(43, 10);
			 cout << "Address  :" << arch[i].Address;
			 gotoxy(43, 11);
			 cout << "Birthday : " << arch[i].Dob;
			 gotoxy(43, 12);
			 cout << "Position : " << arch[i].Position;
			 gotoxy(43, 13);
			 cout << "Per Hour : P" << arch[i].Psal;
			 gotoxy(43, 14);
			 cout << "WorkDay : " << arch[i].wDay;
			 gotoxy(43, 15);
			 cout << "Gross Pay : P" << arch[i].Gpay;
			 gotoxy(43, 16);
			 cout << "Tax Percentage : " << arch[i].taxes;
			 gotoxy(43, 17);
			 cout << "Contributions : ";
			 gotoxy(45, 18);
			 cout << "Phil Health - P100";
			 gotoxy(45, 19);
			 cout << "Pag ibig - P100";
			 gotoxy(45, 20);
			 cout << "SSS -100";
			 gotoxy(43, 21);
			 cout << "Tax : P" << arch[i].Ttax;
			 gotoxy(43, 22);
			 cout << "Net Pay : P" << arch[i].Npay;
			 system("pause");
			 main();
		 }
	 }
	



	 gotoxy(46, 12);
	 cout << "Incorrect User/Pin ";
	 gotoxy(46, 13);
	 system("pause");
	 main();

 }
