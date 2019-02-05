/*****************************************************************
/ CS3560 HW1
/ implementation file for searchReplace function
/ inputs
/       string line
/       string praseToFind
/       string replaceWith
/
/ returns
/       string with line replacing all instances of "phraseToFind"
/       substring with "replaceWith" string
/
/ Daniel Ivory
/ di316014@ohio.edu
/ 1/22/19
*****************************************************************/
#include "../include/searchReplace.h"

std::string searchReplace(std::string line, std::string phraseToFind, std::string replaceWith)
{
	int len = phraseToFind.length();
	int pos = line.find(phraseToFind);

	while(pos != std::string::npos)
	{
		std::string tmp;
		tmp = line.substr(0, pos);
		line = tmp + replaceWith + line.substr(pos + len);
		pos = line.find(phraseToFind);
	}
	return line;
}
