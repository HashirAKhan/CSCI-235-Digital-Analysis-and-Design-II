#include "ZooRecord.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

//default constructor for empty record
ZooRecord::ZooRecord(){
  item_count_ = 0;
}


/**parameterized constructor
@pre the input file is expected to be in CSV
(comma separated value) format as:
"animal_name,hair,feathers,eggs,milk,airborne,aquatic,predator,toothed,
backbone,breathes,venomous,fins,legs,tail,domestic,catsize,class_type\n"
@param input_file_name the name of the input file
@post adds Animal objects to record as per the data in the input file
**/
ZooRecord::ZooRecord(std::string input_file_name){
  std::ifstream fin(input_file_name);
  if(fin.fail()){
    std::cerr<< "File cannot be opened for reading." <<std::endl;
    exit(1); //exit if failed to open file
  }
  std::string line;
  std::string name;
  int index;
  int arrIndex = 1;
  getline(fin, line);
  std::string arr[18];

  while(getline(fin, line)){
  //  std::cout<<line<<std::endl;
    for(int i = 0; i < line.length(); i++){
      if(line[i]==','){
        index = i;
        break;
      }
    }

    arr[0] = line.substr(0,index);
    for(int i = index; i < line.length(); i+=2){
      arr[arrIndex] = line[i+1];
      arrIndex++;
    }

  //  std::cout<<arr[0]<<" "<<arr[7]<<" "<<arr[15]<<std::endl;
    Animal animal(arr[0],stoi(arr[15]),stoi(arr[7]));
    add(animal);
    index = 0;
    arrIndex = 1;
  }
  fin.close();
}


/**@post displays all animals in record, one per line by calling animal's
display method” **/
void ZooRecord::display(){

  std::vector<Animal> v = toVector();
  for(int i = 0; i < v.size(); i++){
    v[i].display();
  }
}
