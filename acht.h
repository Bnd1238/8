#ifndef CH
#define CH

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class student
{

	int age;
	string name;
	string surname;
	int ball;

public:
	student()
	{
		age = 0;
		name = "";
		surname = "";
		ball = 0;
		std::cout << endl << "open " << this << endl;
	}
	student(const student& qwe)
	{
		age = qwe.age;
		name = qwe.name;
		surname = qwe.surname;
		ball = qwe.ball;
		std::cout << endl << "open " << this  << endl;
	}
	~student()
	{
		std::cout << endl << "close " << this << endl;
	}

	string GetName()const;
	string GetSurname()const;
	int GetAge ()const;
	int GetBall()const;

	void SetName(string);
	void SetSurname(string);
	void SetAge(int);
	void SetBall(int);
	void operator =(student a);
	void print();
};
ostream& operator<<(ostream& os, const student& s);

#endif