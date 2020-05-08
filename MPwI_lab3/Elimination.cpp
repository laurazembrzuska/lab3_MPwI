#include<iostream>
#include <stdio.h>    
#include <stdlib.h>     
#include <time.h>  
#include "Elimination.h"
#include "Defines.h"

int function(int variable)
{
	return 2 * variable - 20;
}

void Elimination::executeElimination()
{
	srand(time(NULL));
	for (int i = 0; i < MAX_ITER; i++) {
		int U1 = rand() % abs(A - B) + A;
		int U2 = rand() % (D + 1);
		if (U2 < function(U1))
			std::cout << U1 << ";" << function(U1) << std::endl;
	}
}