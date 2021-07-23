// DelSequences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

	using namespace std;
int main()
{
	long a[1000] = { 1, 1, 3, 3,3, 5, 5, 5, 2, 4};
		int i;
		long b[1000], f, j;
		j = 0; f = 0;
		for (i = 0; i < 10; i++)
		{
			//cin >> a[i];
			if (i == 1) { if (a[i - 1] != a[i])cout << a[i - 1] << " "; b[j - 1] = a[i - 1]; j++; }
			if (i != 0) {
				if (f == 1) {
					if (a[i - 1] != a[i]) {
						if (a[i - 2] != a[i - 1]) {
							b[j] = a[i - 1]; j++;
							cout << a[i - 1] << " ";
							f = 0;
						}
					}
				}
				if (a[i - 1] != a[i])
				{
					if (i == 9) { cout << a[i]; }
					f = 1;
				}
			}
		}
		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
