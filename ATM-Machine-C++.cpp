#include<iostream>
#include<fstream>
#include<windows.h>
#include<string>
#include<cmath>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

// Random Code Generator //

string random(int len)
{
	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string r;
	srand(time(NULL));
	for(int i = 0; i < len; i++) r.push_back(a.at(size_t(rand() % 62)));
	return r;
}


void mainATM();
void welcome();


void option() {
	
	cout << "\n\t\t" << "********** MENU **********" << "\n\n";
	cout << "\t\t" << " 1. Deposit \n";
	cout << "\t\t" << " 2. Withdraw\n";
	cout << "\t\t" << " 3. Check Balance \n";
	cout << "\t\t" << " 4. Exit \n";
	cout << "\n\t\t" << "****************************" << "\n\n";
	
	
}


void logForm() {
	
	
	string password;
	
	cout << "\n\t\t" << "********** ATM LOGIN **********" << "\n\n";
	cout << "\n\t\t" << "Username: admin" << endl;
	cout << "\n\t\t" << "Password: ";
    getline (cin, password);

	if (password == "123"){
        Sleep(3000);
		welcome();
		mainATM();
	}
	else{
        Sleep(3000);
		system("cls");
		cout << " Error!" << endl;
		cout << "Invalid password!" << endl;
		logForm();
	}
	
	
}


void welcome(){
	
    system("cls");
	cout << "\n\n\n\t\t\t" << "********** WELCOME **********" << "\n\n\n";
	system("pause");
	system("cls");
	
}


void mainATM(){
	
	// Variables
	
	int opt;
	double deposit = 0.0;
	double withdraw = 0.0;
	double balance = 0.0;
	bool mainloop = true;
	
	do{	
	
	option();
	cout << "Please choose: ";
	cin >> opt;
	system("cls");
	
	
	switch(opt){
		
		case 1:
			cout << "Enter deposit amount: ";
			cin >> deposit;
			balance = balance + deposit;
			break;
			
		case 2:
		
			cout << "Enter withdraw amount: ";
			cin >> withdraw;
			
			if(balance < withdraw){
				cout << "Not enough balance" << endl;
                cout << "\n" << "!Remember your balance is: $" << balance << endl;
                cout << "***************************************************************************\n\n";
			}
			else{
				balance = balance - withdraw;
			}
			
			break;
			
		case 3:
		
			cout << "Your balance is $" << balance << endl;
			break;
			
		case 4:
			
			system("cls");
			cout << "Receipt...." << endl;
            Sleep(3000);
            cout << "\n\t\t" << "************* Thankyou for using our ATM Machine *************\n\n";
            cout << "\t\t" << "You withdraw: $" << withdraw;
            cout << "\t" << "||";
            cout << "\t" << "Your balance left is: $" << balance;
            cout << "\n\n\t\t\t" << "Transaction code: ";
            cout << random(12) << endl;
            cin.get();
            cout << "\n\t" << "******************************************************************************\n\n";
			mainloop = false;
			break;

			default:
                cout << "!Invalid option" << endl;
		}
		
	}while(mainloop != false);
}


int main() {
	
	logForm();
	
	
	return 0;
}
