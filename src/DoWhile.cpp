/*
 * DoWhile.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	const string password = "Password";

	string input;

	do
	{
		cout << "Please enter your password:> " << flush;

		cin >> input;

		if(input != password)
		{
			cout << "Access denied!" << endl;
		}

	}
	while (input != password);

	cout << "Welcome" << endl;

	return 0;
}

