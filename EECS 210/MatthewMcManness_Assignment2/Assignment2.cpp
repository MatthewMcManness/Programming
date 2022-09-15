/*
--------------------------------------------------------------------------------------------------------------------------------------
Name of Code: EECS 210: Assignment 2 
Description: Uses loops to determine whether the provided (by the professor) asserstions are true or false and states what proves them true or false to the console.
Written By: Matthew McManness
Date: 9-15-22
KUID:2210261
Preconditions: None
PostConditions: None
Error and Exeption condtions: 
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {



  cout << " Problem 1a)\n------------------------------------\n"; //Formating
  {
    
/*
Problem 1a section creates a loop for the numbers 0-10 that checks to see if the variable is less than two, if the variable is less than two that information is printed to the console and the loop is terminated (break).
*/
    
    for(int i = 0; i < 11; i++) 
      if(i < 2)
        {
         cout << i << " is less than 2.\n------------------------------------\n\n";
        break;
        }
    }

  cout << " Problem 1b)\n------------------------------------\n"; //Formating
  {
    
/*
Problem 1b section creates a loop for the numbers 0-10 that checks to see if the variable is not less than two, if the variable is not less than two that information is printed to the console and the loop is terminated (break).
*/
    
      for(int i = 0; i < 11; i++)
      if(!(i < 2))
      {
         cout << i << " is not less than 2.\n------------------------------------\n\n";
        break;
      }
  }

  cout << " Problem 1c)\n------------------------------------\n"; //Formating
  {
    
/*
Problem 1c section creates a loop for the numbers 0-10 that checks to see if the variable is less than two, if the variable is less than two that information is printed to the console and the loop is terminated (break).
*/
    
      for(int i = 0; i < 11; i++)
      if((i < 2)||(i>7))
      {
         cout << i << " is less than 2 or greater than 7.\n------------------------------------\n\n";
        break;
      }
  }

  cout << " Problem 1d)\n------------------------------------\n"; //Formating
  {

/*
Problem 1d section creates a loop for the numbers 0-10 that checks to see if there is a  variable that is not less than 2 and not greater than 7, if there is that information is printed to the console and the loop is terminated (break).
*/
    
      for(int i = 0; i < 11; i++)
      if((i >= 2)&&(i<=7))
      {
         cout << i << " is not less than 2 and not greater than 7.\n------------------------------------\n\n";
        break;
      }
  }

  cout << " Problem 1e)\n(Prove that: ∃x ¬P(x) = ¬∀x P(x))\n------------------------------------\n"; //Formating
  {

/*
Problem 1e section creates a loop for the numbers 0-10 that checks to see if there is a  variable that is both greater than or equal to 5 and not less than 5(proving De Morgan's law for Existential Quantifier where P(x) is the statement "x<5", if there is that information is printed to the console and the loop is terminated (break).
*/
    
      for(int i = 0; i < 11; i++)
      if((i >= 5) && !(i < 5))
      {
         cout << i << " is both greater than or equal to 5 and not less than 5.\n------------------------------------\n\n";
        break;
      }
  }

  cout << " Problem 1f)\n(Prove that: ∀x ¬P(x) = ¬∃x P(x))\n------------------------------------\n"; //Formating
  {

/*
Problem 1f section creates a loop for the numbers 0-10 that checks to see if there is a  variable that is less than 5 (showing that De Morgan's Law for the Universal Quantifier is not True for our set using P(x): x<5), if there is that information is printed to the console and the loop is terminated (break).
*/
    
      for(int i = 0; i < 11; i++)
      {
        if((i < 5))
        {
          cout << i << " is less than 5.\n------------------------------------\n\n";
          break;

        }
      }
  }

  cout << " Problem 2a)\n------------------------------------\n"; //Formating
  {

/*
Problem 2a section creates a nested loop (both for x and y) for the numbers 0-10 that checks to see if x*y=0, if one iteration does not meet the standard information is printed to the console and the loop is terminated (break).
*/
    
    for(int x = 0; x <= 10; x++) //loop 1 (x)
      {
        bool check = false; // variable to be able to terminate loop if statement is false
        for(int y = 0; y <= 10; y++) // loop 2 (y)
          {
            if(x*y !=0) //checks the statement 
            {
              cout << "false, when x = " << x << " and y = " << y << " then x * y = " << (x*y) << " is not 0.\n------------------------------------\n\n"; //if false prints the information
              check = true; // prepare to break loop 1
              break; // breaks loop 2
            }

          }
        if(check == true) //check to see if loop should end
        {
          break; // ends loop 1
        }
      } 
  }

    cout << " Problem 2b)\n------------------------------------\n"; //Formating
  {

/*
Problem 2b section creates a nested loop (both for x and y) for the numbers 0-10 that checks to see if x*y=0, it checks to see if there is a y that works for every x and then prints the information to the console.
*/
    
    cout << "True, because:\n"; //Formating
    for(int x = 0; x <= 10; x++) //loop x
      {
        
        for(int y = 0; y <= 10; y++) //loop y
          {
            if(x*y == 0) // checks statement
            {
              cout << "when x = " << x << " and y = " << y << " then x * y = " << (x*y) << "\n"; // prints out when true
              break; // breaks the current iteration of loop y
            }
         
          }
        if(x==10) // for Formating
        {
           cout << "------------------------------------\n\n"; //Formating
        }
      }
    
  }

      cout << " Problem 2c)\n------------------------------------\n"; //Formating
  {

/*
Problem 2c section creates a nested loop (both for x and y) for the numbers 0-10 that checks to see if x*y=0, it checks to see if every y that works for an x and then prints the information to the console.
*/
    
    cout << "True, because:\n"; //Formating
    int x = 0;
        for(int y = 0; y <= 10; y++) //y loop
          {
            if(x*y == 0)
            {
              cout << "when x = " << x << " and y = " << y << " then x * y = " << (x*y) << "\n"; // prints the information
            }
         
          }
cout << "------------------------------------\n\n"; //Formating

  }

      cout << " Problem 2d)\n------------------------------------\n"; //Formating
  {

/*
Problem 2d section creates a nested loop (both for x and y) for the numbers 0-10 that checks to see if x*y=0, it checks to see if there is at least one solution then prints the information to the console.
*/
    
    cout << "True, because:\n"; //Formating
    for(int x = 0; x <= 10; x++) // loop x
      {
        
        for(int y = 0; y <= 10; y++) // loop y
          {
            if(x*y == 0) // truth check
            {
              cout << "when x = " << x << " and y = " << y << " then x * y = " << (x*y) << "\n"; // prints solution
              break; //breaks loop y
            }
         
          }
        cout << "------------------------------------\n\n"; //Formating
        break; //breaks loop x
      }
    
  }
}