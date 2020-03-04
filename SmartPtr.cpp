#include "SmartPtr.h"

SmartPtr::SmartPtr (int* p) 
{
	ptr = p;  
}

SmartPtr::~SmartPtr ()
{
	delete(ptr); 
}



