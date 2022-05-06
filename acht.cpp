#include "acht.h"
#include <iostream>
#include <string>
#include <vector>
/*student operator =(student a, student b)
{
	a.age = b.age;

}*/

string student::GetName()const
{
	return name;
}
string student::GetSurname()const
{
	return surname;
}
int student::GetAge()const
{
	return age;
}

void student::SetName(string s)
{
	name = s;
}
void student::SetSurname(string s)
{
	surname = s;
}
void student::SetAge(int a)
{
	age = a;
}
void student::SetBall(int a)
{
	ball = a;
}
void student::operator=(student a)
{
	age = a.age;
	name = a.name;
	surname = a.surname;
	ball = a.ball;
}

int student::GetBall() const
{
	return ball;
}
void student:: print()
{
	cout << age << " " << name << " " << surname <<" ";
	cout << ball;
	cout << endl;
}

ostream& operator<<(ostream& os, const student& s)
{
	return os << s.GetAge() << " " << s.GetName() << " " 
		<< s.GetSurname() << " " << s.GetBall() << endl;
}
