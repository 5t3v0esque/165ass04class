/***************************************************************
* File: assign04.cpp
* Author: (your name here)
* Purpose: Contains the main function to test the Product class.
***************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::cin;
using std::endl;

#include "product.h"

int main()
{
   // Declare your Product object here
   Product object;

   // Call your prompt function here
   object.prompt();


   cout << endl;
   cout << "Choose from the following options:\n";
   cout << "1 - Advertising profile\n";
   cout << "2 - Inventory line item\n";
   cout << "3 - Receipt\n";
   cout << endl;
   cout << "Enter the option that you would like displayed: ";

   int choice;
   cin >> choice;

   cout << endl;

   if (choice == 1)
   {
      // Call your display advertising profile function here
      object.displayAd();

   }
   else if (choice == 2)
   {
      // Call your display inventory line item function here
      object.displayInv();
   }
   else
   {
      // Call your display receipt function here
      object.displayReceipt();
   }

   system("pause"); //MSVS only REMEMBER TO TAKE OUT BECAUSE YOU ALWAYS FORGET
   return 0;
}
