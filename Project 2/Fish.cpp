#include "Fish.hpp"

Fish::Fish(){
  name_="";
  domestic_=false;
  predator_=false;
  venomous_=false;
}
Fish::Fish(std::string name, bool domestic, bool predator){
  name_=name;
  domestic_=domestic;
  predator_=predator;
  venomous_=false;
}
bool Fish::isVenomous() const{
  return venomous_;
}
void Fish::setVenomous(){
  if(venomous_){
    venomous_=false;
  }
  else{
    venomous_ = true;
  }
}
