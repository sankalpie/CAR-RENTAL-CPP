#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

using namespace std;

string global_username;

class customer
{
private:
public:
  string customername;
  string carmodel;
  string carnumber;
  char data;
};

class rent : public customer
{
public:
  int days = 0, rentalfee = 0;
  void data()
  {
    void login();
    login();
    cout << "\t\t\tUsername: " << global_username << endl
         << endl
         << endl;
    cout << "\tPlease Enter your Name: ";
    cin >> customername;
    ofstream fp("data.txt", ios::app);
    fp << customername << ", ";

    cout << endl;
    do
    {
      cout << "\tPlease Select a Car" << endl;
      cout << "\tEnter 'A' for Ferrari 2022." << endl;
      cout << "\ttEnter 'B' for Hyundai Creta 2019." << endl;
      cout << "\tEnter 'C' for Ford 2019." << endl;
      cout << "\tEnter 'D' for Alto-800." << endl;
      cout << "\tEnter 'E' for Swift Dzire." << endl;
      cout << "\tEnter 'F' for Audi Q5." << endl;
      cout << "\tEnter 'G' for Innova Traveller." << endl;
      cout << endl;
      cout << "\tChoose a Car from the above options: ";
      cin >> carmodel;
      cout << endl;
      cout << "--------------------------------------------------------------------------" << endl;
      if (carmodel == "A")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Ferrari model 2022" << endl;
        // trying to file write

        string carname = "Ferrari model 2022, ";

        ofstream fp("data.txt", ios::app);
        fp << carname;
        sleep(2);
      }
      if (carmodel == "B")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Hyundai Creta model 2019" << endl;

        string carname = "Hyundai Creta Model 2019, ";

        ofstream fp("data.txt", ios::app);

        fp << carname;

        sleep(2);
      }
      if (carmodel == "C")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Ford model 2019" << endl;

        string carname = "Ford Model 2019, ";

        ofstream fp("data.txt", ios::app);
        fp << carname;

