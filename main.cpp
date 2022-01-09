#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

class BS
{
	long amount;
	long acn;
	char pass[29] = "AryanLikesFatherMother2010@?";
	char name[11];
	char adr[31];
	public:
		void menu(void);
	private:
		void crac(void);
		void viac(void);
		void aviac(void);
		void tranc(void);
		void dlac(void);

};




int main(int argc, char const *argv[])
{
	return 0;
}




void BS :: crac(void)
{
	int i;
			cout << "To open an account\n-----------------------------------------------------\nYou have to enter the following information:-\n1.Your Name(10 characters long):";
	for (i=0;i<11;i++)
	{
		cin >> name[i];
	}

	cout << "\n2.Your Address(30 characters long) :";
	for (i=0;i<31;i++)
	{
		cin >> adr[i];
	}
	
	srand(time(0));
	acn = rand();
	cout << "\nYour Account number is:" << acn << endl;
	fstream ac;
	string temp= "A";
	temp.append({(char(acn))});
	temp.append(".dat");
	ac.open(temp,ios :: out);
	ac <<"name:" << name << endl  << "Address:" <<adr << endl << "Account Number:"  << acn <<"balance:\n000000000000";  
	fstream alac;
	alac.open("all.dat",ios::app);
	alac <<"name:" << name << endl  << "Address:" <<adr << endl << "Account Number:"  << acn <<"balance:\n000000000000"; 
	ac.close();
	alac.close();
}

void BS :: viac(void)
{
	int temp;
	char temp4[90];
	string temp2 = "A";
	cout << "Enter Account Number:";
	cin >>temp;
	cout << endl;
	temp2.append({char(temp)});
	temp2.append(".dat");
	fstream temp3;
	try
	{
	temp3.open(temp2,ios::in);
	}
	catch(...)
	{
		cout << "Account does not exist" << endl;
	}
	while (temp3)
	{
		temp3.getline(temp4,90);
 	 	cout <<temp4 <<endl;
	}
	temp3.close();
}
void BS ::aviac(void)
{
	char aka[90];
	int i;
	string pemp;
	cout <<"--------------------------\n       Enter The following             \n1.THE PASS:";
	cin >> pemp;
	if (pemp == pass)
	{
		fstream tti;
		tti.open("all.dat");
		while (tti)
		{
			tti.getline(aka,90);
			cout << aka << endl;
			tti.close();
		}
	}
	else
	{
		cout << "Invalid PASS\n";
	}
	
}
void BS :: tranc(void)
{
	string temp2 = "A";
	string temp = "A";
	char car[13];
	int a;
	fstream Y;
	long int b,c,d;
	cout << "Which TYPE of transaction you Want to Make\n----------------------------------------------------------\n1.Deposite\n2.Withdraw\n3.Money Transfer\nEnter your choice:";
	cin >> a;
	switch(a)
	{
		case 1:
			cout << endl << "1.Account no.:";
			cin >>b;
			temp.append({char(b)});
			try
			{
				Y.open(temp,ios::out | ios::in | ios::app);
			}
			catch(...)
			{
				cout<< "Account does not exist";
			}
			Y.seekp(-12,ios::end);
			cout <<"2.Amount(12 digits if not then enter zero.12 digits is strictly required):";
			cin >> c;
			Y << c;
		break;
		case 2:
		int temp;
		fstream tile;
		cout << endl << "1.Account no.:";
			cin >>b;
			temp2.append({char(b)});
			try
			{
				tile.open(temp2,ios::out |ios::in | ios::app);
			}
			catch(...)
			{
				cout<< "Account does not exist";
			}
			tile.seekg(-12,ios::end); 
			while(tile)
			{
				tile.getline(car,12);
			}
			temp = long(car);
		cout << "\nAmount:";
		cin >> d;
		int l = temp-d;
        string haka;
		if (l>=0)
		{
			tile.seekp(-12,ios::end);
			if (l>=0 and l<10)
			{
				haka = "00000000000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=10 and l<100)
			{
				haka = "0000000000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=100 and l<1000)
			{
				haka = "000000000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=1000 and l<10000)
			{
				haka = "00000000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=10000 and l<100000)
			{
				haka = "0000000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=100000 and l<1000000)
			{
				haka = "000000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=1000000 and l<10000000)
			{
				haka = "00000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=10000000 and l<100000000)
			{
				haka = "0000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=100000000 and l<1000000000)
			{
				haka = "000";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=1000000000 and l<10000000000)
			{
				haka = "00";
                haka.append({char(l)});
                tile << haka;
			}
			if (l>=10000000000 and l<100000000000)
			{
				haka = "0";
                haka.append({char(l)});
                tile << haka;
			}
  			if (l>=100000000000 and l<1000000000000)
			{
				haka = "l";
                tile << haka;
			}
			if (l>1000000000000)
			{
				cout << "Money out of range\n";
			}
		}
		else
		{
			cout << "Your Account does not have enough money\n";
		}
		break;

	}
}
