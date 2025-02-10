//Description: the user would enter a number, and the program should tell
//the number of occurrences of the number in a given file.
//Course: CIS 150 - Programming fundamentals
//Author: Nikane Ambos
//Developed on: October 25, 2022
//Revised on: November 2, 2022
#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
	//variable declarations
	int theSearchedNumber, number;

	size_t counter(0); //size_t is the same as unsigned int
	ifstream fin;
	string filename;

//Task1: prompt the user to enter the file name and store it in filename variable
	cout << "Enter the name of the file to process: ";
	getline(cin, filename);

//Task2: open the physical file ‘filename’ for reading
	fin.open(filename);

//Task3: Prompt the user to enter the number to count occurrences of, andstore it in theSearchedNumber
	cout << "Enter a number and the program will count the number of occurrences in the file: ";
	cin >> theSearchedNumber;

//Task4: check to make sure the file stream is connected to the file CIS 150 Fall 2022 Loops Program
		if (fin) 
		{
//Task5: read each number, and store it in number
			while (fin >> number)
			{
//Task6: check if number is equal to theSearchedNumber, update counter
				if (number == theSearchedNumber)
				{
					counter++;
				}//end if
			}//end while
		fin.close();
//Task7: display appropriate message, check sample run
			cout << "The number " << theSearchedNumber << " occurs ";
			cout << counter << " times in the file " << filename << endl;
		}
		else
			cerr << "\nCould not open the file\n\n";


	return 0;
}
