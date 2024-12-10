#include <iostream>
#include <string>
using namespace std;

class Book{
    public:

    string title;
    string author;
    double price;

void displayDetails(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}
};
int main() {

    Book book1;
    Book book2;


    book1.title = "Pride and Prejudice";
    book1.author = "Jane Austen";
    book1.price = 385.000;

    // Assign values to book2's attributes
    book2.title = "Jakarta Sebelum Pagi";
    book2.author = "Ziggy Zezsyazeoviennazabrizkie";
    book2.price = 62.000;


    cout << "Book 1 Details:" << endl;
    book1.displayDetails();

    cout << "\nBook 2 Details:" << endl;
    book2.displayDetails();

    return 0;
}
