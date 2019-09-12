#include "Mammal.hpp"

Mammal::Mammal(){
  name_="";
  domestic_=false;
  predator_=false;
  hair_ = false;
  airborne_= false;
  aquatic_= false;
  toothed_= false;
  fins_= false;
  tail_= false;
  legs_= 0;
}


Mammal::Mammal(std::string name, bool domestic, bool predator){
  name_=name;
  domestic_=domestic;
  predator_=predator;
  hair_ = false;
  airborne_= false;
  aquatic_= false;
  toothed_= false;
  fins_= false;
  tail_= false;
  legs_= 0;
}
bool Mammal::hasHair() const{
    return hair_;
}
bool Mammal::isAirborne() const{
  return airborne_;
}
bool Mammal::isAquatic() const{
  return aquatic_;
}
bool Mammal::isToothed() const{
  return toothed_;
}
bool Mammal::hasFins() const{
  return fins_;
}
bool Mammal::hasTail() const{
  return tail_;
}
int Mammal::legs() const{
  return legs_;
}
void Mammal::setHair(){
  if(hair_){
    hair_=false;
  }
  else{
    hair_=true;
  }
}
void Mammal::setAirborne(){
  if(airborne_){
    airborne_=false;
  }
  else{
    airborne_=true;
  }
}
void Mammal::setAquatic(){
  if(aquatic_){
    aquatic_=false;
  }
  else{
    aquatic_=true;
  }
}
void Mammal::setToothed(){
  if(toothed_){
    toothed_=false;
  }
  else{
    toothed_=true;
  }
}
void Mammal::setFins(){
  if(fins_){
    fins_=false;
  }
  else{
    fins_=true;
  }
}
void Mammal::setTail(){
  if(tail_){
    tail_=false;
  }
  else{
    tail_=true;
  }
}
void Mammal::setLegs(int legs){
  legs_ = legs;
}
