//Animal.cpp
//Hashir Khan
//09/01/2019
//Interface for the animal class

#pragma once

#include <iostream>

class Animal{
  //Public Member Function
  public:

    //Constructors
    Animal();
    Animal(std::string name, bool domestic = false, bool predator = false);

    //Get Values
    std::string getName() const;
    bool isDomestic() const;
    bool isPredator() const;

    //Set Values
    void setName(std::string name);
    void setDomestic();
    void setPredator();

  //Private Member Variables
  protected:

    std::string name_;
    bool domestic_;   //True if domestic
    bool predator_;   //True if predator

};  //end Animal
