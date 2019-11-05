#include <iostream>
using namespace std;
class Book
{public:
	Book(char, double, int);
	void borrow();
	void restore();
	void display();
 private:
	 char bookname;
	 double price;
	 int number;
};
Book::Book(char a, double b, int c)
{
	bookname = a;
	price = b;
	number = c;
}
void Book::borrow()
{
	number--;
}
void Book::restore()
{
	number++;
}
void Book::display()
{
	cout << bookname <<" "<< price <<" "<< number<<endl;
}
int main()
{
	Book computer('C', 59.00, 10);
	Book economics('E', 100.00, 10);
	computer.borrow();
	computer.display();
	economics.restore();
	economics.display();
}

