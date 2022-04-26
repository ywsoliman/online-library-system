#include <iostream>
#include "User.h"
#include "Book.h"

using namespace std;

int main()
{
	cout << "Enter number of users: ";
	int usersNum; cin >> usersNum;
	User* users = new User[usersNum];

	for (int i = 0; i < usersNum; i++) {
		cin >> users[i];
	}

	cout << "Enter number of books: ";
	int booksNum; cin >> booksNum;
	Book* books = new Book[booksNum];
	for (int i = 0; i < booksNum; i++) {
		cin >> books[i];
	}

	books[0].setAuthor(users[0]);
	books[0].rateBook(3);
	books[0].rateBook(4);
	books[0].rateBook(5);

	cout << books[0];

	return 0;
}