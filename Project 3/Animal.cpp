//Animal.cpp
//Hashir Khan
//09/01/2019
//Implementation for the animal class

#include "Animal.hpp"

//Default Constructor
//sets an empty name and both domestic and predator to false
Animal::Animal(){
  name_ = "";
  domestic_ = false;
  predator_ = false;
}

//Constuctor with defualt arguments of all booleans set to false
Animal::Animal(std::string name, bool domestic, bool predator){
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;
}

//returns the name of the animal
std::string Animal::getName() const{
  return name_;
}

//returns true if domestic
//returns false if not domestic
bool Animal::isDomestic() const{
  return domestic_;
}

//returns true if predator
//returns false if not a predator
bool Animal::isPredator() const{
  return predator_;
}

//change the name of the animal
void Animal::setName(std::string name){
  name_ = name;
}

//switches the value of domestic_
void Animal::setDomestic(){
  if(domestic_==false)
    domestic_=true;
  else
    domestic_ = false;
}

//switches the value of predator_
void Animal::setPredator(){
  if(predator_==false)
    predator_=true;
  else
    predator_ = false;
}

/**@post displays animal data in the form:
"animal_name is [not] domestic and [it is / is not] a predator\n"
**/
void Animal::display(){
  std::string d = " is not ";
  std::string p = " is not ";

  if(domestic_){
    d = "";
  }
  if(predator_){
    p = " it is ";
  }
  std::cout<<getName()<<d<<"domestic and"<<p<<"a predator" <<std::endl;
}

bool operator==(const Animal& a, const Animal& b){
  return a.getName() == b.getName() && a.isDomestic() == b.isDomestic() && a.isPredator() == b.isPredator();
}
