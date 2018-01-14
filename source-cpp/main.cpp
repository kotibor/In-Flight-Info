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
	inFile.open("TEST_flight_database.txt");		// TODO: does .txt do the job???
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
							cout << "Found flight!\n";
						}
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
