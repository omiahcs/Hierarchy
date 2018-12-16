#include "File.h"

#ifndef TEXT_H
#define TEXT_H

class Text : public File {
private:
    double chars; 

public:
    Text();
    Text(double);

    // accessors
    double getChars() const; 
    double getSize(); 

    // Mutators 
    void setChars();

    void output();
    
    ~Text(){};

};

#endif