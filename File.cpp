#include <iostream>
#include "File.h"

// Should the constructors of an abstract class be empty?

File::File(){std::cout << "Single file constructor called" <<std::endl;}

File::File(const std::string type, std::string name , double sz){
    std::cout << "triple parameter constructor called" <<std::endl;
    this -> type = type; 
    this ->name = name;
    this ->size =sz;
    // File *fp = new File(sz); 
} 


// accessors

// making these functions pure virtual since every class will have it's own implementation. 

std::string  File::getName() const {}
std::string File::getType() const {}
double File::getSize() const {} 

    // .txt for example getSize for .txt will get the size of the whole file measured in byte 
    // by crawling through all the characters in a text file 

    // .gif or .img will get the size of the whole file view pixels measured in bytes


// Saving for reference 

// virtual std::string  File::getName(){return this->name;}
// virtual std::string File::getType(){return this->type;}



   
 // mutators
void File::setName(std::string name){ this->name = name;}
void File::setType(std::string type){this->type = type;}
void File::setSize(double fSize){this->size = size;}

// Functions to display
void File::output(){
    
}





