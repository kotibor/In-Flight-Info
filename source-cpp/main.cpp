//
//	Project: In-Flight Info (concept build)
//	Date: 14/01/2018
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool globalRunning = true;

int main()
{
	string airline, flightNo;
	string line;

	ifstream inFile;
	inFile.open("TEST_DB.txt");		// TODO: does .txt do the job???
	if (!inFile)
	{
		cerr << "ERROR::FILE::UNABLE_TO_OPEN";
		return 1;
	}

	//while(globalRunning)
	//{
		cout << "-In-Flight Info (concept build)-\n\n";
		cout << "Enter the airline you are travelling with: ";
		getline(cin, airline);
		cout << "Enter the flight number: ";
		getline(cin, flightNo);

		// test for valid input
		// TODO: implement it
		if (true)
		{
			// search file
			// TODO: case sensitive???
			if (inFile.is_open())
			{
				while (!inFile.eof())
				{
					// loop through "database"
					while (getline(inFile, line))
					{
						// if the current line of the file equals the flight number the user entered
						if (line == flightNo)
						{
							cout << "---------" << endl;
							cout << airline << " " << flightNo << endl;
							// only print a set amount of lines after the selected (found) flight
							for (int lineNo = 0; getline(inFile, line) && lineNo < 3; lineNo++)
							{
								cout << line << endl;
							}
						}
						// doesn't work yet because it checks all the lines in the database and
						// not the current one
						/*
						else
						{
							cout << "---------" << endl;
							cout << "Sorry, the flight that you searched for does not exist. Please try again." << endl;
							return(0);
						}
						*/
					}
				}
			}
		}
		else 
		{
			// try again
		}
	//}

	return(0);
}
