//P4 P6.cpp : Defines the entry point for the console application.
//

//below libraries are called in order to be used throughout the program
#include "stdafx.h"
#include <iostream>
#include <string>

//using std:: is used so std:: prefix does not constantly have to be written before each line
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::numeric_limits;

//procedures initialised before they can be used
void startSequence();
void exitSequence();
void errorMessage();
void helpMenu();
void afterCalculation();

void shapeOptions();

void circleArea(float pi);
void circleCircumference(float pi);

void rectangleArea();
void triangleArea();
void cuboidVolume();


//the main function calls the next procedure to allow the user to run the program
int main()
{
	startSequence();

	system("pause");
	return 0;
}

//this procedure gives the user options before calling the chosen procedure
void startSequence()
{

	system("cls");
	int option = 0;
	cout << "--Shape Attribute Calculator--" << endl;

	cout << "\n[1] Start Calcluation \n[2] Help Menu \n[3] Exit Program" << endl;
	cout << "Enter: ";
	cin >> option;

	if (option == 1)
	{
		shapeOptions();
	}

	else if (option == 2)
	{
		helpMenu();
	}

	else if (option == 3)
	{
		exitSequence();
	}

	else
	{
		errorMessage();
		startSequence();
	}

}

//this procedure is ran when the user chooses to exit the program
void exitSequence()
{
	system("cls");
	int option = 0;

	cout << "--Shape Attribute Calculator--" << endl;
	cout << "\nAre You Sure You Want To Exit? \n[1] Yes \n[2] No" << endl;
	cout << "Enter: ";
	cin >> option;

	if (option == 1)
	{
		cout << "\n--Exiting Program--" << endl;
		exit(0);
	}

	else if (option == 2)
	{
		main();
	}

	else
	{
		errorMessage();
		exitSequence();
	}

}

//this procedure contains the error message which can be called whenever needed
void errorMessage()
{
	system("cls");
	cout << "--An Error Has Occured-- \n\nRead Carefully What You Are Asked To Input" << endl;
	cout << "-If you would like to report an error email 163594@student.boston.ac.uk" << endl;
	cout << "-If it is a menu input the number corresponding with your chosen option" << endl;
	cout << "-If it is a value input for a calculation you must input a number value" << endl;
	cout << "-Calculation values must be more than 0 and equal to or less than 90" << endl;

	//cin is cleared
	cin.clear();
	//and emptied
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	system("pause");
}

void helpMenu()
{
	system("cls");
	int userinput = 0;
	cout << "--Help Menu--" << endl;

	cout << "\nEach menu will give you different options \nNext to every option is a number" << endl;
	system("pause");

	do
	{
		system("cls");
		//cin is cleared
		cin.clear();
		//and emptied
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Here Is An Example: \n\nThe Best Colour Is... \n[1] Green \n[2] Blue";
		cout << "\nTo select Green you would press the number 1 \nEnter: ";
		cin >> userinput;
	} while (userinput != 1);
	cout << "\nYou selected Green as the best colour" << endl;
	system("pause");

	do
	{
		system("cls");
		//cin is cleared
		cin.clear();
		//and emptied
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Here Is An Example: \n\nThe Best Colour Is... \n[1] Green \n[2] Blue";
		cout << "\nTo select Blue you would press the number 2 \nEnter: ";
		cin >> userinput;
	} while (userinput != 2);
	cout << "\nYou selected Blue as the best colour" << endl;
	system("pause");

	system("cls");
	cout << "Carefully read the options on screen before entering your chosen number" << endl;
	system("pause");

	startSequence();
}

//this procedure lets the user rerun the program or exit
void afterCalculation()
{
	system("pause");
	system("cls");

	int option = 0;
	cout << "--Shape Attribute Calculation--" << endl;
	cout << "\nWould You Like To \n[1] Main Menu \n[2] Calculate Another Shape Attribute \n[3] Exit The Program" << endl;
	cout << "Enter: ";
	cin >> option;

	if (option == 1)
	{
		main();
	}

	else if (option == 2)
	{
		shapeOptions();
	}

	else if (option == 3)
	{
		exitSequence();
	}

	else
	{
		errorMessage();
		afterCalculation();
	}

}

void shapeOptions()
{
	system("cls");
	float pi = 3.14159265359;

	cout << "Shape Attribute Calculator" << endl;
	//initialises the variable being used within the function
	int option = 0;

	//outputs the calculation options avaliable to the user
	cout << "\n[1] Area Of A Cirlce \n[2] Circumference Of A Circle \n[3] Area Of A Rectangle \n[4] Area Of A Triangle \n[5] Volume Of A Cuboid" << endl;
	cout << "Enter: ";
	//saves the users input to the chosen variable
	cin >> option;

	//calls the procedure which relates to the users choice input

	if (option == 1)
	{
		circleArea(pi);
	}

	else if (option == 2)
	{
		circleCircumference(pi);
	}

	else if (option == 3)
	{
		rectangleArea();
	}

	else if (option == 4)
	{
		triangleArea();
	}

	else if (option == 5)
	{
		cuboidVolume();
	}

	else
	{
		system("cls");
		errorMessage();
		system("cls");
		startSequence();
	}
}

