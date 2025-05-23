//********************************************************************
//  File:    main.cpp
//  Date:
//  Version:
//  Author:  klek
//  Notes:
//********************************************************************

#include <iostream>

// Calculate the number of squares
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
	// Tests with N starting from -2 and increasing although I would not consider
	// a negative number to be a valid input
	int n = -2;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = -1;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 0;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;
	n = 1;
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
	// For fun, a larger number but not huge
	n = 2000000;
	std::cout << "Number of squares for N = " << n << " is: " << num_squares( n )
			  << std::endl;

	return 0;
}
