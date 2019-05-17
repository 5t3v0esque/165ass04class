/***************************************************************
* File: product.cpp
* Author: (your name here)
* Purpose: Contains the method implementations for the Product class.
***************************************************************/

#include "product.h"


// put your method bodies here

Product::Product()
{
}


Product::~Product()
{
}

void Product::prompt()
{
   std::cout << "Enter name: ";
   std::getline(std::cin, this->name);
   while (std::cin.fail())
   {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "Enter name: ";
      std::getline(std::cin, this->name);
   }
   
   std::cout << "Enter description: ";
   std::getline(std::cin, this->description);
   while (std::cin.fail())
   {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "Enter description: ";
      std::getline(std::cin, this->name);
   }

   std::cout << "Enter weight: ";
   std::cin >> this->weight;
   while (weight < 0) {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "Enter weight: ";
      std::cin >> this->weight;
   } 
   std::cout << "Enter price: ";
   std::cin >> this->basePrice;
   while (basePrice < 0) {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "Enter price: ";
      std::cin >> this->basePrice;
   } 
}

float Product::getSalesTax()
{
   float taxAmount = this->basePrice * 0.06;
   return taxAmount;
}

float Product::getShippingCost()
{
   float shipCost;
   if (this->weight < 5.00)
      shipCost = 2.00;
   else {
      shipCost = 2.00 + ((this->weight - 5) * 0.10);
   }
   return shipCost;
}

float Product::getTotalPrice()
{
   float priceTotal = getSalesTax() + getShippingCost();
   return priceTotal;
}

void Product::displayAd()
{
   std::cout.setf(std::ios::fixed);
   std::cout.setf(std::ios::showpoint);
   std::cout.precision(2);
   std::cout << this->name << " - " << "$" << this->basePrice << std::endl
      << "(" << this->description << ")\n";
}

void Product::displayInv()
{
   std::cout.setf(std::ios::fixed);
   std::cout.setf(std::ios::showpoint);
   std::cout.precision(2);
   std::cout << "$" << this->basePrice << " - " << this->name << " - " <<
      std::setprecision(1) << this->weight << " lbs\n";

}

void Product::displayReceipt()
{
   std::cout.setf(std::ios::fixed);
   std::cout.setf(std::ios::showpoint);
   std::cout.precision(2);
   std::cout << name << std::endl;
   std::cout << "  Price:" << std::setw(10) << "$" << std::setw(8) <<
      basePrice << std::endl;
   std::cout << "  Sales tax:" << std::setw(6) << "$" << std::setw(8)
      << this->getSalesTax() << std::endl;
   std::cout << "  Shipping cost: $" << std::setw(8) << this->getShippingCost()
      << std::endl;
   std::cout << "  Total:" << std::setw(10) << "$" << std::setw(8) <<
      this->getTotalPrice() << std::endl;
}
