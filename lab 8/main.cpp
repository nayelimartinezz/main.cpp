/***************************************************************************
 * AUTHOR     : Nayeli Martinez Logan Palumbo
 * STUDENT ID : 1149580
 * LAB #8     : Introduction to Programming
 * CLASS      : CS1A
 * SECTION    : MW: 11am
 * DUE DATE   : 10/11/22
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
 /****************************************************************************
 * INTRO TO PROGRAMMING
 *---------------------------------------------------------------------------
 * This program will read in two values and output the sum.
 *---------------------------------------------------------------------------
 * INPUT:
 *  firstNum   – First value to be summed.
 *     secondNum  - Second value to be summed.
 *
 * OUTPUT:
 *    sum – The sum of the two values input.
 ***************************************************************************/

int main()
{
  /***********************************************************************
     * CONSTANTS
     * ---------------------------------------------------------------------
     * OUTPUT - USED FOR CLASS HEADING
     * ---------------------------------------------------------------------
     * PROGRAMMER : Programmer's Name
     * CLASS      : Student's Course
     * SECTION    : Class Days and Times
     * LAB_NUM    : Lab Number (specific to this lab)
     * LAB_NAME   : Title of the Lab
     ***********************************************************************/
	const char PROGRAMMER[] = "Nayeli Martinez Logan Palumbo";
	const char CLASS[]      = "CS1A";
	const char SECTION[]    = "MW: 11:00a - 1:20p";
	const int  LAB_NUM      = 8;
	const char LAB_NAME[]   = "Intro to Programming";



	 int  firstNum;   //  IN   & CALC, OUT - first value to sum
	 int  secondNum; //  IN   & CALC, OUT - second value to sum
	 int  sum;      //  CALC & OUT       - sum of 2 integers input

	 /***********************************************************************
	 * OUTPUT – Class Heading
	 ***********************************************************************/
	 cout << left;
	 cout << "**************************************************\n";
	 cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	 cout << "*  "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	 cout << "*  "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	 cout << "*  LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
	 cout << "**************************************************\n\n";
	 cout << right;


	 /************************************************************************
	   * INPUT - reads in two inputs from the user (firstNum & secondNum)
	   ************************************************************************/
	cout << "Enter the first integer:  ";
	cin  >> firstNum;

	cout << "Enter the second integer:  ";
	cin  >> secondNum;
	 /***************************************************************************
	   * PROCESSING - Calculates the sum of the two inputs
	   ***************************************************************************/
	 sum  =  firstNum  +  secondNum;

	/***************************************************************************
	 * OUTPUT -  the input and the sum in the following format:
	 *                     firstNum + secondNum = sum
	 *
	 *   For example, if firstNum = 32 & secondNum = 41 output will be:
	 *
	 *  32 + 41 = 73
	 ***************************************************************************/
	cout << endl;
	cout << firstNum
	     << " + " << secondNum
	 << " = " << sum
	 << endl;
	return 0;
	}
