//DEITEL H2 E2.21_4 with using (for)

#include <iostream>
using namespace std;

int main()
{
	const int x = 7;// 	length between two points in center 

	int count = 1; // auxiliary intenger for creating triangle
	int indent = x; // indent between lines

	//Drawing arrow
	cout << string(indent, ' ') << "*" << endl;//Drawing the top point

	for (int i = 0; i < x; i++)
	{
		indent--;
		cout << string(indent, ' ') << "*" << string(count, ' ')<< "*" << endl;
		count = count + 2;
	}

	for (int i = 0; i < x; i++)
	{
		cout << string(indent, ' ') << "*" << string(count - 2, ' ') << "*" << endl;
		indent++;
		count = count - 2;
	}

	cout << string(indent, ' ') << "*" << endl;//Drawing the bottom point

	return 0;
}