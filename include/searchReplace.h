/*****************************************************************
/ CS3560 HW1
/ header file for searchReplace function
/ inputs
/	string line
/	string praseToFind
/	string replaceWith
/
/ returns
/	string with line replacing all instances of "phraseToFind"
/	substring with "replaceWith" string
/
/ Daniel Ivory
/ di316014@ohio.edu
/ 1/22/19
******************************************************************/
#ifndef SEARCHREPLACE
#define SEARCHREPLACE

#include <iostream>
#include <string>

std::string searchReplace(std::string line, std::string phraseToFind, std::string replaceWith);

#endif
