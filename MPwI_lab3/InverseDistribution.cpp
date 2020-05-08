#include<iostream>
#include <stdio.h>    
#include <stdlib.h>     
#include <time.h>  
#include "InverseDistribution.h"
#include "Defines.h"

double randZeroToOne()
{
	return rand() / (RAND_MAX + 1.0);
}

void InverseDistribution::executeInverseDistribution()
{
	srand(time(NULL));
	for (int i = 0; i < MAX_ITER; i++)
	{
		double value = randZeroToOne();
		if (value > 0 && value <= 0.2)
		{
			std::cout << 1 << std::endl;
		}
		else if (value > 0.2 && value <= 0.6)
		{
			std::cout << 2 << std::endl;
		}
		else if (value > 0.6 && value <= 0.9)
		{
			std::cout << 3 << std::endl;
		}
		else if (value > 0.9 && value < 1)
		{
			std::cout << 4 << std::endl;
		}
	}
}