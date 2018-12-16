#include "File.h"

#ifndef IMAGE_H
#define IMAGE_H


class Image : public File {
private:
    double iDepth, pRows, pColumns; 
    std::string iName; 


public:
    Image();
    Image(double,double,double,std::string);

    // getters
     double getRows() const; 
     double getColumns() const; 
     double getDepth(); 
     std::string getName();
     double getSize();


    // setters 
     void setRows(double);
     void setColumns(double);
     void setDepth();

     void output();
    
     ~Image(){};

};

#endif