        sleep(2);
      }
      if (carmodel == "D")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Alto800 2002" << endl;

        string carname = "Alto800 2002, ";

        ofstream fp("data.txt", ios::app);
        fp << carname;

        sleep(2);
      }
      if (carmodel == "E")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Swift Dzire" << endl;

        string carname = "Swift Dzire, ";

        ofstream fp("data.txt", ios::app);
        fp << carname;

        sleep(2);
      }
      if (carmodel == "F")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Audi Q5" << endl;

        string carname = "AudiQ5, ";

        ofstream fp("data.txt", ios::app);
        fp << carname;

        sleep(2);
      }
      if (carmodel == "G")
      {
        system("CLS");
        cout << "\t\t\tUsername: " << global_username << endl
             << endl
             << endl;

        cout << "You have choosed Innova Traveller" << endl;

        string carname = "Innova Traveller, ";

        ofstream fp("data.txt", ios::app);
        fp << carname;

        sleep(2);
      }
      if (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "D" && carmodel != "E" && carmodel != "F" && carmodel != "G")

        cout << "Invaild Car Model. Please try again!" << endl;
    } while (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "D" && carmodel != "E" && carmodel != "F" && carmodel != "G");
    // ofstream fp("data.txt", ios::app);
    // fp << customername<<", ";

    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Please provide following information: " << endl;

    cout << "How many cars do you wish to rent (Car Number) : ";
    cin >> carnumber;

    fp << carnumber << ", ";

    cout << "Number of days you wish to rent the car : ";
    cin >> days;
    fp << days;
    cout << endl;
  }
  void calculate()
  {
    sleep(1);
    system("CLS");

    cout << "Calculating rent. Please wait......" << endl;
    sleep(2);
    if (carmodel == "A" || carmodel == "a")
      rentalfee = days * 56;
    if (carmodel == "B" || carmodel == "b")
      rentalfee = days * 60;
    if (carmodel == "C" || carmodel == "c")
      rentalfee = days * 75;
    if (carmodel == "D" || carmodel == "d")
      rentalfee = days * 80;
    if (carmodel == "E" || carmodel == "e")
      rentalfee = days * 85;
    if (carmodel == "F" || carmodel == "F")
      rentalfee = days * 70;
    if (carmodel == "G" || carmodel == "g")
      rentalfee = days * 100;
    ofstream fp("data.txt", ios::app);
    fp << ", rental fee is " << rentalfee << endl;
  }
  void showrent()
  {
    cout << "\n                       Car Rental - Customer Invoice                  " << endl;
    cout << "	///////////////////////////////////////////////////////////" << endl;
    cout << "	| Invoice No. :"
         << "------------------|" << setw(10) << "#Cnb81353"
         << " |" << endl;
    cout << "	| Customer Name:"
         << "-----------------|" << setw(10) << customername << " |" << endl;
    cout << "	| Car Model :"
         << "--------------------|" << setw(10) << carmodel << " |" << endl;
    cout << "	| Car No. :"
         << "----------------------|" << setw(10) << carnumber << " |" << endl;
    cout << "	| Number of days :"
         << "---------------|" << setw(10) << days << " |" << endl;
    cout << "	| Your Rental Amount is :"
         << "--------|" << setw(10) << rentalfee << " |" << endl;
    cout << "	| Caution Money :"
         << "----------------|" << setw(10) << "0"
         << " |" << endl;
    cout << "	| Advanced :"
         << "---------------------|" << setw(10) << "0"
         << " |" << endl;
    cout << "	 ________________________________________________________" << endl;
    cout << "\n";
    cout << "	| Total Rental Amount is :"
         << "-------|" << setw(10) << rentalfee << " |" << endl;
    cout << "	 ________________________________________________________" << endl;
    cout << "	 # This is a computer generated invoce and it does not" << endl;
    cout << "	 require an authorised signture #" << endl;
    cout << " " << endl;
    cout << "	///////////////////////////////////////////////////////////" << endl;
    cout << "	You are advised to pay up the amount before due date." << endl;
    cout << "	Otherwise penelty fee will be applied" << endl;
    cout << "	///////////////////////////////////////////////////////////" << endl;
    int f;
    system("PAUSE");

    system("CLS");

    ifstream inf("thanks.txt");

    char str[300];

    while (inf)
    {
      inf.getline(str, 300);
      if (inf)
        cout << str << endl;
    }
    inf.close();
  }
};
class welcome
{
  ;

public:
  void welcum()
  {
    ifstream in("welcome.txt");

    if (!in)
    {
      cout << "Cannot open input file.\n";
    }
    char str[1000];
    while (in)
    {
      in.getline(str, 1000);
      if (in)
        cout << str << endl;
    }
    in.close();
    sleep(1);
    cout << "\nStarting the program please wait....." << endl;
    sleep(1);
    cout << "\nloading up files....." << endl;
    sleep(1);
    system("CLS");
  }
};
int main()
{
  int choice = 1;
  while (choice == 1)
  {
    welcome obj1;
    obj1.welcum();
    rent obj2;

    obj2.data();
    obj2.calculate();
    obj2.showrent();
    cout << endl
         << endl
         << "Do you wish to rent more cars?" << endl
         << "Press 1 for YES, Press any other key for NO: " << endl;

    cin >> choice;
    system("CLS");
  }

  return 0; // end of the program
}

void login()
{
  string pass = "";
  char ch;
  cout << "\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
  cout << "\t------------------------------";
  cout << "\n\tLOGIN \n";
  cout << "\t------------------------------\n\n";
  cout << "\n\tEnter your username: ";
  string username;
  cin >> username;
  global_username = username;
  cout << endl;
  cout << "\tEnter Password: ";
  ch = _getch();
  while (ch != 13)
  {
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
  }

  if ((username == "sankalp" || username == "ashish" || username == "vanshaj" || username == "nishit" || username == "gaurav") && (pass == "soni" || pass == "pareek" || pass == "gupta" || pass == "maheta" || pass == "rajora"))
  {
    cout << "\n\n\n\tAccess Granted! \n";
    system("PAUSE");
    system("CLS");
  }
  else
  {
    cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
    system("PAUSE");
    system("CLS");
    login();
  }
}
