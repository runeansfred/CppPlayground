#pragma once


class SmartPtr
{
private:
	int* ptr; 
public: 
	inline explicit SmartPtr (int* p = nullptr); //Explicit ctor when using a single argument e.g. 

	inline ~SmartPtr (); 

	int& operator * () { return *ptr;  };

	int* operator -> () { return ptr; };
};

