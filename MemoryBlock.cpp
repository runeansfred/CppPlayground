#include "MemoryBlock.h"


MemoryBlock::MemoryBlock (size_t length)
	: _length{ length }
	, _data{ new int[length] }
{
	std::cout << "In Memoryblock(size_t). length "
		      << _length << "." << std::endl; 
}

//Destructor
MemoryBlock::~MemoryBlock ()
{
	std::cout << "In ~MemoryBlock(). length = "
		      << _length << "."; 

	if (_data != nullptr)
	{
		std::cout << " Deleting resource."; 

		delete[] _data; 
	}

	std::cout << std::endl; 
}

//Copy constructor 
MemoryBlock::MemoryBlock (const MemoryBlock& other)
	: _length{ other._length }
	, _data{ new int[other._length] }
{
	std::cout << "In MemoryBlock(const MemoryBlock&). length = "
		<< other._length << ". Copying resource" << std::endl; 

	std::copy (other._data, other._data + _length, _data); 
}

//Copy assignment operator 
MemoryBlock& MemoryBlock::operator=(const MemoryBlock other)
{
	std::cout << "In operator=(const MemoryBlock&) . length = "
		<< other._length << ". Copying resource." << std::endl; 

	if (this != &other)
	{
		delete _data; 

		_length = other._length; 
		_data = new int[_length]; 
		std::copy (other._data, other._data + _length, _data); 
	}

	return *this; 
}

//Retrieve length of data resource 
size_t MemoryBlock::Length () const
{
	return _length; 
}

//Move constructor 
MemoryBlock::MemoryBlock (MemoryBlock&& other)
	: _data{ nullptr }
	, _length{ 0 }
{
	std::cout << "In MemoryBlock(MemoryBlock&&). length = "
		<< other._length << ". Moving resource." << std::endl;

	//Copy data pointer and its length from the source object 
	_data = other._data; 
	_length = other._length; 

	//Release data pointer from the source object, so that destructor does not free memory multiple times 
	other._data = nullptr; 
	other._length = 0; 
}

//Move assignment operator 
MemoryBlock& MemoryBlock::operator=(MemoryBlock&& other)
{
	std::cout << "In operator=(MemoryBlock&&). length = "
		      << other._length << "." << std::endl;
	if (this != &other)
	{
		delete[] _data; 

		_data = other._data; 
		_length = other._length; 

		other._data = nullptr; 
		other._length = 0; 
	}

	return *this; 
}
