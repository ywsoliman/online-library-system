#include "Book.h"

int Book::count = 0;

Book::Book()
{
	count++;
	title = "";
	isbn = "";
	id = count;
	category = "";
	averageRating = 0.0;
	lastTotalRating = 0;
	ratingCounts = 0;
}

Book::Book(string title, string isbn, string category) : title(title), isbn(isbn), category(category) {}

Book::Book(const Book& book)
{
	title = book.title;
	isbn = book.isbn;
	id = book.id;
	category = book.category;
	averageRating = book.averageRating;
}

void Book::setTitle(string title)
{
	this->title = title;
}
string Book::getTitle()
{
	return title;
}
void Book::setISBN(string isbn)
{
	this->isbn = isbn;
}
string Book::getISBN()
{
	return isbn;
}
void Book::setId(int id)
{
	this->id = id;
}
int Book::getId()
{
	return id;
}
void Book::setCategory(string category)
{
	this->category = category;
}
string Book::getCategory()
{
	return category;
}
void Book::setAuthor(User user)
{
	author = user;
}
User Book::getAuthor()
{
	return author;
}

void Book::rateBook(int rating)
{
	lastTotalRating += rating;
	ratingCounts++;
	averageRating = lastTotalRating / ratingCounts;
}

bool Book::operator==(const Book& book)
{
	if (title == book.title && category == book.category && id == book.id && author == book.author)
		return true;
	return false;
}

ostream& operator<<(ostream& output, const Book& book)
{
	output << "========== Book " << book.id << " info ==========" << endl;
	output << "Title: " << book.title << "\nISBN: " << book.isbn << "\nCategory: " << book.category << "\nAverage Rating: " << book.averageRating << endl;
	output << "=====================================" << endl;
	if (book.author.getName() != "") {
		output << "Author of Book #" << book.id << ":" << endl;
		output << book.author << endl;
	}
	return output;
}

istream& operator>>(istream& input, Book& book)
{
	if (book.id == 1)
		cout << "Let's add a book" << endl;
	else
		cout << "Let's add another user" << endl;
	cout << "Enter the user information in this order" << endl;
	cout << "Title ISBN Category (Space separated)." << endl;
	input >> book.title >> book.isbn >> book.category;
	return input;
}