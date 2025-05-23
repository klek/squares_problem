//********************************************************************
//  File:    main.cpp
//  Date:
//  Version:
//  Author:  klek
//  Notes:
//********************************************************************

#include <iostream>

int num_squares( const int n )
{
	int squares = 0;
	// Loop over all i that is larger than 0
	for ( int i = n; i > 0; i-- )
	{
		squares += i * i;
	}

	return squares;
}

int main( )
{
	// Tests with N starting from 1 and increasing
	int n = 1;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 2;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 3;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 4;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 5;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 6;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;

	return 0;
}
