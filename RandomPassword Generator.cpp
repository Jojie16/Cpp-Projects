#include<iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

	
	string random(int len)
{
	cout << "Enter how many password u want: ";
	cin >> len;

	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+={}[];:'""'";
	string r;
	srand(time(NULL));
	for(int i = 0; i < len; i++) r.push_back(a.at(size_t(rand() % 84)));
	return r;
	

}

int main (){
	
	while(true){
	cout << random(0) << "\n\n";
	}
	return 0;
}
