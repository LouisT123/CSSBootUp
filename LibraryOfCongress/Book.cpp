#include "Book.h"


Book::Book()
{
	cout << "default contructor is Running" << endl;
	title = "";
	length = 0;
	bookmark = 0;
	author = "";
}

Book::Book(string title, string author)
{
	cout << "title/author contructor is Running" << endl;
	this->title = title;
	length = 0;
	bookmark = 0;
	this->author = author;
}

string Book::getTitle() const
{
	return title;
}

string Book::getAuthor() const
{
	return author;
}

int Book::getLength() const
{
	return length;
}

int Book::getBookmark() const
{
	return bookmark;
}

float Book::getCost() const
{
	return cost;
}

bool Book::Equal(const Book& rhsBook)
{
	//books are equal if author and title are same for both books
	if ((title == rhsBook.getTitle()) && (author == rhsBook.getAuthor()))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool Book::setTitle(string title)
{
	this->title = title;
	return true;
}

bool Book::setAuthor(string author)
{
	//pointers and this keyword (this-> is a pointer to the current instance of the object)
	//and ->author end is the variable in that current instance.
	this->author = author; //what this line of code does is set the author of what was passed into the instance variable 
	return true;
}

bool Book::setLength(int length)
{
	//validation
	if (length < 0)
	{
		return false;
	}
	else
	{
		this->length = length;
		return true;
	}
}

bool Book::setBookmark(int bookmark)
{
	if ((bookmark > 0) && (bookmark <= length))
	{
		this->bookmark = bookmark;
		return true;
	}
	else
	{
		return false;
	}

}

bool Book::setCost(float cost)
{
	this->cost = cost;
	return true;
}

int Book::TurnPage(int numPages)
{

	setBookmark(bookmark + numPages);
	return bookmark;
}

void Book::PrintDetails(ostream &theStream) const
{
	theStream << "Title: " << getTitle() << endl;
	theStream << "Author: " << getAuthor() << endl;
	theStream << "Length: " << getLength() << endl;
	theStream << "Bookmark: " << getBookmark() << endl;
	theStream << "Cost: " << getCost() << endl;

}


