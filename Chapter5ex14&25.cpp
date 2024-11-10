/*
Title: Chapter 5 exercises 14 and 25: Student Lineup
Filename: Chapter5ex14&25.cpp
Programmer: Patrick Maloon
Date: 11/9

Requirements:
Student Line Up
	A teacher has asked all her students to line up according to their first name.
	For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
	Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
	Once all the names have been read, it reports which student would be at the front of the line and
	which one would be at the end of the line. You may assume that no two students have the same name.
	Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
Using Files—Student Line Up -
	Create a second branch for this project and modify your program to do the following:
	Create a new branch in your Exercise 14 project that modifies the Student Line Up program described in Programming Challenge 14
	so it reads the student names from the file LineUp.txt.
	The program should read names from the file until there is no more data to read.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;

    string student,
        first,
        last;

    inputFile.open("names.txt");

    if (inputFile)
    {
        inputFile >> student;

        first = last = student;

        while (inputFile >> student)
        {
            if (student < first)
                first = student;

            if (student > last)
                last = student;
        }

        inputFile.close();
    }
    else

    {
        cout << "Error opening file." << endl;
    }

    cout << "First student in line = "
        << first << endl;

    cout << "Last student in line  = "
        << last << endl << endl;

    return 0;
}

