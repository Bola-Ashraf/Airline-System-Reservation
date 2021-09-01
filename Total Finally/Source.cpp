#include<iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

bool security()
{
	string username, password, un, pw;

	cout << "Enter Username : ";
	cin >> username;
	cout << "Enter Password : ";
	cin >> password;

	ifstream read(username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}

}

struct properites
{

	/*

	fn = flight number .
	sn = seat number .

	*/
	string name, date, time1, time2;
	int fn = 0, sn = 0;

};

int main()
{
	// make an array to country .
	string country[7] = { "Spain" ,"France" ,"Germany" ,"Italy" ,"Egypt" ,"India" ,"Saudi" };

	// city in spain .
	string Spain[2] = { "Barcelona" ,"Madrid" };
	// intialization Barcelona properites trip 1 .
	properites Barcelona1;
	Barcelona1.name = "Barcelona";
	Barcelona1.fn = 1;
	Barcelona1.sn = 10;
	Barcelona1.date = "19/6/2021";
	Barcelona1.time1 = "6:00AM";
	Barcelona1.time2 = "2:00PM";
	// intialization Barcelona properites trip 2 .
	properites Barcelona2;
	Barcelona2.name = "Barcelona";
	Barcelona2.fn = 2;
	Barcelona2.sn = 5;
	Barcelona2.date = "19/6/2021";
	Barcelona2.time1 = "9:00AM";
	Barcelona2.time2 = "5:00PM";
	// intialization Madrid properites trip 1 .
	properites Madrid1;
	Madrid1.name = "Madrid";
	Madrid1.fn = 3;
	Madrid1.sn = 7;
	Madrid1.date = "20/6/2021";
	Madrid1.time1 = "7:30AM";
	Madrid1.time2 = "3:00PM";
	// intialization Madrid properites trip 2 .
	properites Madrid2;
	Madrid2.name = "Madrid";
	Madrid2.fn = 4;
	Madrid2.sn = 7;
	Madrid2.date = "20/6/2021";
	Madrid2.time1 = "10:30AM";
	Madrid2.time2 = "5:00PM";

	// city in France .
	string France[2] = { "Paris" ,"Lyon" };
	// intialization Paris properites trip 1 .
	properites Paris1;
	Paris1.name = "Paris";
	Paris1.fn = 5;
	Paris1.sn = 12;
	Paris1.date = "21/6/2021";
	Paris1.time1 = "8:00AM";
	Paris1.time2 = "3:30PM";
	// intialization Paris properites trip 2 .
	properites Paris2;
	Paris2.name = "Paris";
	Paris2.fn = 6;
	Paris2.sn = 11;
	Paris2.date = "21/6/2021";
	Paris2.time1 = "6:30AM";
	Paris2.time2 = "1:00PM";
	// intialization Lyon properites trip 1 .
	properites Lyon1;
	Lyon1.name = "Lyon";
	Lyon1.fn = 7;
	Lyon1.sn = 8;
	Lyon1.date = "22/6/2021";
	Lyon1.time1 = "7:00AM";
	Lyon1.time2 = "2:30PM";
	// intialization Lyon properites trip 2 .
	properites Lyon2;
	Lyon2.name = "Lyon";
	Lyon2.fn = 8;
	Lyon2.sn = 13;
	Lyon2.date = "22/6/2021";
	Lyon2.time1 = "10:00AM";
	Lyon2.time2 = "6:30PM";

	// city in Germany .
	string Germany[2] = { "Berlin" , "Munich" };
	// intialization Berlin properites trip 1 .
	properites Berlin1;
	Berlin1.name = "Berlin";
	Berlin1.fn = 9;
	Berlin1.sn = 6;
	Berlin1.date = "23/6/2021";
	Berlin1.time1 = "6:30AM";
	Berlin1.time2 = "1:00PM";
	// intialization Berlin properites trip 2 .
	properites Berlin2;
	Berlin2.name = "Berlin";
	Berlin2.fn = 10;
	Berlin2.sn = 3;
	Berlin2.date = "23/6/2021";
	Berlin2.time1 = "8:00AM";
	Berlin2.time2 = "2:30PM";
	// intialization Munich properites trip 1 .
	properites Munich1;
	Munich1.name = "Munich";
	Munich1.fn = 11;
	Munich1.sn = 4;
	Munich1.date = "24/6/2021";
	Munich1.time1 = "10:00AM";
	Munich1.time2 = "7:00PM";
	// intialization Munich properites trip 2 .
	properites Munich2;
	Munich2.name = "Munich";
	Munich2.fn = 12;
	Munich2.sn = 8;
	Munich2.date = "24/6/2021";
	Munich2.time1 = "6:00AM";
	Munich2.time2 = "3:00PM";

	// city in Italy .
	string Italy[2] = { "Roma" ,"Turin" };
	// intialization Roma properites trip 1 .
	properites Roma1;
	Roma1.name = "Roma";
	Roma1.fn = 13;
	Roma1.sn = 3;
	Roma1.date = "25/6/2021";
	Roma1.time1 = "7:30AM";
	Roma1.time2 = "1:00PM";
	// intialization Roma properites trip 2 .
	properites Roma2;
	Roma2.name = "Roma";
	Roma2.fn = 14;
	Roma2.sn = 10;
	Roma2.date = "25/6/2021";
	Roma2.time1 = "10:00AM";
	Roma2.time2 = "7:30PM";
	// intialization Turin properites trip 1 .
	properites Turin1;
	Turin1.name = "Turin";
	Turin1.fn = 15;
	Turin1.sn = 5;
	Turin1.date = "26/6/2021";
	Turin1.time1 = "6:00AM";
	Turin1.time2 = "2:30PM";
	// intialization Turin properites trip 2 .
	properites Turin2;
	Turin2.name = "Turin";
	Turin2.fn = 16;
	Turin2.sn = 7;
	Turin2.date = "26/6/2021";
	Turin2.time1 = "9:00AM";
	Turin2.time2 = "6:00PM";

	// city in Egypt .
	string Egypt[2] = { "Alex" ,"Cairo" };
	// intialization Alex properites trip 1 .
	properites Alex1;
	Alex1.name = "Alex";
	Alex1.fn = 17;
	Alex1.sn = 12;
	Alex1.date = "27/6/2021";
	Alex1.time1 = "8:30AM";
	Alex1.time2 = "5:30PM";
	// intialization Alex properites trip 2 .
	properites Alex2;
	Alex2.name = "Alex";
	Alex2.fn = 18;
	Alex2.sn = 4;
	Alex2.date = "27/6/2021";
	Alex2.time1 = "10:30AM";
	Alex2.time2 = "7:00PM";
	// intialization Cairo properites trip 1 .
	properites Cairo1;
	Cairo1.name = "Cairo";
	Cairo1.fn = 19;
	Cairo1.sn = 9;
	Cairo1.date = "28/6/2021";
	Cairo1.time1 = "6:00AM";
	Cairo1.time2 = "12:30PM";
	// intialization Cairo properites trip 2 .
	properites Cairo2;
	Cairo2.name = "Cairo";
	Cairo2.fn = 20;
	Cairo2.sn = 3;
	Cairo2.date = "28/6/2021";
	Cairo2.time1 = "8:00AM";
	Cairo2.time2 = "4:30PM";

	// city in India .
	string India[2] = { "Bellywood" ,"Newdelhi" };
	// intialization Bellywood properites trip 1 .
	properites Bellywood1;
	Bellywood1.name = "Bellywood";
	Bellywood1.fn = 21;
	Bellywood1.sn = 11;
	Bellywood1.date = "29/6/2021";
	Bellywood1.time1 = "6:00AM";
	Bellywood1.time2 = "2:30PM";
	// intialization Bellywood properites trip 2 .
	properites Bellywood2;
	Bellywood2.name = "Bellywood";
	Bellywood2.fn = 22;
	Bellywood2.sn = 4;
	Bellywood2.date = "29/6/2021";
	Bellywood2.time1 = "10:00AM";
	Bellywood2.time2 = "5:00PM";
	// intialization Newdelhi properites trip 1 .
	properites Newdelhi1;
	Newdelhi1.name = "Newdelhi";
	Newdelhi1.fn = 23;
	Newdelhi1.sn = 15;
	Newdelhi1.date = "30/6/2021";
	Newdelhi1.time1 = "7:00AM";
	Newdelhi1.time2 = "3:00PM";
	// intialization Newdelhi properites trip 2 .
	properites Newdelhi2;
	Newdelhi2.name = "Newdelhi";
	Newdelhi2.fn = 24;
	Newdelhi2.sn = 17;
	Newdelhi2.date = "30/6/2021";
	Newdelhi2.time1 = "10:00AM";
	Newdelhi2.time2 = "5:30PM";

	// city in Saudi .
	string Saudi[2] = { "Riyadh" ,"Jeddah" };
	// intialization Riyadh properites trip 1 .
	properites Riyadh1;
	Riyadh1.name = "Riyadh";
	Riyadh1.fn = 25;
	Riyadh1.sn = 18;
	Riyadh1.date = "31/6/2021";
	Riyadh1.time1 = "6:00AM";
	Riyadh1.time2 = "1:30PM";
	// intialization Riyadh properites trip 2 .
	properites Riyadh2;
	Riyadh2.name = "Riyadh";
	Riyadh2.fn = 26;
	Riyadh2.sn = 13;
	Riyadh2.date = "31/6/2021";
	Riyadh2.time1 = "7:30AM";
	Riyadh2.time2 = "12:30PM";
	// intialization Jeddah properites trip 1 .
	properites Jeddah1;
	Jeddah1.name = "Jeddah";
	Jeddah1.fn = 27;
	Jeddah1.sn = 9;
	Jeddah1.date = "1/7/2021";
	Jeddah1.time1 = "6:00AM";
	Jeddah1.time2 = "3:00PM";
	// intialization Jeddah properites trip 2 .
	properites Jeddah2;
	Jeddah2.name = "Jeddah";
	Jeddah2.fn = 28;
	Jeddah2.sn = 5;
	Jeddah2.date = "1/7/2021";
	Jeddah2.time1 = "10:00AM";
	Jeddah2.time2 = "6:00PM";

	// login and sign up .

	string username, password, id, tel, mail, adress;

	int choice;

	cout << "                                  ****welcome in our airline reservation system project****" << endl;
	cout << "                                                  We wish you a happy flight" << endl;

	cout << "Menu \n\n1 - Register \n2 - Login \n3 - Close \n\nYour Chocie : ";
	cin >> choice;

	if (choice == 1)
	{

		cout << "Select Your Username : ";
		cin >> username;
		cout << "Select Your Password : ";
		cin >> password;
		cout << "Select Your id : ";
		cin >> id;
		cout << "Enter Your Phone Number : ";
		cin >> tel;
		cout << "Enter Your Mail : ";
		cin >> mail;
		cout << "Enter your Adress : ";
		cin >> adress;

		ofstream file;
		file.open(username + ".txt");
		file << username << endl << password << endl << tel << endl << mail << endl << adress;
		file.close();
		main();

	}
	else if (choice == 2)
	{
		bool status = security();

		if (!status)
		{
			cout << "Access Denide \n";
			return 0;
		}
		else
		{
			cout << "\nAccess Granted \n";
		}
	}
	else if (choice == 3)
	{
		return 0;
	}
	else
	{
		cout << "\nError \n\n";
		main();
	}

	// user enteraction .
	/*
	   n = current city .
	   n1 = main chose .
	   n2 = chose cuntry .
	*/
	string dl, file, n, name1, name2, name3, name4, name5, name6, name7, name8, name9, name10, name11, name12, name13, name14, name15, name16, name17, name18, name19, name20, name21, name22, name23, name24, name25, name26, name27, name28, city1, city2, date, time1, time2, * ptr1 = &time1, * ptr2 = &time2, xx, xx1, xx2, xx3, xx4, xx5, xx6, xx7, xx8, xx9, xx10, xx11, xx12, xx13, xx14, xx15, xx16, xx17, xx30, xx31, xx32, xx33, xx34, xx35, xx36, xx37, xx38, xx39;
	int n1, n2, sn, fn, * ptr3 = &sn;

	cout << "\nHey , select a number \n\n1 - Add New flight schedule . \n2 - Avilable flight schedule . \n3 - Delete existing flight schedule . \n4 - Modefiy existing flight schedule . \n5 - Show reservation log \n\nYour Choice : ";
	cin >> n1;

	// add new flight .// add new flight .

	if (n1 == 1)
	{
		cout << "Enter Your City .\nYour Answer : ";
		cin >> n;
		cout << "Slect Your dirct country \n";
		for (int i = 0; i < 7; i++)
		{
			cout << i + 1 << " - " << country[i] << endl;
		}
		cout << "\nYour Choice : ";
		cin >> n2;
		switch (n2)
		{
		case 1:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Spain[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n3;
			cin >> n3;
			switch (n3)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Barcelona1.name << endl << "Flight Number : " << Barcelona1.fn << endl << "Number of Avilable Seats : " << Barcelona1.sn << endl << "Flight Date : " << Barcelona1.date << endl << "Departure Time : " << Barcelona1.time1 << endl << "Arrival Time : " << Barcelona1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Barcelona2.name << endl << "Flight Number : " << Barcelona2.fn << endl << "Number of Avilable Seats : " << Barcelona2.sn << endl << "Flight Date : " << Barcelona2.date << endl << "Departure Time : " << Barcelona2.time1 << endl << "Arrival Time : " << Barcelona2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close. \n";
				cout << "Your Choice : ";
				int n4;
				cin >> n4;
				if (n4 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name1;
					ofstream dt(name1 + ".txt");
					dt << n << endl << Barcelona1.name << endl << Barcelona1.fn << endl << Barcelona1.sn << endl << Barcelona1.date << endl << Barcelona1.time1 << endl << Barcelona1.time2 << endl;
					dt.close();
					ofstream n02("baka.txt");
					n02 << name1;
					n02.close();

				}
				else if (n4 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name2;
					ofstream dt(name2 + ".txt");
					dt << n << endl << Barcelona2.name << endl << Barcelona2.fn << endl << Barcelona2.sn << endl << Barcelona2.date << endl << Barcelona2.time1 << endl << Barcelona2.time2 << endl;
					dt.close();
					ofstream n("baka.txt");
					n << name2;
					n.close();


				}
				else if (n4 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}


				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Madrid1.name << endl << "Flight Number : " << Madrid1.fn << endl << "Number of Avilable Seats : " << Madrid1.sn << endl << "Flight Date : " << Madrid1.date << endl << "Departure Time : " << Madrid1.time1 << endl << "Arrival Time : " << Madrid1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Madrid2.name << endl << "Flight Number : " << Madrid2.fn << endl << "Number of Avilable Seats : " << Madrid2.sn << endl << "Flight Date : " << Madrid2.date << endl << "Departure Time : " << Madrid2.time1 << endl << "Arrival Time : " << Madrid2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n10;
				cin >> n10;
				if (n10 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name3;

					ofstream dt(name3 + ".txt");
					dt << n << endl << Madrid1.name << endl << Madrid1.fn << endl << Madrid1.sn << endl << Madrid1.date << endl << Madrid1.time1 << endl << Madrid1.time2 << endl;
					dt.close();
					ofstream q("baka.txt");
					q << name3;
					q.close();

				}
				else if (n10 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name4;

					ofstream dt(name4 + ".txt");
					dt << n << endl << Madrid2.name << endl << Madrid2.fn << endl << Madrid2.sn << endl << Madrid2.date << endl << Madrid2.time1 << endl << Madrid2.time2 << endl;
					dt.close();
					ofstream p("baka.txt");
					p << name4;
					p.close();

				}
				else if (n10 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;

			default:
				cout << "Error . \n";
			}
			break;

		case 2:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << France[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n5;
			cin >> n5;
			switch (n5)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Paris1.name << endl << "Flight Number : " << Paris1.fn << endl << "Number of Avilable Seats : " << Paris1.sn << endl << "Flight Date : " << Paris1.date << endl << "Departure Time : " << Paris1.time1 << endl << "Arrival Time : " << Paris1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Paris2.name << endl << "Flight Number : " << Paris2.fn << endl << "Number of Avilable Seats : " << Paris2.sn << endl << "Flight Date : " << Paris2.date << endl << "Departure Time : " << Paris2.time1 << endl << "Arrival Time : " << Paris2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n99;
				cin >> n99;
				if (n99 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name5;

					ofstream dt(name5 + ".txt");
					dt << n << endl << Paris1.name << endl << Paris1.fn << endl << Paris1.sn << endl << Paris1.date << endl << Paris1.time1 << endl << Paris1.time2 << endl;
					dt.close();
					ofstream i("baka.txt");
					i << name5;
					i.close();

				}
				else if (n99 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name6;

					ofstream dt(name6 + ".txt");
					dt << n << endl << Paris2.name << endl << Paris2.fn << endl << Paris2.sn << endl << Paris2.date << endl << Paris2.time1 << endl << Paris2.time2 << endl;
					dt.close();
					ofstream b("baka.txt");
					b << name6;
					b.close();

				}
				else if (n99 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}

				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Lyon1.name << endl << "Flight Number : " << Lyon1.fn << endl << "Number of Avilable Seats : " << Lyon1.sn << endl << "Flight Date : " << Lyon1.date << endl << "Departure Time : " << Lyon1.time1 << endl << "Arrival Time : " << Lyon1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Lyon2.name << endl << "Flight Number : " << Lyon2.fn << endl << "Number of Avilable Seats : " << Lyon2.sn << endl << "Flight Date : " << Lyon2.date << endl << "Departure Time : " << Lyon2.time1 << endl << "Arrival Time : " << Lyon2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n20;
				cin >> n20;
				if (n20 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name7;

					ofstream dt(name7 + ".txt");
					dt << n << endl << Lyon1.name << endl << Lyon1.fn << endl << Lyon1.sn << endl << Lyon1.date << endl << Lyon1.time1 << endl << Lyon1.time2 << endl;
					dt.close();
					ofstream h("baka.txt");
					h << name7;
					h.close();



				}
				else if (n20 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name8;

					ofstream dt(name8 + ".txt");
					dt << n << endl << Lyon2.name << endl << Lyon2.fn << endl << Lyon2.sn << endl << Lyon2.date << endl << Lyon2.time1 << endl << Lyon2.time2 << endl;
					dt.close();
					ofstream lo("baka.txt");
					lo << name8;
					lo.close();

				}
				else if (n20 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;
			default:
				cout << "Error .\n";

			}
			break;

		case 3:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Germany[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n6;
			cin >> n6;
			switch (n6)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Berlin1.name << endl << "Flight Number : " << Berlin1.fn << endl << "Number of Avilable Seats : " << Berlin1.sn << endl << "Flight Date : " << Berlin1.date << endl << "Departure Time : " << Berlin1.time1 << endl << "Arrival Time : " << Berlin1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Berlin2.name << endl << "Flight Number : " << Berlin2.fn << endl << "Number of Avilable Seats : " << Berlin2.sn << endl << "Flight Date : " << Berlin2.date << endl << "Departure Time : " << Berlin2.time1 << endl << "Arrival Time : " << Berlin2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n98;
				cin >> n98;
				if (n98 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name9;

					ofstream dt(name9 + ".txt");
					dt << n << endl << Berlin1.name << endl << Berlin1.fn << endl << Berlin1.sn << endl << Berlin1.date << endl << Berlin1.time1 << endl << Berlin1.time2 << endl;
					dt.close();
					ofstream PO("baka.txt");
					PO << name9;
					PO.close();

				}
				else if (n98 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name10;

					ofstream dt(name10 + ".txt");
					dt << n << endl << Berlin2.name << endl << Berlin2.fn << endl << Berlin2.sn << endl << Berlin2.date << endl << Berlin2.time1 << endl << Berlin2.time2 << endl;
					dt.close();
					ofstream kj("baka.txt");
					kj << name10;
					kj.close();

				}
				else if (n98 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}

				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Munich1.name << endl << "Flight Number : " << Munich1.fn << endl << "Number of Avilable Seats : " << Munich1.sn << endl << "Flight Date : " << Munich1.date << endl << "Departure Time : " << Munich1.time1 << endl << "Arrival Time : " << Munich1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Munich2.name << endl << "Flight Number : " << Munich2.fn << endl << "Number of Avilable Seats : " << Munich2.sn << endl << "Flight Date : " << Munich2.date << endl << "Departure Time : " << Munich2.time1 << endl << "Arrival Time : " << Munich2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n30;
				cin >> n30;
				if (n30 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name11;

					ofstream dt(name11 + ".txt");
					dt << n << endl << Munich1.name << endl << Munich1.fn << endl << Munich1.sn << endl << Munich1.date << endl << Munich1.time1 << endl << Munich1.time2 << endl;
					dt.close();
					ofstream iii("baka.txt");
					iii << name11;
					iii.close();

				}
				else if (n30 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name12;

					ofstream dt(name12 + ".txt");
					dt << n << endl << Munich2.name << endl << Munich2.fn << endl << Munich2.sn << endl << Munich2.date << endl << Munich2.time1 << endl << Munich2.time2 << endl;
					dt.close();
					ofstream www("baka.txt");
					www << name12;
					www.close();

				}
				else if (n30 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;
			default:
				cout << "Error .\n";

			}
			break;

		case 4:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Italy[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n7;
			cin >> n7;
			switch (n7)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Roma1.name << endl << "Flight Number : " << Roma1.fn << endl << "Number of Avilable Seats : " << Roma1.sn << endl << "Flight Date : " << Roma1.date << endl << "Departure Time : " << Roma1.time1 << endl << "Arrival Time : " << Roma1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Roma2.name << endl << "Flight Number : " << Roma2.fn << endl << "Number of Avilable Seats : " << Roma2.sn << endl << "Flight Date : " << Roma2.date << endl << "Departure Time : " << Roma2.time1 << endl << "Arrival Time : " << Roma2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n97;
				cin >> n97;
				if (n97 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name13;

					ofstream dt(name13 + ".txt");
					dt << n << endl << Roma1.name << endl << Roma1.fn << endl << Roma1.sn << endl << Roma1.date << endl << Roma1.time1 << endl << Roma1.time2 << endl;
					dt.close();
					ofstream vvv("baka.txt");
					vvv << name13;
					vvv.close();

				}
				else if (n97 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name14;

					ofstream dt(name14 + ".txt");
					dt << n << endl << Roma2.name << endl << Roma2.fn << endl << Roma2.sn << endl << Roma2.date << endl << Roma2.time1 << endl << Roma2.time2 << endl;
					dt.close();
					ofstream xz("baka.txt");
					xz << name14;
					xz.close();

				}
				else if (n97 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}

				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Turin1.name << endl << "Flight Number : " << Turin1.fn << endl << "Number of Avilable Seats : " << Turin1.sn << endl << "Flight Date : " << Turin1.date << endl << "Departure Time : " << Turin1.time1 << endl << "Arrival Time : " << Turin1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Turin2.name << endl << "Flight Number : " << Turin2.fn << endl << "Number of Avilable Seats : " << Turin2.sn << endl << "Flight Date : " << Turin2.date << endl << "Departure Time : " << Turin2.time1 << endl << "Arrival Time : " << Turin2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n40;
				cin >> n40;
				if (n40 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name15;

					ofstream dt(name15 + ".txt");
					dt << n << endl << Turin1.name << Turin1.fn << endl << Turin1.sn << endl << Turin1.date << endl << Turin1.time1 << endl << Turin1.time2 << endl;
					dt.close();
					ofstream ste("baka.txt");
					ste << name15;
					ste.close();

				}
				else if (n40 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name16;

					ofstream dt(name16 + ".txt");
					dt << n << endl << Turin2.name << endl << Turin2.fn << endl << Turin2.sn << endl << Turin2.date << endl << Turin2.time1 << endl << Turin2.time2 << endl;
					dt.close();
					ofstream uyt("baka.txt");
					uyt << name16;
					uyt.close();

				}
				else if (n40 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;
			default:
				cout << "Error .\n";

			}
			break;

		case 5:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Egypt[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n8;
			cin >> n8;
			switch (n8)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Alex1.name << endl << "Flight Number : " << Alex1.fn << endl << "Number of Avilable Seats : " << Alex1.sn << endl << "Flight Date : " << Alex1.date << endl << "Departure Time : " << Alex1.time1 << endl << "Arrival Time : " << Alex1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Alex2.name << endl << "Flight Number : " << Alex2.fn << endl << "Number of Avilable Seats : " << Alex2.sn << endl << "Flight Date : " << Alex2.date << endl << "Departure Time : " << Alex2.time1 << endl << "Arrival Time : " << Alex2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n96;
				cin >> n96;
				if (n96 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name17;

					ofstream dt(name17 + ".txt");
					dt << n << endl << Alex1.name << endl << Alex1.fn << endl << Alex1.sn << endl << Alex1.date << endl << Alex1.time1 << endl << Alex1.time2 << endl;
					dt.close();
					ofstream rew("baka.txt");
					rew << name17;
					rew.close();

				}
				else if (n96 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name18;

					ofstream dt(name18 + ".txt");
					dt << n << endl << Alex2.name << endl << Alex2.fn << endl << Alex2.sn << endl << Alex2.date << endl << Alex2.time1 << endl << Alex2.time2 << endl;
					dt.close();
					ofstream qaz("baka.txt");
					qaz << name18;
					qaz.close();

				}
				else if (n96 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}

				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Cairo1.name << endl << "Flight Number : " << Cairo1.fn << endl << "Number of Avilable Seats : " << Cairo1.sn << endl << "Flight Date : " << Cairo1.date << endl << "Departure Time : " << Cairo1.time1 << endl << "Arrival Time : " << Cairo1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Cairo2.name << endl << "Flight Number : " << Cairo2.fn << endl << "Number of Avilable Seats : " << Cairo2.sn << endl << "Flight Date : " << Cairo2.date << endl << "Departure Time : " << Cairo2.time1 << endl << "Arrival Time : " << Cairo2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n50;
				cin >> n50;
				if (n50 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name19;

					ofstream dt(name19 + ".txt");
					dt << n << endl << Cairo1.name << endl << Cairo1.fn << endl << Cairo1.sn << endl << Cairo1.date << endl << Cairo1.time1 << endl << Cairo1.time2 << endl;
					dt.close();
					ofstream zxc("baka.txt");
					zxc << name19;
					zxc.close();

				}
				else if (n50 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name20;

					ofstream dt(name20 + ".txt");
					dt << n << endl << Cairo2.name << endl << Cairo2.fn << endl << Cairo2.sn << endl << Cairo2.date << endl << Cairo2.time1 << endl << Cairo2.time2 << endl;
					dt.close();
					ofstream mnm("baka.txt");
					mnm << name20;
					mnm.close();
				}
				else if (n50 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;
			default:
				cout << "Error .\n";

			}
			break;

		case 6:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << India[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n9;
			cin >> n9;
			switch (n9)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Bellywood1.name << endl << "Flight Number : " << Bellywood1.fn << endl << "Number of Avilable Seats : " << Bellywood1.sn << endl << "Flight Date : " << Bellywood1.date << endl << "Departure Time : " << Bellywood1.time1 << endl << "Arrival Time : " << Bellywood1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Bellywood2.name << endl << "Flight Number : " << Bellywood2.fn << endl << "Number of Avilable Seats : " << Bellywood2.sn << endl << "Flight Date : " << Bellywood2.date << endl << "Departure Time : " << Bellywood2.time1 << endl << "Arrival Time : " << Bellywood2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n95;
				cin >> n95;
				if (n95 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name21;



					ofstream dt(name21 + ".txt");
					dt << n << endl << Bellywood1.name << endl << Bellywood1.fn << endl << Bellywood1.sn << endl << Bellywood1.date << endl << Bellywood1.time1 << endl << Bellywood1.time2 << endl;
					dt.close();
					ofstream ojo("baka.txt");
					ojo << name21;
					ojo.close();
				}
				else if (n95 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name22;

					ofstream dt(name22 + ".txt");
					dt << n << endl << Bellywood2.name << endl << Bellywood2.fn << endl << Bellywood2.sn << endl << Bellywood2.date << endl << Bellywood2.time1 << endl << Bellywood2.time2 << endl;
					dt.close();
					ofstream qas("baka.txt");
					qas << name22;
					qas.close();

				}
				else if (n95 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}

				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Newdelhi1.name << endl << "Flight Number : " << Newdelhi1.fn << endl << "Number of Avilable Seats : " << Newdelhi1.sn << endl << "Flight Date : " << Newdelhi1.date << endl << "Departure Time : " << Newdelhi1.time1 << endl << "Arrival Time : " << Newdelhi1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Newdelhi2.name << endl << "Flight Number : " << Newdelhi2.fn << endl << "Number of Avilable Seats : " << Newdelhi2.sn << endl << "Flight Date : " << Newdelhi2.date << endl << "Departure Time : " << Newdelhi2.time1 << endl << "Arrival Time : " << Newdelhi2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n60;
				cin >> n60;
				if (n60 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name23;

					ofstream dt(name23 + ".txt");
					dt << n << endl << Newdelhi1.name << endl << Newdelhi1.fn << endl << Newdelhi1.sn << endl << Newdelhi1.date << endl << Newdelhi1.time1 << endl << Newdelhi1.time2 << endl;
					dt.close();
					ofstream nnc("baka.txt");
					nnc << name23;
					nnc.close();

				}
				else if (n60 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name24;

					ofstream dt(name24 + ".txt");
					dt << n << endl << Newdelhi2.name << endl << Newdelhi2.fn << endl << Newdelhi2.sn << endl << Newdelhi2.date << endl << Newdelhi2.time1 << endl << Newdelhi2.time2 << endl;
					dt.close();
					ofstream nnc2("baka.txt");
					nnc2 << name24;
					nnc2.close();

				}
				else if (n60 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;
			default:
				cout << "Error .\n";

			}
			break;

		case 7:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Saudi[k] << endl;
			}
			cout << "\nYour Choice : ";
			int n11;
			cin >> n11;
			switch (n11)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Riyadh1.name << endl << "Flight Number : " << Riyadh1.fn << endl << "Number of Avilable Seats : " << Riyadh1.sn << endl << "Flight Date : " << Riyadh1.date << endl << "Departure Time : " << Riyadh1.time1 << endl << "Arrival Time : " << Riyadh1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Riyadh2.name << endl << "Flight Number : " << Riyadh2.fn << endl << "Number of Avilable Seats : " << Riyadh2.sn << endl << "Flight Date : " << Riyadh2.date << endl << "Departure Time : " << Riyadh2.time1 << endl << "Arrival Time : " << Riyadh2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n94;
				cin >> n94;
				if (n94 == 1)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name25;

					ofstream dt(name25 + ".txt");
					dt << n << endl << Riyadh1.name << endl << Riyadh1.fn << endl << Riyadh1.sn << endl << Riyadh1.date << endl << Riyadh1.time1 << endl << Riyadh1.time2 << endl;
					dt.close();
					ofstream nnc4("baka.txt");
					nnc4 << name25;
					nnc4.close();


				}
				else if (n94 == 2)
				{

					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name26;

					ofstream dt(name26 + ".txt");
					dt << n << endl << Riyadh2.name << endl << Riyadh2.fn << endl << Riyadh2.sn << endl << Riyadh2.date << endl << Riyadh2.time1 << endl << Riyadh2.time2 << endl;
					dt.close();
					ofstream poo("baka.txt");
					poo << name26;
					poo.close();

				}
				else if (n94 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}

				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Jeddah1.name << endl << "Flight Number : " << Jeddah1.fn << endl << "Number of Avilable Seats : " << Jeddah1.sn << endl << "Flight Date : " << Jeddah1.date << endl << "Departure Time : " << Jeddah1.time1 << endl << "Arrival Time : " << Jeddah1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Jeddah2.name << endl << "Flight Number : " << Jeddah2.fn << endl << "Number of Avilable Seats : " << Jeddah2.sn << endl << "Flight Date : " << Jeddah2.date << endl << "Departure Time : " << Jeddah2.time1 << endl << "Arrival Time : " << Jeddah2.time2 << endl;
				cout << "\n\n1 - First Option . \n2 - Second Option . \n3 - Close . \n";
				cout << "Your Choice : ";
				int n70;
				cin >> n70;
				if (n70 == 1)
				{
					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name27;

					ofstream dt(name27 + ".txt");
					dt << n << endl << Jeddah1.name << endl << Jeddah1.fn << endl << Jeddah1.sn << endl << Jeddah1.date << endl << Jeddah1.time1 << endl << Jeddah1.time2 << endl;
					dt.close();
					ofstream a0("baka.txt");
					a0 << name27;
					a0.close();

				}
				else if (n70 == 2)
				{
					cout << "Enter the file name you 'd like to print the flight in . \nYour Answer : ";
					cin >> name28;

					ofstream dt(name28 + ".txt");
					dt << n << endl << Jeddah2.name << endl << Jeddah2.fn << endl << Jeddah2.sn << endl << Jeddah2.date << endl << Jeddah2.time1 << endl << Jeddah2.time2 << endl;
					dt.close();
					ofstream b00("baka.txt");
					b00 << name28;
					b00.close();

				}
				else if (n70 == 3)
				{
					return 0;
				}
				else
				{
					cout << "Error . \n";
				}
				break;
			default:
				cout << "Error .\n";

			}
			break;

		default:
			cout << "Error .\n";

		}
	}
	else if (n1 == 2)
	{
		cout << "Slect the country \n";
		for (int i = 0; i < 7; i++)
		{
			cout << i + 1 << " - " << country[i] << endl;
		}
		cout << "\n\nYour Choice : ";
		cin >> n2;
		switch (n2)
		{
		case 1:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Spain[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n3;
			cin >> n3;
			switch (n3)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Barcelona1.name << endl << "Flight Number : " << Barcelona1.fn << endl << "Number of Avilable Seats : " << Barcelona1.sn << endl << "Flight Date : " << Barcelona1.date << endl << "Departure Time : " << Barcelona1.time1 << endl << "Arrival Time : " << Barcelona1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Barcelona2.name << endl << "Flight Number : " << Barcelona2.fn << endl << "Number of Avilable Seats : " << Barcelona2.sn << endl << "Flight Date : " << Barcelona2.date << endl << "Departure Time : " << Barcelona2.time1 << endl << "Arrival Time : " << Barcelona2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Madrid1.name << endl << "Flight Number : " << Madrid1.fn << endl << "Number of Avilable Seats : " << Madrid1.sn << endl << "Flight Date : " << Madrid1.date << endl << "Departure Time : " << Madrid1.time1 << endl << "Arrival Time : " << Madrid1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Madrid2.name << endl << "Flight Number : " << Madrid2.fn << endl << "Number of Avilable Seats : " << Madrid2.sn << endl << "Flight Date : " << Madrid2.date << endl << "Departure Time : " << Madrid2.time1 << endl << "Arrival Time : " << Madrid2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n14;
				cin >> n14;
				switch (n14)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		case 2:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << France[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n15;
			cin >> n15;
			switch (n15)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Paris1.name << endl << "Flight Number : " << Paris1.fn << endl << "Number of Avilable Seats : " << Paris1.sn << endl << "Flight Date : " << Paris1.date << endl << "Departure Time : " << Paris1.time1 << endl << "Arrival Time : " << Paris1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Paris2.name << endl << "Flight Number : " << Paris2.fn << endl << "Number of Avilable Seats : " << Paris2.sn << endl << "Flight Date : " << Paris2.date << endl << "Departure Time : " << Paris2.time1 << endl << "Arrival Time : " << Paris2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Lyon1.name << endl << "Flight Number : " << Lyon1.fn << endl << "Number of Avilable Seats : " << Lyon1.sn << endl << "Flight Date : " << Lyon1.date << endl << "Departure Time : " << Lyon1.time1 << endl << "Arrival Time : " << Lyon1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Lyon2.name << endl << "Flight Number : " << Lyon2.fn << endl << "Number of Avilable Seats : " << Lyon2.sn << endl << "Flight Date : " << Lyon2.date << endl << "Departure Time : " << Lyon2.time1 << endl << "Arrival Time : " << Lyon2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n16;
				cin >> n16;
				switch (n16)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		case 3:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Germany[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n17;
			cin >> n17;
			switch (n17)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Berlin1.name << endl << "Flight Number : " << Berlin1.fn << endl << "Number of Avilable Seats : " << Berlin1.sn << endl << "Flight Date : " << Berlin1.date << endl << "Departure Time : " << Berlin1.time1 << endl << "Arrival Time : " << Berlin1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Berlin2.name << endl << "Flight Number : " << Berlin2.fn << endl << "Number of Avilable Seats : " << Berlin2.sn << endl << "Flight Date : " << Berlin2.date << endl << "Departure Time : " << Berlin2.time1 << endl << "Arrival Time : " << Berlin2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Munich1.name << endl << "Flight Number : " << Munich1.fn << endl << "Number of Avilable Seats : " << Munich1.sn << endl << "Flight Date : " << Munich1.date << endl << "Departure Time : " << Munich1.time1 << endl << "Arrival Time : " << Munich1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Munich2.name << endl << "Flight Number : " << Munich2.fn << endl << "Number of Avilable Seats : " << Munich2.sn << endl << "Flight Date : " << Munich2.date << endl << "Departure Time : " << Munich2.time1 << endl << "Arrival Time : " << Munich2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n18;
				cin >> n18;
				switch (n18)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		case 4:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Italy[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n19;
			cin >> n19;
			switch (n19)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Roma1.name << endl << "Flight Number : " << Roma1.fn << endl << "Number of Avilable Seats : " << Roma1.sn << endl << "Flight Date : " << Roma1.date << endl << "Departure Time : " << Roma1.time1 << endl << "Arrival Time : " << Roma1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Roma2.name << endl << "Flight Number : " << Roma2.fn << endl << "Number of Avilable Seats : " << Roma2.sn << endl << "Flight Date : " << Roma2.date << endl << "Departure Time : " << Roma2.time1 << endl << "Arrival Time : " << Roma2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Turin1.name << endl << "Flight Number : " << Turin1.fn << endl << "Number of Avilable Seats : " << Turin1.sn << endl << "Flight Date : " << Turin1.date << endl << "Departure Time : " << Turin1.time1 << endl << "Arrival Time : " << Turin1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Turin2.name << endl << "Flight Number : " << Turin2.fn << endl << "Number of Avilable Seats : " << Turin2.sn << endl << "Flight Date : " << Turin2.date << endl << "Departure Time : " << Turin2.time1 << endl << "Arrival Time : " << Turin2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n21;
				cin >> n21;
				switch (n21)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		case 5:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Egypt[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n22;
			cin >> n22;
			switch (n22)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Alex1.name << endl << "Flight Number : " << Alex1.fn << endl << "Number of Avilable Seats : " << Alex1.sn << endl << "Flight Date : " << Alex1.date << endl << "Departure Time : " << Alex1.time1 << endl << "Arrival Time : " << Alex1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Alex2.name << endl << "Flight Number : " << Alex2.fn << endl << "Number of Avilable Seats : " << Alex2.sn << endl << "Flight Date : " << Alex2.date << endl << "Departure Time : " << Alex2.time1 << endl << "Arrival Time : " << Alex2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Cairo1.name << endl << "Flight Number : " << Cairo1.fn << endl << "Number of Avilable Seats : " << Cairo1.sn << endl << "Flight Date : " << Cairo1.date << endl << "Departure Time : " << Cairo1.time1 << endl << "Arrival Time : " << Cairo1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Cairo2.name << endl << "Flight Number : " << Cairo2.fn << endl << "Number of Avilable Seats : " << Cairo2.sn << endl << "Flight Date : " << Cairo2.date << endl << "Departure Time : " << Cairo2.time1 << endl << "Arrival Time : " << Cairo2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n23;
				cin >> n23;
				switch (n23)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		case 6:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << India[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n24;
			cin >> n24;
			switch (n24)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Bellywood1.name << endl << "Flight Number : " << Bellywood1.fn << endl << "Number of Avilable Seats : " << Bellywood1.sn << endl << "Flight Date : " << Bellywood1.date << endl << "Departure Time : " << Bellywood1.time1 << endl << "Arrival Time : " << Bellywood1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Bellywood2.name << endl << "Flight Number : " << Bellywood2.fn << endl << "Number of Avilable Seats : " << Bellywood2.sn << endl << "Flight Date : " << Bellywood2.date << endl << "Departure Time : " << Bellywood2.time1 << endl << "Arrival Time : " << Bellywood2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Newdelhi1.name << endl << "Flight Number : " << Newdelhi1.fn << endl << "Number of Avilable Seats : " << Newdelhi1.sn << endl << "Flight Date : " << Newdelhi1.date << endl << "Departure Time : " << Newdelhi1.time1 << endl << "Arrival Time : " << Newdelhi1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Newdelhi2.name << endl << "Flight Number : " << Newdelhi2.fn << endl << "Number of Avilable Seats : " << Newdelhi2.sn << endl << "Flight Date : " << Newdelhi2.date << endl << "Departure Time : " << Newdelhi2.time1 << endl << "Arrival Time : " << Newdelhi2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n25;
				cin >> n25;
				switch (n25)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		case 7:
			cout << "\n\nChose the city \n";
			for (int k = 0; k < 2; k++)
			{
				cout << k + 1 << " - " << Saudi[k] << endl;
			}
			cout << "\n\nYour Choice : ";
			int n26;
			cin >> n26;
			switch (n26)
			{
			case 1:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Riyadh1.name << endl << "Flight Number : " << Riyadh1.fn << endl << "Number of Avilable Seats : " << Riyadh1.sn << endl << "Flight Date : " << Riyadh1.date << endl << "Departure Time : " << Riyadh1.time1 << endl << "Arrival Time : " << Riyadh1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Riyadh2.name << endl << "Flight Number : " << Riyadh2.fn << endl << "Number of Avilable Seats : " << Riyadh2.sn << endl << "Flight Date : " << Riyadh2.date << endl << "Departure Time : " << Riyadh2.time1 << endl << "Arrival Time : " << Riyadh2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n6;
				cin >> n6;
				switch (n6)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			case 2:
				cout << "\n\nFirst Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Jeddah1.name << endl << "Flight Number : " << Jeddah1.fn << endl << "Number of Avilable Seats : " << Jeddah1.sn << endl << "Flight Date : " << Jeddah1.date << endl << "Departure Time : " << Jeddah1.time1 << endl << "Arrival Time : " << Jeddah1.time2 << endl;
				cout << "\n\nSecond Option . \n";
				cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Jeddah2.name << endl << "Flight Number : " << Jeddah2.fn << endl << "Number of Avilable Seats : " << Jeddah2.sn << endl << "Flight Date : " << Jeddah2.date << endl << "Departure Time : " << Jeddah2.time1 << endl << "Arrival Time : " << Jeddah2.time2 << endl;
				cout << "\n\n1 - To Add New flight schedule . \n2 - Cancle . \n\nYour Choice : ";
				int n27;
				cin >> n27;
				switch (n27)
				{
				case 1:
					main();
					break;

				case 2:
					return 0;
					break;

				default:
					cout << "Error .\n";
				}
				break;

			default:
				cout << "Error .\n";
			}
			break;

		default:
			cout << "Error .\n";
		}
	}
	else if (n1 == 3)
	{
		int num;
		char x[100];
		int status;
		cout << "Enter your ticket name that you are entered before and add '.txt' after it . \nYour Answer : ";
		cin >> x;
		cout << "\n1 - Confirm . \n2 - Cancel .";
		cin >> num;



		if (num == 1)
		{
			ofstream delete_flight;
			delete_flight.open(x);
			delete_flight.close();

			status = remove(x);
			if (status == 0)
			{
				cout << "File Deleted Successfully!" << endl;
				main();
				return 0;
			}
			else
			{
				cout << "Erorr ." << endl;
				main();
				return 0;
			}

		}
		else if (num == 2)
		{
			main();
			return 0;
		}
		else
			cout << "Error . \n";
	}
	else if (n1 == 4)
	{


		cout << "***Enter Your Flight Information ,please***\n";
		cout << "Enter Current City : ";
		cin >> city1;
		cout << "Enter Your Second City : ";
		cin >> city2;
		cout << "Enter Your Launch time : ";
		cin >> time1;
		cout << "Enter Your Arrive time : ";
		cin >> time2;
		cout << "Enter Your Flight Date : ";
		cin >> date;
		cout << "Enter Your Flight number : ";
		cin >> fn;
		cout << "Enter the Siteas number : ";
		cin >> sn;

		if (city2 == "Paris" || city2 == "paris")
		{
			if (time1 == "8:00AM" && time2 == "3:30PM")
			{


				*ptr1 = "6:30AM";

				*ptr2 = "1:00PM";
				fn++;

				*ptr3 = 8;

				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx;
				ofstream file;
				file.open(xx + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;


				file.close();
				ofstream q4("baka.txt");
				q4 << xx;
				q4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;

			}
			else if (time1 == "6:30AM" && time2 == "1:00PM")

			{
				*ptr1 = "8:00AM";
				*ptr2 = "3:30PM";
				fn--;
				*ptr3 = 12;

				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx1;
				ofstream file;
				file.open(xx1 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qqq4("baka.txt");
				qqq4 << xx1;
				qqq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}
		else if (city2 == "Lyon" || city2 == "lyon")
		{
			if (time1 == "7:00AM" && time2 == "2:30PM")
			{
				*ptr1 = "10:00AM";
				*ptr2 = "6:30PM";
				fn++;
				*ptr3 = 13;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx2;
				ofstream file;
				file.open(xx2 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qaq4("baka.txt");
				qaq4 << xx2;
				qaq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "10:00AM" && time2 == "6:30PM")

			{
				*ptr1 = "7:00AM";
				*ptr2 = "2:30PM";
				fn--;
				*ptr3 = 8;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx3;
				ofstream file;
				file.open(xx3 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qbq4("baka.txt");
				qbq4 << xx3;
				qbq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}
		else if (city2 == "Barcelona" || city2 == "barcelona")
		{
			if (time1 == "6:00AM" && time2 == "2:00PM")
			{
				*ptr1 = "9:00AM";
				*ptr2 = "5:00PM";
				fn++;
				*ptr3 = 5;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx4;
				ofstream file;
				file.open(xx4 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qcq4("baka.txt");
				qcq4 << xx4;
				qcq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "9:00AM" && time2 == "5:00PM")

			{
				*ptr1 = "6:00AM";
				*ptr2 = "2:00PM";
				fn--;
				*ptr3 = 10;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx5;
				ofstream file;
				file.open(xx5 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qdq4("baka.txt");
				qdq4 << xx5;
				qdq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}

		else if (city2 == "Madrid" || city2 == "madrid")
		{
			if (time1 == "7:30AM" && time2 == "3:00PM")
			{
				*ptr1 = "10:30AM";
				*ptr2 = "5:00PM";
				fn++;
				*ptr3 = 7;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx6;
				ofstream file;
				file.open(xx6 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qeq4("baka.txt");
				qeq4 << xx6;
				qeq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "10:30AM" && time2 == "5:00PM")

			{
				*ptr1 = "7:30AM";
				*ptr2 = "3:00PM";
				fn--;
				*ptr3 = 7;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx7;
				ofstream file;
				file.open(xx7 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qfq4("baka.txt");
				qfq4 << xx7;
				qfq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}

		else if (city2 == "Berlin" || city2 == "berlin")
		{
			if (time1 == "6:30AM" && time2 == "1:00PM")
			{
				*ptr1 = "8:00AM";
				*ptr2 = "2:30PM";
				fn++;
				*ptr3 = 3;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx8;
				ofstream file;
				file.open(xx8 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qgq4("baka.txt");
				qgq4 << xx8;
				qgq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "8:00AM" && time2 == "2:30PM")

			{
				*ptr1 = "6:30AM";
				*ptr2 = "1:00PM";
				fn--;
				*ptr3 = 6;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx9;
				ofstream file;
				file.open(xx9 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qhq4("baka.txt");
				qhq4 << xx9;
				qhq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}

		else if (city2 == "Bellywood" || city2 == "bellywood")
		{
			if (time1 == "6:00AM" && time2 == "2:30PM")
			{
				*ptr1 = "10:00AM";
				*ptr2 = "5:00PM";
				fn++;
				*ptr3 = 4;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx10;
				ofstream file;
				file.open(xx10 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qiq4("baka.txt");
				qiq4 << xx10;
				qiq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;

			}
			else if (time1 == "10:00AM" && time2 == "5:00PM")
			{
				*ptr1 = "6:00AM";
				*ptr2 = "2:30PM";
				fn--;
				*ptr3 = 11;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx11;
				ofstream file;
				file.open(xx11 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qjq4("baka.txt");
				qjq4 << xx11;
				qjq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;


			}


		}
		else if (city2 == "Newdelhi" || city2 == "newdelhi")
		{
			if (time1 == "7:00AM" && time2 == "3:00PM")
			{

				*ptr1 = "10:00AM";
				*ptr2 = "5:30PM";
				fn++;
				*ptr3 = 17;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx12;
				ofstream file;
				file.open(xx12 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qkq4("baka.txt");
				qkq4 << xx12;
				qkq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;

			}
			else if (time1 == "10:00AM" && time2 == "5:30PM")
			{

				*ptr1 = "7:00AM";
				*ptr2 = "3:00PM";
				fn--;
				*ptr3 = 15;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx13;
				ofstream file;
				file.open(xx13 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qlq4("baka.txt");
				qlq4 << xx13;
				qlq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;


			}


		}
		else if (city2 == "Riyadh" || city2 == "riyadh")
		{
			if (time1 == "6:00AM" && time2 == "1:30PM")
			{

				*ptr1 = "7:30AM";
				*ptr2 = "12:30PM";
				fn++;
				*ptr3 = 13;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx14;
				ofstream file;
				file.open(xx14 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qmq4("baka.txt");
				qmq4 << xx14;
				qmq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "7:30AM" && time2 == "12:30PM")
			{

				*ptr1 = "6:00AM";
				*ptr2 = "1:30PM";
				fn--;
				*ptr3 = 18;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx15;
				ofstream file;
				file.open(xx15 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qnq4("baka.txt");
				qnq4 << xx15;
				qnq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;


			}


		}

		else if (city2 == "Jeddah" || city2 == "jeddah")
		{
			if (time1 == "6:00AM" && time2 == "3:00PM")
			{

				*ptr1 = "10:00AM";
				*ptr2 = "6:00PM";
				fn++;
				*ptr3 = 5;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx16;
				ofstream file;
				file.open(xx16 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qoq4("baka.txt");
				qoq4 << xx16;
				qoq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "10:00AM" && time2 == "6:00PM")
			{

				*ptr1 = "6:00AM";
				*ptr2 = "3:00PM";
				fn--;
				*ptr3 = 9;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx17;
				ofstream file;
				file.open(xx17 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qpq4("baka.txt");
				qpq4 << xx17;
				qpq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}

		else if (city2 == "Munich" || city2 == "munich")
		{
			if (time1 == "10:00AM" && time2 == "7:00PM")
			{
				*ptr1 = "6:00AM";
				*ptr2 = "3:00PM";
				fn++;
				*ptr3 = 8;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx30;
				ofstream file;
				file.open(xx30 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx30;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "6:00AM" && time2 == "3:00PM")

			{
				*ptr1 = "10:00AM";
				*ptr2 = "7:00PM";
				fn--;
				*ptr3 = 4;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx31;
				ofstream file;
				file.open(xx31 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx31;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}
		else if (city2 == "Roma" || city2 == "roma")
		{
			if (time1 == "7:30AM" && time2 == "1:00PM")
			{
				*ptr1 = "10:00AM";
				*ptr2 = "7:30PM";
				fn++;
				*ptr3 = 10;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx32;
				ofstream file;
				file.open(xx32 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx32;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "10:00AM" && time2 == "7:30PM")

			{
				*ptr1 = "7:30AM";
				*ptr2 = "1:00PM";
				fn--;
				*ptr3 = 3;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx33;
				ofstream file;
				file.open(xx33 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx33;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}

		}
		else if (city2 == "Turin" || city2 == "turin")
		{
			if (time1 == "6:00AM" && time2 == "2:30PM")
			{
				*ptr1 = "9:00AM";
				*ptr2 = "6:00PM";
				fn++;
				*ptr3 = 7;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx34;
				ofstream file;
				file.open(xx34 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx34;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "9:00AM" && time2 == "6:00PM")
			{
				*ptr1 = "6:00AM";
				*ptr2 = "2:30PM";
				fn--;
				*ptr3 = 5;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx35;
				ofstream file;
				file.open(xx35 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx35;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
		}
		else if (city2 == "Alex" || city2 == "alex")
		{
			if (time1 == "8:30AM" && time2 == "5:30PM")
			{

				*ptr1 = "10:30AM";
				*ptr2 = "7:00PM";
				fn++;
				*ptr3 = 4;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx36;
				ofstream file;
				file.open(xx36 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx36;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "10:30AM" && time2 == "7:00PM")
			{

				*ptr1 = "8:30AM";
				*ptr2 = "5:30PM";
				fn--;
				*ptr3 = 12;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx37;
				ofstream file;
				file.open(xx37 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx37;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
		}
		else if (city2 == "Cairo" || city2 == "cairo")
		{
			if (time1 == "6:00AM" && time2 == "12:30PM")
			{

				*ptr1 = "8:00AM";
				*ptr2 = "4:30PM";
				fn++;
				*ptr3 = 3;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx38;
				ofstream file;
				file.open(xx38 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx38;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;
			}
			else if (time1 == "8:00AM" && time2 == "4:30PM")
			{
				*ptr1 = "6:00AM";
				*ptr2 = "12:30PM";
				fn--;
				*ptr3 = 9;
				cout << "Enter The Name You 'd like to save the reservation and should be different from the last .\nYour Answer : ";
				cin >> xx39;
				ofstream file;
				file.open(xx39 + ".txt");
				file << city1 << endl << city2 << endl << date << endl << *ptr1 << endl << *ptr2 << endl << fn << endl << *ptr3 << endl;

				file.close();
				ofstream qsq4("baka.txt");
				qsq4 << xx39;
				qsq4.close();
				std::cin.get();
				cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3 << endl;
				cout << "Dear Client: Your travel information has been successfully modified " << endl;

			}
		}

	}
	else if (n1 == 5)
	{
		cout << "Enter your ticket name that you are entered before . \nYour Answer : ";
		cin >> file;

		ifstream z("baka.txt");
		z >> name1;
		z.close();
		ifstream q("baka.txt");
		q >> name2;
		q.close();
		ifstream m("baka.txt");
		m >> name3;
		m.close();
		ifstream s("baka.txt");
		s >> name4;
		s.close();
		ifstream w("baka.txt");
		w >> name5;
		w.close();
		ifstream A("baka.txt");
		A >> name6;
		A.close();
		ifstream B("baka.txt");
		B >> name7;
		B.close();
		ifstream lo("baka.txt");
		lo >> name8;
		lo.close();
		ifstream po("baka.txt");
		po >> name9;
		po.close();
		ifstream kq("baka.txt");
		kq >> name10;
		kq.close();
		ifstream ccc("baka.txt");
		ccc >> name11;
		ccc.close();
		ifstream ddd("baka.txt");
		ddd >> name12;
		ddd.close();
		ifstream nb("baka.txt");
		nb >> name13;
		nb.close();
		ifstream na("baka.txt");
		na >> name14;
		na.close();
		ifstream gff("baka.txt");
		gff >> name15;
		gff.close();
		ifstream tss("baka.txt");
		tss >> name16;
		tss.close();
		ifstream rew("baka.txt");
		rew >> name17;
		rew.close();
		ifstream qez("baka.txt");
		qez >> name18;
		qez.close();
		ifstream vbn("baka.txt");
		vbn >> name19;
		vbn.close();
		ifstream mnm("baka.txt");
		mnm >> name20;
		mnm.close();
		ifstream BBB("baka.txt");
		BBB >> name21;
		BBB.close();
		ifstream qas1("baka.txt");
		qas1 >> name22;
		qas1.close();
		ifstream nnc1("baka.txt");
		nnc1 >> name23;
		nnc1.close();
		ifstream nnc3("baka.txt");
		nnc3 >> name24;
		nnc3.close();
		ifstream nnc5("baka.txt");
		nnc5 >> name25;
		nnc5.close();
		ifstream poo1("baka.txt");
		poo1 >> name26;
		poo1.close();
		ifstream a00("baka.txt");
		a00 >> name27;
		a00.close();
		ifstream b000("baka.txt");
		b000 >> name28;
		b000.close();
		ifstream q114("baka.txt");
		q114 >> xx;
		q114.close();
		ifstream qq04("baka.txt");
		qq04 >> xx1;
		qq04.close();
		ifstream qq14("baka.txt");
		qq14 >> xx2;
		qq14.close();
		ifstream qq24("baka.txt");
		qq24 >> xx3;
		qq24.close();
		ifstream qq34("baka.txt");
		qq34 >> xx4;
		qq34.close();
		ifstream qq44("baka.txt");
		qq44 >> xx5;
		qq44.close();
		ifstream qq54("baka.txt");
		qq54 >> xx6;
		qq54.close();
		ifstream qq64("baka.txt");
		qq64 >> xx7;
		qq64.close();
		ifstream qq74("baka.txt");
		qq74 >> xx8;
		qq64.close();
		ifstream qq84("baka.txt");
		qq84 >> xx9;
		qq84.close();
		ifstream qq94("baka.txt");
		qq94 >> xx10;
		qq94.close();
		ifstream qqa4("baka.txt");
		qqa4 >> xx11;
		qqa4.close();
		ifstream qqb4("baka.txt");
		qqb4 >> xx12;
		qqb4.close();
		ifstream qqc4("baka.txt");
		qqc4 >> xx13;
		qqc4.close();
		ifstream qqd4("baka.txt");
		qqd4 >> xx14;
		qqd4.close();
		ifstream qqe4("baka.txt");
		qqe4 >> xx15;
		qqe4.close();
		ifstream qqf4("baka.txt");
		qqf4 >> xx16;
		qqf4.close();
		ifstream qqg4("baka.txt");
		qqg4 >> xx17;
		qqg4.close();
		ifstream kqi4("baka.txt");
		kqi4 >> xx30;
		kqi4.close();
		ifstream lqi4("baka.txt");
		lqi4 >> xx31;
		lqi4.close();
		ifstream mqi4("baka.txt");
		mqi4 >> xx32;
		mqi4.close();
		ifstream nqi4("baka.txt");
		nqi4 >> xx33;
		nqi4.close();
		ifstream oqi4("baka.txt");
		oqi4 >> xx34;
		oqi4.close();
		ifstream pqi4("baka.txt");
		pqi4 >> xx35;
		pqi4.close();
		ifstream rqi4("baka.txt");
		rqi4 >> xx36;
		rqi4.close();
		ifstream sqi4("baka.txt");
		sqi4 >> xx37;
		sqi4.close();
		ifstream tqi4("baka.txt");
		tqi4 >> xx38;
		tqi4.close();
		ifstream uqi4("baka.txt");
		uqi4 >> xx39;
		uqi4.close();


		if (file == name1)
		{
			ifstream oxi(name1 + ".txt");
			oxi >> n >> Barcelona1.name >> Barcelona1.fn >> Barcelona1.sn >> Barcelona1.date >> Barcelona1.time1 >> Barcelona1.time2;
			oxi.close();

			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Barcelona1.name << endl << "Flight Number : " << Barcelona1.fn << endl << "Number of Avilable Seats : " << Barcelona1.sn << endl << "Flight Date : " << Barcelona1.date << endl << "Departure Time : " << Barcelona1.time1 << endl << "Arrival Time : " << Barcelona1.time2 << endl;

		}
		else if (file == name2)
		{
			ifstream dxi("E:\\" + name2 + ".txt");
			dxi >> n >> Barcelona2.name >> Barcelona2.fn >> Barcelona2.sn >> Barcelona2.date >> Barcelona2.time1 >> Barcelona2.time2;
			dxi.close();


			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Barcelona2.name << endl << "Flight Number : " << Barcelona2.fn << endl << "Number of Avilable Seats : " << Barcelona2.sn << endl << "Flight Date : " << Barcelona2.date << endl << "Departure Time : " << Barcelona2.time1 << endl << "Arrival Time : " << Barcelona2.time2 << endl;


		}
		else if (file == name3)
		{
			ifstream o(name3 + ".txt");
			o >> n >> Madrid1.name >> Madrid1.fn >> Madrid1.sn >> Madrid1.date >> Madrid1.time1 >> Madrid1.time2;
			o.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Madrid1.name << endl << "Flight Number : " << Madrid1.fn << endl << "Number of Avilable Seats : " << Madrid1.sn << endl << "Flight Date : " << Madrid1.date << endl << "Departure Time : " << Madrid1.time1 << endl << "Arrival Time : " << Madrid1.time2 << endl;

		}
		else if (file == name4)
		{
			ifstream r(name4 + ".txt");
			r >> n >> Madrid2.name >> Madrid2.fn >> Madrid2.sn >> Madrid2.date >> Madrid2.time1 >> Madrid2.time2;
			r.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Madrid2.name << endl << "Flight Number : " << Madrid2.fn << endl << "Number of Avilable Seats : " << Madrid2.sn << endl << "Flight Date : " << Madrid2.date << endl << "Departure Time : " << Madrid2.time1 << endl << "Arrival Time : " << Madrid2.time2 << endl;

		}
		else if (file == name5)
		{
			ifstream d(name5 + ".txt");
			d >> n >> Paris1.name >> Paris1.fn >> Paris1.sn >> Paris1.date >> Paris1.time1 >> Paris1.time2;
			d.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Paris1.name << endl << "Flight Number : " << Paris1.fn << endl << "Number of Avilable Seats : " << Paris1.sn << endl << "Flight Date : " << Paris1.date << endl << "Departure Time : " << Paris1.time1 << endl << "Arrival Time : " << Paris1.time2 << endl;

		}
		else if (file == name6)
		{
			ifstream K(name6 + ".txt");
			K >> n >> Paris2.name >> Paris2.fn >> Paris2.sn >> Paris2.date >> Paris2.time1 >> Paris2.time2;
			K.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Paris2.name << endl << "Flight Number : " << Paris2.fn << endl << "Number of Avilable Seats : " << Paris2.sn << endl << "Flight Date : " << Paris2.date << endl << "Departure Time : " << Paris2.time1 << endl << "Arrival Time : " << Paris2.time2 << endl;

		}
		else if (file == name7)
		{

			ifstream oi(name7 + ".txt");
			oi >> n >> Lyon1.name >> Lyon1.fn >> Lyon1.sn >> Lyon1.date >> Lyon1.time1 >> Lyon1.time2;
			oi.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Lyon1.name << endl << "Flight Number : " << Lyon1.fn << endl << "Number of Avilable Seats : " << Lyon1.sn << endl << "Flight Date : " << Lyon1.date << endl << "Departure Time : " << Lyon1.time1 << endl << "Arrival Time : " << Lyon1.time2 << endl;
		}
		else if (file == name8)
		{
			ifstream rr(name8 + ".txt");
			rr >> n >> Lyon2.name >> Lyon2.fn >> Lyon2.sn >> Lyon2.date >> Lyon2.time1 >> Lyon2.time2;
			rr.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Lyon2.name << endl << "Flight Number : " << Lyon2.fn << endl << "Number of Avilable Seats : " << Lyon2.sn << endl << "Flight Date : " << Lyon2.date << endl << "Departure Time : " << Lyon2.time1 << endl << "Arrival Time : " << Lyon2.time2 << endl;

		}
		else if (file == name9)
		{
			ifstream cc(name9 + ".txt");
			cc >> n >> Berlin1.name >> Berlin1.fn >> Berlin1.sn >> Berlin1.date >> Berlin1.time1 >> Berlin1.time2;
			cc.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Berlin1.name << endl << "Flight Number : " << Berlin1.fn << endl << "Number of Avilable Seats : " << Berlin1.sn << endl << "Flight Date : " << Berlin1.date << endl << "Departure Time : " << Berlin1.time1 << endl << "Arrival Time : " << Berlin1.time2 << endl;



		}
		else if (file == name10)
		{
			ifstream ooo(name10 + ".txt");
			ooo >> n >> Berlin2.name >> Berlin2.fn >> Berlin2.sn >> Berlin2.date >> Berlin2.time1 >> Berlin2.time2;
			ooo.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Berlin2.name << endl << "Flight Number : " << Berlin2.fn << endl << "Number of Avilable Seats : " << Berlin2.sn << endl << "Flight Date : " << Berlin2.date << endl << "Departure Time : " << Berlin2.time1 << endl << "Arrival Time : " << Berlin2.time2 << endl;

		}
		else if (file == name11)
		{
			ifstream uuu(name11 + ".txt");
			uuu >> n >> Munich1.name >> Munich1.fn >> Munich1.sn >> Munich1.date >> Munich1.time1 >> Munich1.time2;
			uuu.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Munich1.name << endl << "Flight Number : " << Munich1.fn << endl << "Number of Avilable Seats : " << Munich1.sn << endl << "Flight Date : " << Munich1.date << endl << "Departure Time : " << Munich1.time1 << endl << "Arrival Time : " << Munich1.time2 << endl;

		}
		else if (file == name12)
		{
			ifstream qqq(name12 + ".txt");
			qqq >> n >> Munich2.name >> Munich2.fn >> Munich2.sn >> Munich2.date >> Munich2.time1 >> Munich2.time2;
			qqq.close();

			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Munich2.name << endl << "Flight Number : " << Munich2.fn << endl << "Number of Avilable Seats : " << Munich2.sn << endl << "Flight Date : " << Munich2.date << endl << "Departure Time : " << Munich2.time1 << endl << "Arrival Time : " << Munich2.time2 << endl;



		}
		else if (file == name13)
		{

			ifstream dss(name13 + ".txt");
			dss >> n >> Roma1.name >> Roma1.fn >> Roma1.sn >> Roma1.date >> Roma1.time1 >> Roma1.time2;
			dss.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Roma1.name << endl << "Flight Number : " << Roma1.fn << endl << "Number of Avilable Seats : " << Roma1.sn << endl << "Flight Date : " << Roma1.date << endl << "Departure Time : " << Roma1.time1 << endl << "Arrival Time : " << Roma1.time2 << endl;


		}
		else if (file == name14)
		{
			ifstream qwe(name14 + ".txt");
			qwe >> n >> Roma2.name >> Roma2.fn >> Roma2.sn >> Roma2.date >> Roma2.time1 >> Roma2.time2;
			qwe.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Roma2.name << endl << "Flight Number : " << Roma2.fn << endl << "Number of Avilable Seats : " << Roma2.sn << endl << "Flight Date : " << Roma2.date << endl << "Departure Time : " << Roma2.time1 << endl << "Arrival Time : " << Roma2.time2 << endl;

		}
		else if (file == name15)
		{
			ifstream ooi(name15 + ".txt");
			ooi >> n >> Turin1.name >> Turin1.fn >> Turin1.sn >> Turin1.date >> Turin1.time1 >> Turin1.time2;
			ooi.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Turin1.name << endl << "Flight Number : " << Turin1.fn << endl << "Number of Avilable Seats : " << Turin1.sn << endl << "Flight Date : " << Turin1.date << endl << "Departure Time : " << Turin1.time1 << endl << "Arrival Time : " << Turin1.time2 << endl;


		}
		else if (file == name16)
		{

			ifstream ceq(name16 + ".txt");
			ceq >> n >> Turin2.name >> Turin2.fn >> Turin2.sn >> Turin2.date >> Turin2.time1 >> Turin2.time2;
			ceq.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Turin2.name << endl << "Flight Number : " << Turin2.fn << endl << "Number of Avilable Seats : " << Turin2.sn << endl << "Flight Date : " << Turin2.date << endl << "Departure Time : " << Turin2.time1 << endl << "Arrival Time : " << Turin2.time2 << endl;


		}
		else if (file == name17)
		{
			ifstream hd(name17 + ".txt");
			hd >> n >> Alex1.name >> Alex1.fn >> Alex1.sn >> Alex1.date >> Alex1.time1 >> Alex1.time2;
			hd.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Alex1.name << endl << "Flight Number : " << Alex1.fn << endl << "Number of Avilable Seats : " << Alex1.sn << endl << "Flight Date : " << Alex1.date << endl << "Departure Time : " << Alex1.time1 << endl << "Arrival Time : " << Alex1.time2 << endl;


		}
		else if (file == name18)
		{
			ifstream tqt(name18 + ".txt");
			tqt >> n >> Alex2.name >> Alex2.fn >> Alex2.sn >> Alex2.date >> Alex2.time1 >> Alex2.time2;
			tqt.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Alex2.name << endl << "Flight Number : " << Alex2.fn << endl << "Number of Avilable Seats : " << Alex2.sn << endl << "Flight Date : " << Alex2.date << endl << "Departure Time : " << Alex2.time1 << endl << "Arrival Time : " << Alex2.time2 << endl;


		}
		else if (file == name19)
		{
			ifstream dyt(name19 + ".txt");
			dyt >> n >> Cairo1.name >> Cairo1.fn >> Cairo1.sn >> Cairo1.date >> Cairo1.time1 >> Cairo1.time2;
			dyt.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Cairo1.name << endl << "Flight Number : " << Cairo1.fn << endl << "Number of Avilable Seats : " << Cairo1.sn << endl << "Flight Date : " << Cairo1.date << endl << "Departure Time : " << Cairo1.time1 << endl << "Arrival Time : " << Cairo1.time2 << endl;


		}
		else if (file == name20)
		{
			ifstream rere(name20 + ".txt");
			rere >> n >> Cairo2.name >> Cairo2.fn >> Cairo2.sn >> Cairo2.date >> Cairo2.time1 >> Cairo2.time2;
			rere.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Cairo2.name << endl << "Flight Number : " << Cairo2.fn << endl << "Number of Avilable Seats : " << Cairo2.sn << endl << "Flight Date : " << Cairo2.date << endl << "Departure Time : " << Cairo2.time1 << endl << "Arrival Time : " << Cairo2.time2 << endl;


		}
		else if (file == name21)
		{
			ifstream ytr(name21 + ".txt");
			ytr >> n >> Bellywood1.name >> Bellywood1.fn >> Bellywood1.sn >> Bellywood1.date >> Bellywood1.time1 >> Bellywood1.time2;
			ytr.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Bellywood1.name << endl << "Flight Number : " << Bellywood1.fn << endl << "Number of Avilable Seats : " << Bellywood1.sn << endl << "Flight Date : " << Bellywood1.date << endl << "Departure Time : " << Bellywood1.time1 << endl << "Arrival Time : " << Bellywood1.time2 << endl;


		}
		else if (file == name22)
		{
			ifstream dt1(name22 + ".txt");
			dt1 >> n >> Bellywood2.name >> Bellywood2.fn >> Bellywood2.sn >> Bellywood2.date >> Bellywood2.time1 >> Bellywood2.time2;
			dt1.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Bellywood2.name << endl << "Flight Number : " << Bellywood2.fn << endl << "Number of Avilable Seats : " << Bellywood2.sn << endl << "Flight Date : " << Bellywood2.date << endl << "Departure Time : " << Bellywood2.time1 << endl << "Arrival Time : " << Bellywood2.time2 << endl;

		}
		else if (file == name23)
		{
			ifstream iii1(name23 + ".txt");
			iii1 >> n >> Newdelhi1.name >> Newdelhi1.fn >> Newdelhi1.sn >> Newdelhi1.date >> Newdelhi1.time1 >> Newdelhi1.time2;
			iii1.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Newdelhi1.name << endl << "Flight Number : " << Newdelhi1.fn << endl << "Number of Avilable Seats : " << Newdelhi1.sn << endl << "Flight Date : " << Newdelhi1.date << endl << "Departure Time : " << Newdelhi1.time1 << endl << "Arrival Time : " << Newdelhi1.time2 << endl;

		}
		else if (file == name24)
		{
			ifstream dt4(name24 + ".txt");
			dt4 >> n >> Newdelhi2.name >> Newdelhi2.fn >> Newdelhi2.sn >> Newdelhi2.date >> Newdelhi2.time1 >> Newdelhi2.time2;
			dt4.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Newdelhi2.name << endl << "Flight Number : " << Newdelhi2.fn << endl << "Number of Avilable Seats : " << Newdelhi2.sn << endl << "Flight Date : " << Newdelhi2.date << endl << "Departure Time : " << Newdelhi2.time1 << endl << "Arrival Time : " << Newdelhi2.time2 << endl;
		}
		else if (file == name25)
		{

			ifstream dt5(name25 + ".txt");
			dt5 >> n >> Riyadh1.name >> Riyadh1.fn >> Riyadh1.sn >> Riyadh1.date >> Riyadh1.time1 >> Riyadh1.time2;
			dt5.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Riyadh1.name << endl << "Flight Number : " << Riyadh1.fn << endl << "Number of Avilable Seats : " << Riyadh1.sn << endl << "Flight Date : " << Riyadh1.date << endl << "Departure Time : " << Riyadh1.time1 << endl << "Arrival Time : " << Riyadh1.time2 << endl;

		}
		else if (file == name26)
		{
			ifstream dt6(name26 + ".txt");
			dt6 >> n >> Riyadh2.name >> Riyadh2.fn >> Riyadh2.sn >> Riyadh2.date >> Riyadh2.time1 >> Riyadh2.time2;
			dt6.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Riyadh2.name << endl << "Flight Number : " << Riyadh2.fn << endl << "Number of Avilable Seats : " << Riyadh2.sn << endl << "Flight Date : " << Riyadh2.date << endl << "Departure Time : " << Riyadh2.time1 << endl << "Arrival Time : " << Riyadh2.time2 << endl;

		}
		else if (file == name27)
		{
			ifstream a000(name27 + ".txt");
			a000 >> n >> Jeddah1.name >> Jeddah1.fn >> Jeddah1.sn >> Jeddah1.date >> Jeddah1.time1 >> Jeddah1.time2;
			a000.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Jeddah1.name << endl << "Flight Number : " << Jeddah1.fn << endl << "Number of Avilable Seats : " << Jeddah1.sn << endl << "Flight Date : " << Jeddah1.date << endl << "Departure Time : " << Jeddah1.time1 << endl << "Arrival Time : " << Jeddah1.time2 << endl;
		}
		else if (file == name28)
		{
			ifstream b0000(name28 + ".txt");
			b0000 >> n >> Jeddah2.name >> Jeddah2.fn >> Jeddah2.sn >> Jeddah2.date >> Jeddah2.time1 >> Jeddah2.time2;
			b0000.close();
			cout << "\n\nYour Current City : " << n << endl << "Your Direct City : " << Jeddah2.name << endl << "Flight Number : " << Jeddah2.fn << endl << "Number of Avilable Seats : " << Jeddah2.sn << endl << "Flight Date : " << Jeddah2.date << endl << "Departure Time : " << Jeddah2.time1 << endl << "Arrival Time : " << Jeddah2.time2 << endl;
		}
		else if (file == xx)
		{
			ifstream file11;
			file11.open(xx + ".txt");
			file11 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file11.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;


		}
		else if (file == xx1)
		{
			ifstream file21;
			file21.open(xx1 + ".txt");
			file21 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file21.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;


		}
		else if (file == xx2)
		{
			ifstream file31;
			file31.open(xx2 + ".txt");
			file31 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file31.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;


		}
		else if (file == xx3)
		{
			ifstream file41;
			file41.open(xx3 + ".txt");
			file41 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file41.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;


		}
		else if (file == xx4)
		{
			ifstream file51;
			file51.open(xx4 + ".txt");
			file51 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file51.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;


		}
		else if (file == xx5)
		{
			ifstream file61;
			file61.open(xx5 + ".txt");
			file61 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file61.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx6)
		{
			ifstream file71;
			file71.open(xx6 + ".txt");
			file71 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file71.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx7)
		{
			ifstream file81;
			file81.open(xx7 + ".txt");
			file81 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file81.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx8)
		{
			ifstream file91;
			file91.open(xx8 + ".txt");
			file91 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			file91.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx9)
		{
			ifstream filea1;
			filea1.open(xx9 + ".txt");
			filea1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filea1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx10)
		{
			ifstream fileb1;
			fileb1.open(xx10 + ".txt");
			fileb1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			fileb1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx11)
		{
			ifstream filec1;
			filec1.open(xx11 + ".txt");
			filec1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filec1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx12)
		{
			ifstream filed1;
			filed1.open(xx12 + ".txt");
			filed1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filed1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx13)
		{
			ifstream filee1;
			filee1.open(xx13 + ".txt");
			filee1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filee1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx14)
		{
			ifstream filef1;
			filef1.open(xx14 + ".txt");
			filef1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filef1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx15)
		{
			ifstream fileg1;
			fileg1.open(xx15 + ".txt");
			fileg1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			fileg1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx16)
		{
			ifstream fileh1;
			fileh1.open(xx16 + ".txt");
			fileh1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			fileh1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx17)
		{
			ifstream filei1;
			filei1.open(xx17 + ".txt");
			filei1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filei1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx30)
		{
			ifstream filev1;
			filev1.open(xx30 + ".txt");
			filev1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filev1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx31)
		{
			ifstream filew1;
			filew1.open(xx31 + ".txt");
			filew1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filew1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx32)
		{
			ifstream filex1;
			filex1.open(xx32 + ".txt");
			filex1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filex1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx33)
		{
			ifstream filey1;
			filey1.open(xx33 + ".txt");
			filey1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filey1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx34)
		{
			ifstream filez1;
			filez1.open(xx34 + ".txt");
			filez1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			filez1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx35)
		{
			ifstream ailez1;
			ailez1.open(xx35 + ".txt");
			ailez1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			ailez1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx36)
		{
			ifstream bilez1;
			bilez1.open(xx36 + ".txt");
			bilez1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			bilez1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx37)
		{
			ifstream cilez1;
			cilez1.open(xx37 + ".txt");
			cilez1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			cilez1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx38)
		{
			ifstream dilez1;
			dilez1.open(xx38 + ".txt");
			dilez1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			dilez1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else if (file == xx39)
		{
			ifstream eilez1;
			eilez1.open(xx39 + ".txt");
			eilez1 >> city1 >> city2 >> date >> *ptr1 >> *ptr2 >> fn >> *ptr3;
			eilez1.close();

			cout << "**Your New Flight Information Is**\n" << "Your Current City is " << city1 << endl << "Your Second City is " << city2 << endl << "Your Flight Date is  " << date << endl << "Your Launch time is " << *ptr1 << endl << "Your Arrive time is " << *ptr2 << endl << "Your Flight number is " << fn << endl << "Your sit number is " << *ptr3;

		}
		else
			cout << "Error .\n";

	}

	return 0;
}
