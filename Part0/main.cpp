// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cassert>
#include <iostream>

int main()
{

	std::size_t bool1 { sizeof(bool) };
	assert(sizeof(bool) == 1);

	std::size_t schar1 { sizeof(signed char) };

	std::size_t uchar1 { sizeof(unsigned char) };

	std::size_t char1 { sizeof(char) };
	assert(sizeof(char) == 1);

	std::size_t ushort1 { sizeof(unsigned short) };

	std::size_t short1 { sizeof(short) };
	assert(sizeof(short) == 2);

	std::size_t signed1 { sizeof(signed) };

	std::size_t unsigned1 { sizeof(unsigned) };

	std::size_t int1 { sizeof(int) };

	std::size_t size_t1 { sizeof(std::size_t) };

	std::size_t signedlong1 { sizeof(signed long) };

	std::size_t unsignedlong1 { sizeof(unsigned long) };

	std::size_t long1 { sizeof(long) };
	assert(sizeof(long) == 4);

	std::size_t float1 { sizeof(float) };
	assert(sizeof(float) == 4);

	std::size_t double1 { sizeof(double) };
	assert(sizeof(double) == 8);

	std::size_t longdouble1 { sizeof(long double) };
	assert(sizeof(long double) == 8);

    return 0;
}

