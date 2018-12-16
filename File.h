// "File" is the base class intended to 
// derive class for different kinds of files


#ifndef FILE_H
#define FILE_H


class File {
public: 

    // eventually we will be reading in files too... 

    // constructors
    File();
    File(const std::string,std::string, double); // what would our constructor be here? 

    // three parameter constructor defining the type and name and size of the file..
    // the constructor should create a file when called with parameters
    // getters

    virtual std::string getName()const ; // providing a virtual function to get name  
                                   // of any type of file this is called on 
    
    virtual std::string getType() const; // providing a virtual function to get the type
    virtual double getSize() const;

    // setters
    virtual void setName(std::string);
    virtual void setType(std::string) ;
    virtual void setSize(double) ;

    virtual void output(); // displays the properties of the file  
    virtual ~File(){};

private:
    
    std::string type, name; 
    double size;
  

};

#endif

// it all starts with my file 

/*
    file - text 
         - image
    

*/