#pragma once
class MemoryBlock
{
private:
	size_t _length; //The length of the resource 
	int* _data; //The resource 
public: 
	//Constructor that initializes the resource 
	explicit MemoryBlock (size_t length) 
		: _length{length} 
	    , _data{ new int[length] } 
		{}; 

		~MemoryBlock (); //Destructor 


		

};

