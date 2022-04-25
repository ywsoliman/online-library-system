#include <iostream>
#include "User.h"

using namespace std;

int main()
{
	cout << "Enter number of users: ";
	int usersNum; cin >> usersNum;
	User* users = new User[usersNum];

	for (int i = 0; i < usersNum; i++) {
		cin >> users[i];
		cout << users[i];
	}
	return 0;
}