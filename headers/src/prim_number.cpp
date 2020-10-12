#include "../cgrigo.h"

/**
 * bool isPrime( int* n )
 *
 * Summary of the IsPrime function:
 *   
 *   The IsPrime function determine is a number
 *   is prime or not.
 * 
 * Parameters   : number : containing the target 
 *                        integer
 * Return Value : bool   : true if the number is 
 * 			   prime, false if not
 * 			   
 * Description :
 *   
 *   This function iterates from 2 to the parameter 
 *   returning false if in this range of numbers 
 *   we find a number that belongs to the crowd 
 *   of parameter's dividers. 
 */
bool isPrime( int n )
{
	// Base cases
	if ( n <= 1 || n == 4 || n == 6) return false;
	if ( n == 2 || n == 3 || n == 5) return true;

	for ( int i = 7; i < n; i++ ) if ( n % i == 0 ) return false; 
	return true;
}