//calculates the area of a circle using the radius entered
void circleArea(float pi)
{
	system("cls");
	//initialises the variables being used within the procedure
	float radius = 0;
	float answer = 0;

	cout << "--Area Of A Circle Equation--" << endl;

	//takes the users input
	cout << "\nEnter Radius: ";
	//saves the users input to the chosen variable
	cin >> radius;

	//checks that the inputted value is the same data type as the variable it is saving to

	//if the input fails the error message is ran and the user asked to reenter a value
	if (cin.fail() || radius < 1 || radius > 90)
	{
		errorMessage();
		circleArea(pi);
	}

	//if the input is the correct data type the program carries on
	else
	{
		answer = pi * (radius * radius);
		cout << "Answer: " << answer << endl;

		//calls the procedure to ask what the user wants to do next
		afterCalculation();
	}
}

//calculates the circumference of a cirlce using the radius entered
void circleCircumference(float pi)
{
	system("cls");
	//initialises the variables being used within the procedure
	float radius = 0;
	float answer = 0;

	cout << "--Circumference Of A Circle Equation--" << endl;

	cout << "\nEnter Radius: ";
	cin >> radius;

	//checks that the inputted value is the same data type as the variable it is saving to

	//if the input fails the error message is ran and the user asked to reenter a value
	if (cin.fail() || radius < 1 || radius > 90)
	{
		errorMessage();
		circleCircumference(pi);
	}

	//if the input is the correct data type the program carries on
	else
	{
		answer = 2 * pi * radius;
		cout << "Answer: " << answer << endl;

		//calls the procedure to ask what the user wants to do next
		afterCalculation();
	}
}

//calculates the area of a rectangle using the length and width entered
void rectangleArea()
{
	system("cls");
	//initialises the variables being used within the procedure
	float length = 0;
	float width = 0;
	float answer = 0;

	cout << "--Area Of A Rectangle Equation--" << endl;

	cout << "\nEnter Length: ";
	cin >> length;

	cout << "Enter Width: ";
	cin >> width;

	//checks that the inputted value is the same data type as the variable it is saving to

	//if the input fails the error message is ran and the user asked to reenter a value
	if (cin.fail() || length < 1 || length > 90 || width < 1 || width > 90)
	{
		errorMessage();
		rectangleArea();
	}

	//if the input is the correct data type the program carries on
	else
	{
		answer = length * width;
		cout << "Answer: " << answer << endl;

		//calls the procedure to ask what the user wants to do next
		afterCalculation();
	}
}

//calculates the area of a triangle using the height and base entered
void triangleArea()
{
	system("cls");
	//initialises the variables being used within the procedure
	float height = 0;
	float base = 0;
	float answer = 0;

	cout << "--Area Of A Triangle Equation--" << endl;

	cout << "\nEnter Height: ";
	cin >> height;

	cout << "Enter Base: ";
	cin >> base;

	//checks that the inputted value is the same data type as the variable it is saving to

	//if the input fails the error message is ran and the user asked to reenter a value
	if (cin.fail() || height < 1 || height > 90 || base < 1 || base > 90)
	{
		errorMessage();
		triangleArea();
	}

	//if the input is the correct data type the program carries on
	else
	{
		answer = height * base / 2;
		cout << "Answer: " << answer << endl;

		//calls the procedure to ask what the user wants to do next
		afterCalculation();
	}
}

//calcualtes the volume of a cuboid using the length, width and height entered
void cuboidVolume()
{
	system("cls");
	//initialises the variables being used within the procedure
	float length = 0;
	float width = 0;
	float height = 0;
	float answer = 0;

	cout << "--Volume Of A Cuboid Equation--" << endl;

	cout << "\nEnter Length: ";
	cin >> length;

	cout << "Enter Width: ";
	cin >> width;

	cout << "Enter Height: ";
	cin >> height;

	//checks that the inputted value is the same data type as the variable it is saving to

	//if the input fails the error message is ran and the user asked to reenter a value
	if (cin.fail() || length < 1 || length > 90 || width < 1 || width > 90 || height < 1 || height > 90)
	{
		errorMessage();
		cuboidVolume();
	}

	//if the input is the correct data type the program carries on
	else
	{
		answer = length * width * height;
		cout << "Answer: " << answer << endl;

		//calls the procedure to ask what the user wants to do next
		afterCalculation();
	}
}
