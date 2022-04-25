#include "User.h"

int User::count = 0;

User::User()
{
	count++;
	name = "";
	age = 0;
	id = count;
	password = "";
	email = "";
}

User::User(string name, int age, string email, string password) : name(name), age(age), email(email), password(password) {}

User::User(const User& user)
{
	name = user.name;
	age = user.age;
	id = user.id;
	password = user.password;
	email = user.email;
}

bool User::operator==(const User& user)
{
	if (
		name == user.name &&
		age == user.age &&
		id == user.id &&
		email == user.email
		)
		return true;
	return false;
}

void User::setName(string name)
{
	this->name = name;
}
string User::getName() const
{
	return name;
}

void User::setAge(int age)
{
	this->age = age;
}
int User::getAge()
{
	return age;
}

void User::setId(int id)
{
	this->id = id;
}
int User::getId()
{
	return id;
}

void User::setPassword(string password)
{
	this->password = password;
}
string User::getPassword()
{
	return password;
}

void User::setEmail(string email)
{
	this->email = email;
}
string User::getEmail()
{
	return email;
}

ostream& operator<<(ostream& output, const User& user)
{
	cout << endl;
	output << "========== User " << user.id << " info ==========" << endl;
	output << "Name: " << user.name << "\nAge: " << user.age << "\nID: " << user.id << "\nEmail: " << user.email << endl;
	output << "=====================================" << endl;
	cout << endl;
	return output;
}

istream& operator>>(istream& input, User& user)
{
	if (user.id == 1)
		cout << "Let's add a user" << endl;
	else
		cout << "Let's add another user" << endl;
	cout << "Enter the user information in this order" << endl;
	cout << "Name Age Email Password (Space separated)." << endl;
	input >> user.name >> user.age >> user.email >> user.password;
	return input;
}