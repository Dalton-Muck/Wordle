/**
 * @file: wordle.cc
 * @author: Dalton Muck
 * @date: 02-13-2023
 * @breif: //insert description
 */

#include <iostream>
#include <string>

using namespace std;
// list of all possible answers https://gist.github.com/cfreshman/d5fb56316158a1575898bba1eed3b5da
// list of all possible support guesses https://gist.github.com/cfreshman/a7b776506c73284511034e63af1017ee
const string TUBES = "tubes";
int main()
{
	string input;

	string a = " ";

	int i = 0; // used in while loop to count number of attempts
	int n = 0; // used as a place value to compare charecters in strings

	while (input != TUBES && i != 6)
	{
		// prompt for guess
		cout << "please enter your next guess" << endl;
		cin >> input;

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

				if (input.at(0) == TUBES.at(0) || input.at(1) == TUBES.at(1) || input.at(2) == TUBES.at(2) || input.at(3) == TUBES.at(3) || input.at(4) == TUBES.at(4))
				{
					cout << a + " ";
				}

				else
				{
					cout << "\033[1;33m" + a + " " + "\033[0m";	
				}
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

	return 0;
}
