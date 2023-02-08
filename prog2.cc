/* 
 *        File: prog2.cc
 *        Name: Brayden Birt
 *        Lab#: 111
 *        Date: 02/08/2023
 * Description: Calculate how much the salesman makes with each plan 
 *              and which is right at the given sales anount.
 *
*/ 
 
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;
//declare constants
const double RATE = 5.50;
const double COMMISSION1 = 0.10;
const double COMMISSION2 = 0.15;

int main()
{
    //get sales amount
    cout << "Enter the weekly sales amount > ";
    double sales;
    cin >> sales;

    //print amount of sales in $
    cout << "Amount of sales  $" << fixed << setprecision(2) << sales << endl;

    //calculate pay under plan 1
    double plan1 = (RATE * 40) + (COMMISSION1 * sales);

    //calculate pay under plan 2
    double plan2 = (COMMISSION2 * sales);

    //print pay of each plan
    cout << "Plan 1 pays $" << fixed << setprecision(2) << plan1 << endl;
    cout << "Plan 2 pays $" << fixed << setprecision(2) << plan2 << endl;
    
    //print which plan is better or if equal say so
    if (plan1 > plan2)
        cout << "Plan 1 is better" << endl;
    else if (plan2 > plan1)
        cout << "Plan 2 is better" << endl;
    else
        cout << "Plans are equal" << endl;


    return 0;
}