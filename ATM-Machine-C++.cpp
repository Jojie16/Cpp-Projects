#include<iostream>
#include<fstream>
#include<windows.h>
#include<string>
using namespace std;

void mainATM();
void welcome();



void webZ()
{
   ShellExecute(NULL, "open", "http://polard.ml",
                NULL, NULL, SW_SHOWNORMAL);
                
}


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
	cin >> password;
	
	if (password == "123"){
		welcome();
		mainATM();
	}
	else{
		system("cls");
		cout << " Error!" << endl;
		cout << "Invalid password!" << endl;
		logForm();
	}
	
	
}


void welcome(){
	
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
			system("https://google.com");
			cout << "Enter deposit amount: ";
			cin >> deposit;
			balance = balance + deposit;
			break;
			
		case 2:
		
			cout << "Enter withdraw amount: ";
			cin >> withdraw;
			balance = balance - withdraw;
			break;
			
		case 3:
		
			cout << "Your balance is $" << balance << endl;
			break;
			
		case 4:
			
			system("cls");
			cout << "Receipt...." << endl;
			mainloop = false;
			break;
			
		case 5:
			
			webZ();
			break;
			
		}
		
	}while(mainloop != false);
}


int main() {
	
	logForm();
	
	
	return 0;
}