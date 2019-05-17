/***************************************************************
* File: product.h
* Author: (your name here)
* Purpose: Contains the definition of the Product class
***************************************************************/
#pragma once

#include <iostream>
#include <iomanip>
#include <string>

// put your class definition here

class Product
{
private:
   std::string name;
   std::string description;
   float weight;
   float basePrice;

public:
   Product();
   ~Product();
   void prompt();
   float getSalesTax();
   float getShippingCost();
   float getTotalPrice();

   void displayAd();
   void displayInv();
   void displayReceipt();
};

