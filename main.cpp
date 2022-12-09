#include <iostream>
#include <vector>
using namespace std;

void displaymenu()
{
    cout << "\n--------CAR RENTAL---------\n";
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\/////////////\n";
    cout << "Author:Yaseen\n";
    cout << "----------------------------\n";
    cout << "1.Add car to database\n";
    cout << "2.Search car from database\n";
    cout << "3.Display car from database\n";
    cout << "4.Delete car from database\n";
    cout << "5.Calculate total revenue/profit/loss\n";
    cout << "6.Exit\n";
    cout << "----------------------------\n";
}

void addcar(int count, string brands[], string names[], string types[], int daily_rate[], int weekly_rate[])
{
    string new_brand;
    cout << "Enter brand: ";
    cin >> new_brand;
    brands[count] = new_brand;

    string new_car;
    cout << "Enter car name: ";
    cin >> new_car;
    names[count] = new_car;

    string type;
    cout << "Enter car type: ";
    cin >> type;
    types[count] = type;

    int daily;
    cout << "Enter daily: ";
    cin >> daily;
    daily_rate[count] = daily;

    int weekly;
    cout << "Enter weekly: ";
    cin >> weekly;
    weekly_rate[count] = weekly;

    cout << "\nadded successfully";
    cout << "add car function";
}

void searchcar(int count, string brands[], string names[], string types[], int daily_rate[], int weekly_rate[])
{
    string search;
    cout << "\n----------Search car-----------\n";
    cout << "Enter brand,type or car name: ";
    cin >> search;
    cout << "\n----------Search result for \"" << search << "\"----------";
    for (int i = 0; i < count; i++)
    {
        if (names[i] == search || brands[i] == search || types[i] == search)
        {
            cout << "\ncar: " << names[i];
            cout << "\nbrand: " << brands[i];
            cout << "\ntype: " << types[i];
            cout << "\ndaily rate: " << daily_rate[i] << "$";
            cout << "\nweekly rate: " << weekly_rate[i] << "$";
            cout << "\n---------------------------";
            break;
        }
    }
}

void displaycar(int count, string brands[], string names[], string types[], int daily_rate[], int weekly_rate[])
{
    cout << "\n-----------Show all cars------------";
    cout << "\n               ||||||";
    for (int i = 0; i < count; i++)
    {
        cout << "\ncar: " << names[i];
        cout << "\nbrand: " << brands[i];
        cout << "\ntype: " << types[i];
        cout << "\ndaily rate: " << daily_rate[i] << "$";
        cout << "\nweekly rate: " << weekly_rate[i] << "$";
        cout << "\n---------------------------";
    }
}

void deletecar()
{
    cout << "delete car function";
}

void rentcar()
{
    cout << "rent car function";
}

// main function
int main()
{
    // database names here
    string brands[] = {"Toyota", "Ford", "Honda"};
    string names[] = {"Toyota Sienna", "Ford Expedition", "Honda Civic"};
    string types[] = {"Van", "SUV", "Sedan"};
    int daily_rate[] = {70, 65, 51};
    int weekly_rate[] = {455, 415, 335};
    int prices[] = {35385, 53875, 24650};
    int count = sizeof(names) / sizeof(names[0]);
    int opt;
    int rpt = 1;
    while (rpt == 1)
    {
        displaymenu();
        cout << "Enter your option: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            addcar(count, brands, names, types, daily_rate, weekly_rate);
            break;
        case 2:
            searchcar(count, brands, names, types, daily_rate, weekly_rate);
            break;
        case 3:
            displaycar(count, brands, names, types, daily_rate, weekly_rate);
            break;
        case 4:
            deletecar();
            break;
        case 5:
            rentcar();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "You must enter a number from 1 to 6 \n";
            exit(0);
            break;
        }
        cout << "\nWould you like to continue? Type 1 to continue: ";
        cin >> rpt;
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    return 0;
}