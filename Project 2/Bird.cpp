#include "Bird.hpp"

Bird::Bird(){
  name_="";
  domestic_=false;
  predator_=false;
  airborne_=false;
  aquatic_=false;
}
Bird::Bird(std::string name, bool domestic, bool predator){
  name_=name;
  domestic_=domestic;
  predator_=predator;
  airborne_=false;
  aquatic_=false;
}
bool Bird::isAirborne() const{
  return airborne_;
}
bool Bird::isAquatic() const{
  return aquatic_;
}
void Bird::setAirborne(){
  if(airborne_){
    airborne_ = false;
  }
  else{
    airborne_ = true;
  }
}
void Bird::setAquatic(){
  if(aquatic_){
    aquatic_ = false;
  }
  else{
    aquatic_ = true;
  }
}
