#include <iostream>
#include "File.h"
#include "Text.h"
#include "Image.h"

int main()
{
    File *file = new Image(); // this is the base class and it does things 


    // so if i were to call File *f = new File(type,name, and size of the file) 
    // this should technically create a file. 


    // if i were to call f.getname() then this should get the name of the current file 


    // we have to be able to read in files 

    // this would technically be considered a file hierarchy program meaning that 
    // there would be some sort of detection when a file is inputted into the program 

    // declaring file F object would allow us to acces the whole class... 

    // I think we should make f a pointer so
    
    return 0;
}
