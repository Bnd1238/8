#include "acht.h"
#include <iostream>
#include <string>
#include <vector>
int main()
{
	student egor,vana;
	egor.SetName("Egor");
	egor.SetSurname("Bogdanov");
	vana = egor;
	//vana.print();
	cout << egor;
	return 0;
}