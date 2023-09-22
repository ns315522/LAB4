/**
 * @file: prog2.cc
 * @author: Nicholas Strauch
 * @date: 09/21/23
 * @brief: This code takes the weekly sales amount earned by an employee and runs it through
 *          two potential methods of payment and denotes which of the two would pay more to the employee.
 */

#include <iostream>
#include <cstdlib>
#include <cstdlib>
using namespace std;

const double HOURLY_RATE = (5.50 * 40);
const double PLAN1 = 0.10;
const double PLAN2 = 0.15;
// The constants above account for the weekly pay considering hourly wage, and the percent of commision offered by both plans.

int main(int argc, char const *argv[]) {
    double weekly_sales;
    string better_plan;
    // The varibales above have been declared to hold some values that will be established as the program runs.

cout << "Enter the weekly sales amount: ";
//The line above prompts the user to input the weekly sales amount, while the line below stores the value.
cin >> weekly_sales;
double plan1 = (HOURLY_RATE + (weekly_sales * PLAN1));
double plan2 = (weekly_sales * PLAN2);
//Both lines above are used to calculate the amount the employee would get paid given either plan.

if (plan1 > plan2)
        {
        better_plan = "Plan 1";
        }
else
        {
        better_plan = "Plan 2";
        }
//The if statement above takes the higher value of the two plans and saves it to the better_plan variable to be printed later.

if (weekly_sales <= 0)
        {
        cout << "Error: Sales entered cannot be zero negative!" << endl;
        exit(0);
        }
else
        {
        cout << "Amount of sales $" << weekly_sales << endl;
        cout << "Plan 1 pays $" << plan1 << endl;
        cout << "Plan 2 pays $" << plan2 << endl;
        cout << better_plan << " is better" << endl;
        }
//The if statement above makes sure the weekly sales entered is not less than or equal to zero, in which case it will print out an error. If the 
//weekly sales fits the statement however, the program will calculate how much each plan will pay, as well as specifically which plan is better.
return(0);
}
