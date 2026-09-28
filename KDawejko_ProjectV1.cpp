// KDawejko_ProjectV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Kaden Dawejko
// 9.27.26
// Business Project V1: This program will be used to order smoothies and smoothie bowls from the Sweetest Smoothie Stand. 
// User will be promted to choose between smoothie or smoothie bowl, and will then choose their desired flavor.
// The program will then perfom calculations to determine the price based off of their order.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

// Declare Constant Variables

const int smoothiePrice = 7;
const int smoothieBowlPrice = 10;

int main()
{

    // Declare Variables

    string orderType;
    string smoothieFlavor;
    string smoothieBowlFlavor;
    int total = 0;
    

    // Project Name and Description

    // Business Menu

    cout << "Welcome to The Sweetest Smoothie Stand!\n";
    cout << "Where every bite is Naturally Sweet and Perfectly Blended!" << endl;
    cout << "****************************************************************************" << endl;
    cout << "What would you like to order today? We have: " << endl<< endl;
    cout << "                    Smoothie Flavors:                             \n";
    cout << "    Strawberry Banana     Mango Pineapple    Triple Berry       " << endl << endl;
    cout << "                    Smoothie Bowl Flavors : " << endl;
    cout << "            Acai   Pink Dragon Friut   Triple Berry" << endl << endl;
    cout << "Will you be having a Smoothie or Smoothie Bowl today?" << endl;
    cout << "****************************************************************************" << endl;
    
    getline(cin, orderType);
   
    
    if (orderType == "Smoothie" || orderType == "smoothie")
    {
        total = total + 7;
        cout << "What flavor of smoothie would you like?" << endl;
        cout << "We have Strawberry Banana, Mango Pineapple, and Triple Berry." << endl;
        getline(cin, smoothieFlavor);
        if (smoothieFlavor == "Strawberry Banana" || smoothieFlavor == "Strawberry banana" || smoothieFlavor == "strawberry Banana" || smoothieFlavor == "strawberry banana")
        {
            cout << "You have ordered a " + smoothieFlavor + " smoothie!" << endl;
        }
        else if (smoothieFlavor == "Triple Berry" || smoothieFlavor == "Triple berry" || smoothieFlavor == "triple Berry" || smoothieFlavor == "triple berry")
        {
            cout << "You have ordered a " + smoothieFlavor + " smoothie!" << endl;
        }
        else if (smoothieFlavor == "Mango Pineapple" || smoothieFlavor == "Mango pineapple" || smoothieFlavor == "mango Pineapple" || smoothieFlavor == "mango pineapple")
        {
            cout << "You have ordered a " + smoothieFlavor + " smoothie!" << endl;
        }
        else
        {
            cout << "Please enter valid smoothie bowl flavor" << endl;
            return 1;
        }
    }
    else if (orderType == "Smoothie Bowl" || orderType == "Smoothie bowl" || orderType == "smoothie Bowl" || orderType == "smoothie bowl")
    {
        total = total + 10;
        cout << "What flavor of smoothie bowl would you like?" << endl;
        cout << "We have Acai, Pink Dragon Fruit, and Triple Berry" << endl;
        getline(cin, smoothieBowlFlavor);
        if (smoothieBowlFlavor == "Acai" || smoothieBowlFlavor == "acai")
        {
            cout << "You have ordered an " + smoothieBowlFlavor + " smoothie bowl!" << endl;

        }
        else if (smoothieBowlFlavor == "Triple Berry" || smoothieBowlFlavor == "Triple berry" || smoothieBowlFlavor == "triple Berry" || smoothieBowlFlavor == "triple berry")
        {
            cout << "You have ordered a " + smoothieBowlFlavor + " smoothie bowl!" << endl;
        }
        else if (smoothieBowlFlavor == "Pink Dragon Fruit" || smoothieBowlFlavor == "Pink dragon fruit" || smoothieBowlFlavor == "Pink Dragon fruit" || smoothieBowlFlavor == "pink dragon fruit" || smoothieBowlFlavor == "pink Dragon fruit"
            || smoothieBowlFlavor == "pink Dragon Fruit" || smoothieBowlFlavor == "pink dragon Fruit" || smoothieBowlFlavor == "Pink dragon Fruit")
        {
            cout << "You have ordered a " + smoothieBowlFlavor + " smoothie bowl!" << endl;
        }
        else
        {
            cout << "Please enter valid smoothie bowl flavor" << endl;
            return 1;
        }


    }
    else
    {
        cout << "Please enter valid option." << endl;
        return 1;
    }

    // Output total to console

    cout << "Your total is $" + total << endl;
    cout << "Thank you for eating with The Sweetest Smoothie Stand, enjoy!" << endl;
   
    return 0;

}

