/**
 * @file: wordle.cc
 * @author: Dalton Muck
 * @date: 02-13-2023
 * @breif: //insert description
 */

#include <iostream>
#include <string>

using namespace std;

//const string TUBES = "tubes";
int main()
{
	// string input;
	// int first = 0;
	// int secound = 0;
	// int third = 0;
	// int fourth = 0;
	// int fifth = 0;

	// string a = " ";
	// string b = " ";
	// string c = " ";
	// string d = " ";
	// string e = " ";

	// for (int n = 0; input != TUBES; n++)
	// {
	// 	// prompt for guess
	// 	cout << "please enter your next guess" << endl;
	// 	cin >> input;
	// 	// check for yellow
	// 	if (input.at(n) == input.at(1))
	// 	{
	// 		secound = 1;
	// 	}
	// 	else if (input.at(n) == input.at(2))
	// 	{
	// 		third = 1;
	// 	}
	// 	else if (input.at(n) == input.at(3))
	// 	{
	// 		fourth = 1;
	// 	}
	// 	else if (input.at(n) == input.at(4))
	// 	{
	// 		fifth = 1;
	// 	}

	// 	// check for green
	// 	if (input.at(n) == TUBES.at(n))
	// 	{
	// 		if (n == 0)
	// 		{
	// 			first = 2;
	// 		}
	// 		else if (n == 1)
	// 		{
	// 			secound = 2;
	// 		}
	// 		else if (n == 2)
	// 		{
	// 			third = 2;
	// 		}
	// 		else if (n == 3)
	// 		{
	// 			fourth = 2;
	// 		}
	// 		else if (n == 4)
	// 		{
	// 			fifth = 2;
	// 		}
	// 	}



	// 	//print green letters
	// 	if (first == 1)
	// 	{
	// 		a = input.at(n);
	// 		a = "/033[1;32" + a + "\033";
	// 		cout << a;
	// 	}
	// 	else if (secound == 1)
	// 	{
	// 		b = input.at(n);
	// 		b = "/033[1;32" + b + "\033";
	// 		cout << b;
	// 	}
	// 	else if (third == 1)
	// 	{

	// 	}

	// 	if (n == 6)
	// 	{
	// 		break;
	// 	}
	// }

	string hi;
	string a;
	cin >> hi;
	a = hi.at(0);
	cout << "\033[1;32m" + a + "\033[0m" << endl;

	return 0;
}