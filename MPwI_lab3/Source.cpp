#include <iostream>
#include <stdio.h>    
#include <stdlib.h>     
#include <time.h> 
#include "Elimination.h"
#include "InverseDistribution.h"

void menu()
{
	std::cout << std::endl;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "1. Elimination" << std::endl;
	std::cout << "2. Inverse distribution" << std::endl;
	std::cout << "3. Exit" << std::endl;
}

void handleUserActions()
{
	Elimination elimination;
	InverseDistribution inverseDistribution;

	int choice;

	while (true)
	{
		menu();
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			elimination.executeElimination();
			break;

		case 2:
			inverseDistribution.executeInverseDistribution();
			break;

		case 3:
			std::cout << "EXIT\n";
			return;
		}
	}
}

int main()
{
	handleUserActions();
	return 0;
}