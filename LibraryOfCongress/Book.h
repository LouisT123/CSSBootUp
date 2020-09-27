#pragma once
#include <string>
#include <iostream> //for cout in .cpp
using namespace std; //for cout in .cpp

class Book
{
public:
	//default contructor
	Book();
	//constructor
	Book(string title, string author);
	//getters for encapsulation
	string getTitle() const;
	string getAuthor() const;
	int getLength() const;
	int getBookmark() const;
	float getCost() const;

	//see if book passed in is equal to right hand side book
	bool Equal(const Book& rhsBook);

	//setters
	bool setTitle(string title);
	bool setAuthor(string author);
	bool setLength(int length);
	bool setBookmark(int bookmark);
	bool setCost(float cost);

	//adding some verbs or actions

	//Turn page will take an integer value and it would just update the bookmark that
	//number of pages and make sure that it was valid and will return the page it is on.
	int TurnPage(int numPages);

	//method print details will print out all of the information of the book itself.
	void PrintDetails(ostream &theStream) const;

private:
	//data type
	string title;
	int length = 0;
	int bookmark= 0;
	string author;
	float cost = 0;
};

