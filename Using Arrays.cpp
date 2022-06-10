// Using Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using namespace std;
using namespace std;

int main() {
	const int n = 1;
	int sum = 0;
	int average = 0;
	int numbers;
	int count = 0;


	int arr[n];


	cout << "Enter the number of elements " << endl;
	cin >> numbers; 


	cout << "fill in the array with numbers " << endl;

	for (int i = 0; i < numbers; i++) {
		cin >> arr[i];
		sum += arr[i];
	}


	cout << "The array contains these numbers" << endl;

	for (int i = 0; i < numbers; i++) {

		cout << arr[i] << " ";

	}
	cout << endl;
	cout << "The sum of the array elements is: " << sum << endl;

	average = sum / numbers;
	cout << "Average number is " << average;


	for (int i = 0; i < numbers; i++) {
		if (arr[i] < average) {
			count++;
		}
	}
	cout << endl;
	cout << "The numbers less than the average are: " << count;




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
