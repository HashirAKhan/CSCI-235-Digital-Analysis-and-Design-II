#include <iostream>
#include "Mammal.hpp"
#include "Bird.hpp"
#include "Fish.hpp"


void test(Animal* animal){
  std::cout<<animal->getName()<<" ";

  if(animal->isDomestic()){
    std::cout<<"true ";
  }
  else{
    std::cout<<"false ";
  }

  if(animal->isPredator()){
    std::cout<<"true ";
  }
  else{
    std::cout<<"false ";
  }
  std::cout<<std::endl;
}


int main(){

  Animal* a = new Animal();
  Animal* b = new Animal("bill");
  Animal* c = new Animal("bob", true, false);

  Mammal* j = new Mammal

  test(a);
  test(b);
  test(c);

  return 0;
}
