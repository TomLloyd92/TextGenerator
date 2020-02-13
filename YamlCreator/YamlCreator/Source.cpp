#include <fstream>
#include <string>
#include <iostream>

int main()
{
	const int TILE_SIZE = 128;

	//Input String
	std::string input;

	//File to recive output
	std::ofstream out("output.txt");
	
	std::string nameOfObject = "demon:\n";

	//Name of varible
	std::string nameOfVar = "position\n";

	//Set size of array
	const static int sizeOfArray = 10;

	//the array
	int array[sizeOfArray][sizeOfArray];

	//Position String to be apended
	std::string positionString = "";
	
	for (int y = 0; y < sizeOfArray -1; y++)
	{
		for (int x = 0; x < sizeOfArray - 1; x++)
		{
			positionString += ("   - {x: " + std::to_string(x * TILE_SIZE));
			positionString += (", y: " + std::to_string(y * TILE_SIZE) + "\n");
			positionString += nameOfVar;
			
		}
	}

	input = nameOfObject + nameOfVar + positionString;

	out << input;
	out.close();
	return 0;
}