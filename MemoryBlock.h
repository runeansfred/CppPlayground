#pragma once
#include <iostream>
class MemoryBlock
{
private:
	size_t _length; //The length of the resource 
	int* _data; //The resource 
public: 

	//Constructor that initializes the resource 
	explicit MemoryBlock (size_t length); 

	//Destructor 
	~MemoryBlock (); 

	//Copy constructor 
	MemoryBlock (const MemoryBlock& other); 
		 

	//Copy assignment operator  
	MemoryBlock& operator=(const MemoryBlock other);

	//Retrieve length of the data resource 
	size_t Length () const; 
	
	//Move constructor 
	MemoryBlock (MemoryBlock&& other);
		

	//Move assignment operator 
	MemoryBlock& operator=(MemoryBlock&& other); 
};



