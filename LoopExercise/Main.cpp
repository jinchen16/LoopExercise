/*
* Made by Jin Chen for a challenge in the Udemy course taught by Frank J. Mitropoulos.
* Playing with loops and vectors.
*/
#include <iostream>
#include <vector>

using namespace std;

void MenuController(char&);
void PrintNumbers(const vector<int>);
void AddNumber(vector<int>&);
void CalculateMean(const vector<int>);
void FindSmallest(const vector<int>);
void FindLargest(const vector<int>);

int main()
{
	char option{};
	vector<int> vec;		
	do
	{
		system("cls");
		MenuController(option);
		switch (option)
		{
		case 'P':
			PrintNumbers(vec);
			break;
		case 'A':
			AddNumber(vec);			
			break;
		case 'M':
			CalculateMean(vec);
			break;
		case 'S':
			FindSmallest(vec);
			break;
		case 'L':
			FindLargest(vec);
			break;
		case 'Q':
			break;
		default:
			cout << "Unknown selection, please try again\n";
			system("pause");
			break;
		}

	} while (toupper(option) != 'Q');
	return 0;
}

void MenuController(char &option)
{
	cout << "P - Print numbers\n";
	cout << "A - Add a number\n";
	cout << "M - Display mean of the numbers\n";
	cout << "S - Display the smallest number\n";
	cout << "L - Display the largest number\n";
	cout << "Q - Quit\n";
	cout << "\nEnter your choice: ";
	cin >> option;
	option = toupper(option);
}

void PrintNumbers(const vector<int> vec)
{
	if (vec.size() > 0)
	{
		cout << "[ ";
		for (int value : vec)
			cout << value << " ";
		cout << "]\n";
	}
	else
	{
		cout << "[] - the list is empty\n";
	}
	system("pause");
}

void AddNumber(vector<int> &vec)
{
	cin.ignore();
	int addValue;
	cout << "Add a number: ";
	cin >> addValue;
	vec.push_back(addValue);
	cout << addValue << " added\n";
	system("pause");
}

void CalculateMean(const vector<int> vec)
{
	float mean{ 0 };
	if (vec.size() > 0)
	{
		for (int value : vec)
			mean += static_cast<float>(value);
		mean /= vec.size();
		cout << "The mean is " << mean << endl;
	}
	else
	{
		cout << "Unable to calculate the mean - no data\n";
	}
	system("pause");
}

void FindSmallest(const vector<int>vec)
{
	int smallest{ 0 };
	if (vec.size() > 0)
	{
		smallest = vec.at(0);
		for (int value : vec)
		{
			if (value < smallest)
				smallest = value;
		}
		cout << "The smalles number is " << smallest << endl;
	}
	else
	{
		cout << "Unable to determine the smallest number - list is empty\n";
	}
	system("pause");
}

void FindLargest(const vector<int> vec)
{
	int largest{ 0 };
	if (vec.size() > 0)
	{
		largest = vec.at(0);
		for (int value : vec)
		{
			if (value > largest)
				largest = value;
		}
		cout << "The largest number is " << largest << endl;
	}
	else
	{
		cout << "Unable to determine the largest number - list is empty\n";
	}
	system("pause");
}