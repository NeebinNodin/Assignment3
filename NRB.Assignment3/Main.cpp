#include <iostream>
#include <conio.h>

using namespace std;

// struct and it's values
struct Book
{
	string Title;
	string Author;
	int Year;
	int NumPages;
};


int main()
{
	// array of books
	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS] =
	{
		{ "Gardens of the Moon", "Steven Erikson", 1999, 494 },
		{ "Deadhouse Gates", "Steven Erikson", 2000, 843 },
		{ "The Way of Kings", "Brandon Sanderson", 2010, 1258 },
		{ "Mistborn", "Brandon Sanderson", 2006, 669 }
	};

	// display books
	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << (i + 1) << "." << books[i].Title << "\n";
		cout << "Author: " << books[i].Author << "\n";
		cout << "Year Published: " << books[i].Year << "\n";
		cout << "Number of Pages: " << books[i].NumPages << "\n\n";
	}
	
	//
	cout << "Enter the ID of the book you would like to update (1-4): ";
	int bookNum;
	cin >> bookNum;
	bookNum--;
	cout << "\n";

	//verify book number
	if (bookNum >= 0 && bookNum < NUM_BOOKS)
	{
		//update book
		Book temp = books[bookNum];
		cout << bookNum + 1 << "." << books[bookNum].Title << "\n";
		cout << "Enter the Author (" << books[bookNum].Author << "): ";
		cin >> temp.Author;
		cout << "Enter the Year (" << books[bookNum].Year << "): ";
		cin >> temp.Year;
		cout << "Enter the Number of Pages (" << books[bookNum].NumPages << "): ";
		cin >> temp.NumPages;

		//save changes
		string saveChanges;
		cout << "Would you like to save changes? (Y/N): ";
		cin >> saveChanges;
		cout << "\n";

		//display updated book
		if (saveChanges == "Y" || saveChanges == "y")
		{
			books[bookNum] = temp;
			cout << bookNum + 1 << "." << books[bookNum].Title << "\n";
			cout << "Author: " << books[bookNum].Author << "\n";
			cout << "Year Published: " << books[bookNum].Year << "\n";
			cout << "Number of Pages: " << books[bookNum].NumPages << "\n\n";
		}
		else
			cout << "Changes not saved!\n";
	}
	else
		cout << "Invalid book number!\n";
	
	
	(void)_getch();
	return 0;
}