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
	int first = 0;
	int second = 0;
	int third = 0;
	int fourth = 0;
	int fifth = 0;

	string a = " ";
	string b = " ";
	string c = " ";
	string d = " ";
	string e = " ";
	int n = 0;
	while (input != TUBES && n != 5)
	{
		// prompt for guess
		cout << "please enter your next guess" << endl;
		cin >> input;
		// check for yellow
		if (input.at(n) == TUBES.at(0) || input.at(n) == TUBES.at(1) || input.at(n) == TUBES.at(2) || input.at(n) == TUBES.at(3) || input.at(n) == TUBES.at(4))
		{
			second = 1;
		}
		else if (input.at(n) == TUBES.at(2))
		{
			third = 1;
		}
		else if (input.at(n) == TUBES.at(3))
		{
			fourth = 1;
		}
		else if (input.at(n) == TUBES.at(4))
		{
			fifth = 1;
		}

		// check for green
		if (input.at(n) == TUBES.at(n))
		{
			if (n == 0)
			{
				first = 2;
			}
			else if (n == 1)
			{
				second = 2;
			}
			else if (n == 2)
			{
				third = 2;
			}
			else if (n == 3)
			{
				fourth = 2;
			}
			else if (n == 4)
			{
				fifth = 2;
			}
		}
					// print green, yellow, or white for first char
			if (first == 1)
			{
				a = input.at(0);
				cout << "\033[1;33m" + a + "\033[0m";
			}
			else if (first == 2)
			{
				a = input.at(0);
				cout << "\033[1;32m" + a + "\033[0m";
			}
			else
			{
				cout << input.at(0);
			}

			// second char
			if (second == 1)
			{
				b = input.at(1);
				cout << "\033[1;33m" + b + "\033[0m";
			}
			else if (second == 2)
			{
				b = input.at(1);
				cout << "\033[1;32m" + b + "\033[0m";
			}
			else
			{
				cout << input.at(1);
			}

			// third char
			if (third == 1)
			{
				c = input.at(2);
				cout << "\033[1;33m" + c + "\033[0m";
			}
			else if (third == 2)
			{
				c = input.at(2);
				cout << "\033[1;32m" + c + "\033[0m";
			}
			else
			{
				cout << input.at(2);
			}

			// fourth char
			if (fourth == 1)
			{
				d = input.at(3);
				cout << "\033[1;32m" + d + "\033[0m";
			}
			else if (first == 2)
			{
				d = input.at(3);
				cout << "\033[1;33m" + d + "\033[0m";
			}
			else
			{
				cout << input.at(3);
			}

			// fifth char
			if (fifth == 1)
			{
				e = input.at(4);
				cout << "\033[1;32m" + e + "\033[0m";
			}
			else if (first == 2)
			{
				e = input.at(4);
				cout << "\033[1;33m" + e + "\033[0m";
			}
			else
			{
				cout << input.at(5);
			}
			cout << " " << endl;
		
		n++;

	}
		

	// string hi;
	// string a;
	// cin >> hi;
	// a = hi.at(0);
	// cout << "\033[1;32m" + a + "\033[0m" << endl;
	cout << " " << endl;
	return 0;
}