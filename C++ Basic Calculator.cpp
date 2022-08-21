
//// Basic Calculator using C++ /////


#include<iostream>
#include<string>
using namespace std;

// declare the function //

void mainCalculator();
void option();


void logIn() {

	string password;
	bool reLogin = true;

	// loopLogin //
	
	while (reLogin != false) {

		cout << "\n\t\t" << "***************** PLEASE LOGIN *****************" << "\n\n";

		cout << "\t\t" << "Enter username: admin" << endl;
		cout << "\t\t" << "Enter password: ";
		cin >> password;

		// Condition //

		if (password == "larcy143") {
			reLogin = false;
			system("cls");
			cout << "Login successfully!" << endl;
			mainCalculator();
		}
		else {
			system("cls");
			cout << "\n Invalid password!" << endl;
			logIn();
		}

	}
}


void option() {

	cout << "\n\n\t\t" << "**************~OPTION~**************" << "\n\n";
	cout << "\n\n\t\t" << "(+) - Plus" << endl;
	cout << "\t\t" << "(-) - Minus" << endl;
	cout << "\t\t" << "(/) - Devide" << endl;
	cout << "\t\t" << "(*) - Times" << endl;
	cout << "\t\t" << "( X or x) - To exit the program" << endl;
	cout << "\n\n\t\t" << "*********************************" << "\n\n";

}


void mainCalculator() {

	// Operation //

	option();


	// Variables //

	int numOne;
	int numTwo;
	char opr;

	/// reUse ///



		cout << "Enter first number: ";
		cin >> numOne;

		cout << "Enter an operation: ";
		cin >> opr;

		cout << "Enter second number: ";
		cin >> numTwo;


		


		switch (opr) {

		case '+':

			cout << numOne << " + " << numTwo << " = (" << numOne + numTwo << ")" << endl;
			break;

		case '-':

			cout << numOne << " - " << numTwo << " = (" << numOne - numTwo << ")" << endl;
			break;

		case '/':
			cout << numOne << " / " << numTwo << " = (" << numOne / numTwo << ")" << endl;
			break;

		case '*':
			cout << numOne << " * " << numTwo << " = (" << numOne * numTwo << ")" << endl;
			break;


		default:

			system("cls");
			cout << "Please enter a valid key" << endl;
			mainCalculator();
			break;

		}

}

void reUseOpt() {

	char ans;
	bool anst = true;
	
	while (anst != false) {

		cout << "\n\n\t\t" << "Would you like to reuse?\n\t\tOr Would you like to close it\n";
		cout << "reUse - (R/r)" << endl;
		cout << "Close - (X/x)" << endl;
		cin >> ans;

		switch (ans) {

		case 'X':
			cout << "Program shutdown" << endl;
			anst = false;
			break;

		case 'x':
			cout << "Program shutdown" << endl;
			anst = false;
			break;

		case 'R':
			system("cls");
			mainCalculator();
			break;

		case 'r':
			system("cls");
			mainCalculator();
			break;


		default:

			cout << "Please enter a valid character";
			reUseOpt();
			break;



		}

	}
}


int main() {

	logIn();
	reUseOpt();

	return 0;
}