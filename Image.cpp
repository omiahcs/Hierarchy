#include <iostream>
#include "Image.h"

Image::Image(){std::cout <<"Image nonpara constructor called" << std::endl;}

Image::Image(double Rows,double Col, double depth, std::string name)
{
    std::cout <<"Image nonpara constructor called" << std::endl;
}

// accessors
double Image::getRows() const {return pRows;} 
double Image::getColumns() const {return pColumns;}
double Image::getDepth() {return iDepth;}

std::string Image::getName(){return iName;}

 double Image::getSize(){
// might have to write a function to get the total size of the image 
}



// setters 
void Image::setRows(double){

}
void Image::setColumns(double){

}
void Image::setDepth(){

}

void setName(std::string){

}


// functions
void Image::output(){

}

