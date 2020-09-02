// File Name: Hello World
// Author: Jasmine Kobayashi
// Date: 8/31/2020

#include <iostream>

using std::cout;
using std::endl;

int poem()
{
	cout << "I need to choose a poem first." << endl;
	return 1;
}

int main()
{
	for (int i = 0; i < 5; i = i + 1)
	cout << "Hello, World!" << endl;

	poem();
	
	return 0;
}

