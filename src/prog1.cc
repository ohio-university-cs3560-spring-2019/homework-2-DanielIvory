/*****************************************************************
/ CS3560 HW1
/ Program to change all occurrances of one string into another
/ call program as follows:
/ ./prog1 "string1" "string2" < input_file.txt > output_file.txt
/
/ Daniel Ivory
/ di316014@ohio.edu
/ 1/27/19
******************************************************************/

#include <iostream>
#include <string>
#include "../include/searchReplace.h"

int main(int argc, char** argv)
{
	if(argc != 3) //check command input, assume correct format
	{
		std::cout<<"Wrong number of inputs \nExiting..."<<std::endl;
		return 0 ;
	}

	std::string line, phraseToFind, replaceWith;
	phraseToFind = argv[1];
	replaceWith = argv[2];

	getline(std::cin, line);
	while(!std::cin.eof())
	{
		//function call to check if any strings need to be replaced
		std::cout<<searchReplace(line, phraseToFind, replaceWith)<<std::endl;
		getline(std::cin, line);
	}

	return 0;
}
