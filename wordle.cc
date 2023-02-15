/**
 * @file: wordle.cc
 * @author: Dalton Muck
 * @date: 02-13-2023
 * @breif: //insert description
 */

#include <iostream>
#include <string>

using namespace std;

const string TUBES = "tubes";
int main()
{
	string input;

	string a = " ";

	int i = 0;
	int n = 0;
	while (input != TUBES && i != 5)
	{
		// prompt for guess
		cout << "please enter your next guess" << endl;
		cin >> input;
		// check for yellow
		while (n <= 4)
		{
			if (input.at(n) == TUBES.at(n))
			{
				a = input.at(n);
				cout << "\033[1;32m" + a + " " + "\033[0m";
			}
			else if (input.at(n) == TUBES.at(0) || input.at(n) == TUBES.at(1) || input.at(n) == TUBES.at(2) || input.at(n) == TUBES.at(3) || input.at(n) == TUBES.at(4))
			{
				a = input.at(n);
				cout << "\033[1;33m" + a + " " + "\033[0m";
			}
			else
			{
				a = input.at(n);
				cout << a << " ";
			}
			n++;
		}
		n = 0;
		cout << "" << endl;
		i++;
	}

	// string hi;
	// string a;
	// cin >> hi;
	// a = hi.at(0);
	// cout << "\033[1;32m" + a + "\033[0m" << endl;
	cout << " " << endl;
	return 0;
}