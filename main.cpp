// Chapter 11, Programming Challenge 3: Corporate Sales Data
//Antonio Gomez

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Declaration of the Division structure.


int main()
{
    // Create structure variables for each division.
    double EastDiv[4];
    double WestDiv[4];
    double NorthDiv[4];
    double SouthDiv[4];
    // Store the names of the divisions.

    //Get sales data for East division
    cout << "Enter the quarterly sales for the East Divison:\n";
    cout << "\tFirst quarter: ";
    cin>>EastDiv[0];
    cout << "\tSecond quarter: ";
    cin>>EastDiv[1];
    cout << "\tThird quarter: ";
    cin>>EastDiv[2];
    cout << "\tFourth quarter: ";
    cin>>EastDiv[3];

    // Calculate the annual sales for the division.


    // Calculate the average sales for the division.


    //Get sales data for West division
    cout << "Enter the quarterly sales for the West Divison:\n";
    cout << "\tFirst quarter: ";
    cin>>WestDiv[0];
    cout << "\tsecond quarter: ";
    cin>>WestDiv[1];
    cout << "\tThird quarter: ";
    cin>>WestDiv[2];
    cout << "\tFourth quarter: ";
    cin>>WestDiv[3];

    // Calculate the annual sales for the division.


    // Calculate the average sales for the division.


    //Get sales data for North division
    cout << "Enter the quarterly sales for the North Divison:\n";
    cout << "\tFirst quarter: ";
    cin>>NorthDiv[0];
    cout << "\tsecond quarter: ";
    cin>>NorthDiv[1];
    cout << "\tThird quarter: ";
    cin>>NorthDiv[2];
    cout << "\tFourth quarter: ";
    cin>>NorthDiv[3];

    // Calculate the annual sales for the division.


    // Calculate the average sales for the division.


    //Get sales data for South division
    cout << "Enter the quarterly sales for the South Divison:\n";
    cout << "\tFirst quarter: ";
    cin>>SouthDiv[0];
    cout << "\tsecond quarter: ";
    cin>>SouthDiv[1];
    cout << "\tThird quarter: ";
    cin>>SouthDiv[2];
    cout << "\tFourth quarter: ";
    cin>>SouthDiv[3];

    // Calculate the annual sales for the division.
    double NorthDivTotal=NorthDiv[0]+NorthDiv[1]+NorthDiv[2]+NorthDiv[3];
    double EastDivTotal=EastDiv[0]+EastDiv[1]+EastDiv[2]+EastDiv[3];
    double WestDivTotal=WestDiv[0]+WestDiv[1]+WestDiv[2]+WestDiv[3];
    double SouthDivTotal=SouthDiv[0]+SouthDiv[1]+SouthDiv[2]+SouthDiv[3];

    double NorthDivAvg,EastDivAvg,WestDivAvg,SouthDivAvg=0;
    NorthDivAvg=NorthDivTotal/4;
    SouthDivAvg=SouthDivTotal/4;
    WestDivAvg=WestDivTotal/4;
    EastDivAvg=EastDivTotal/4;
    // Calculate the average sales for the division.


    // Display Totals and Averages
    cout << setprecision(2) << fixed << showpoint;
    cout << "Total Annual Sales:\n";
    cout << "\tEast Division: $" <<EastDivTotal << endl;
    cout << "\tWest Division: $" <<WestDivTotal  << endl;
    cout << "\tNorth Division: $" <<NorthDivTotal << endl;
    cout << "\tSouth Division: $" <<SouthDivTotal  << endl;
    cout << "Average Quarterly Sales:\n";
    cout << "\tEast Division: $" <<EastDivAvg  << endl;
    cout << "\tWest Division: $" << WestDivAvg << endl;
    cout << "\tNorth Division: $" <<NorthDivAvg  << endl;
    cout << "\tSouth Division: $" <<SouthDivAvg << endl;

    return 0;
}
