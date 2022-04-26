#pragma once
#include <iostream>
#include <vector>
#include "User.h"

using namespace std;

class Book
{
private:
	string title;
	string isbn;
	int id;
	string category;
	double averageRating;
	int lastTotalRating;
	int ratingCounts;
	User author;
public:
	static int count;
	Book();
	Book(string title, string isbn, string category);
	Book(const Book& book);
	void setTitle(string title);
	string getTitle();
	void setISBN(string isbn);
	string getISBN();
	void setId(int id);
	int getId();
	void setCategory(string category);
	string getCategory();
	void setAuthor(User user);
	User getAuthor();
	void rateBook(int rating);
	bool operator==(const Book& book);
	friend ostream& operator<<(ostream& output, const Book& book);
	friend istream& operator>>(istream& input, Book& book);
};