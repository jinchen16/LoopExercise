/*
* Made by Jin Chen for a challenge in the Udemy course taught by Frank J. Mitropoulos.
* Playing with loops and vectors.
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char option{};
	vector<int> vec;
	float mean{ 0 };
	int smallest{ 0 }, largest{ 0 };
	do
	{
		system("cls");
		cout << "P - Print numbers\n";
		cout << "A - Add a number\n";
		cout << "M - Display mean of the numbers\n";
		cout << "S - Display the smallest number\n";
		cout << "L - Display the largest number\n";
		cout << "Q - Quit\n";
		cout << "\nEnter your choice: ";
		cin >> option;
		option = toupper(option);
		switch (option)
		{
		case 'P':
			if (vec.size() > 0)
			{
				cout << "[ ";
				for (int value : vec)
					cout << value << " ";
				cout << "]";
			}
			else
			{
				cout << "[] - the list is empty\n";
			}
			system("pause");
			break;
		case 'A':
			int addValue;
			cout << "Add a number: ";
			cin >> addValue;
			vec.push_back(addValue);
			cout << addValue << " added\n";
			system("pause"); 
			break;
		case 'M':
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
			break;
		case 'S':
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
			break;
		case 'L':
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
			break;
		case 'Q':
			break;
		default:
			cout << "Unknown selection, please try again\n";
			break;
		}

	} 
	while (toupper(option) != 'Q');
	return 0;
}