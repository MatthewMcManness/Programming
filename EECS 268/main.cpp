/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Matthew McManness
 * Assignment:   EECS-268 Lab 6 Exercise 2
 * Description:  You will make a program that will ask the user for what day they want a count of people with the flu for. Then display the amount.
 * Date: 10-23-2021
 *
 ---------------------------------------------------------------------------- */
//Outbreak!
#include <iostream>
void populate(int* infected, int size);

int main()
{
	int* infected = nullptr;
	int size = 48;
	infected = new int[size];
	infected[0] = 1;
	infected[1] = 8;
	infected[2] = 22;
	int choice = 0;
	populate(infected, size);
	std::cout << "OUTBREAK!\nWhat day do you want a sick count for?: ";
	std::cin >> choice;
	if ((choice < 1) || (choice > 48))
	{
		std::cout << "Invalid day\n";
	}
	else
	{	
	std::cout << "Total people with the flu: " << infected[choice - 1] << "\n";
	}
	
	return(0);

}

void populate(int* infected, int size)
{
	if(size == 3)
	{
		infected[size] = infected[size-1] + infected[size - 2] + infected[size - 3];
	}
	else
	{
		populate(infected, (size-1));
		infected[size] = infected[size-1] + infected[size - 2] + infected[size - 3];
	}
}