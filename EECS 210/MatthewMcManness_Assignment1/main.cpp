/*
--------------------------------------------------------------------------------------------------------------------------------------
Name of Code: Assignment 1 (Truth Tables for Boolean Logic)
Description: This code prints out the truth tables for De Morgan's First and Second Law, the First Associative Law, the Second Associative Law, for [(p ∨ q) ∧ (p → r) ∧ (q → r)] → r ≡ T, and for p ↔ q ≡ (p → q) ∧ (q → p).
Written By: Matthew McManness
KUID:2210261
Preconditions: None
PostConditions: None
Error and Exeption condtions: I am using replit to write my  code and I believe that it is casting my bools as ints when I add them I am not sure why but my outputs should be true whenever the number displayed is equal to or greater than 1.
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function to call to convert outputs from bools/ints to T or F

string output(bool x) // takes in the input (bool conditional statement)
{
  if (x==true) //if the input was > 1 returns T
  {
    return("T"); // returns T
  }
  else  // otherwise
  {
    return("F");  //returns F for 0
  }

}

int main() {
  //De Morgan's First Law (prints the truth table for that)
  
  bool P = 0; //sets variable P to 0 for the truth table
  bool Q = 0; //sets variable Q to 0 for the truth table
 
  
  cout << "--------------------------------------------\n"; //table formating
  cout << "| De Morgan's First Law                    |\n"; //table formating
  cout << "--------------------------------------------\n"; //table formating
  cout << "| P | Q | ¬P | ¬Q | P∨Q | ¬(P∨Q) | ¬P ∧ ¬Q |\n"; //table formating
  cout << "--------------------------------------------\n"; //table formating
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |  " << output(P+Q) << "  |    " << output(!(P+Q)) << "   |    " << output(!P*!Q) << "    |\n"; //Prints 1st row of Truth Table Values
  cout << "--------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |  " << output(P+Q) << "  |    " << output(!(P+Q)) << "   |    " << output(!P*!Q) << "    |\n"; //Prints 2nd row of Truth Table Values
  cout << "--------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |  " << output(P+Q) << "  |    " << output(!(P+Q)) << "   |    " << output(!P*!Q) << "    |\n"; //Prints 3rd row of Truth Table Values
  cout << "--------------------------------------------\n"; //table formating
   Q = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |  " << output(P+Q) << "  |    " << output(!(P+Q)) << "   |    " << output(!P*!Q) << "    |\n"; //Prints 4th row of Truth Table Values
  cout << "--------------------------------------------\n\n"; //table formating



  //De Morgan's Second Law (prints the truth table for that)
  
  P = 0; //sets variable P to 0 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  cout << "------------------------------------------------\n"; //table formating
  cout << "| De Morgan's Second Law                       |\n"; //table formating
  cout << "------------------------------------------------\n"; //table formating
  cout << "| P | Q | ¬P | ¬Q | P ∧ Q | ¬(P ∧ Q) | ¬P ∨ ¬Q |\n"; //table formating
  cout << "------------------------------------------------\n"; //table formating
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |   " << output(P*Q) << "   |    " << output(!(P*Q)) << "    |     " << output(!P+!Q) << "    |\n"; //Prints 1st row of Truth Table Values
  cout << "------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |   " << output(P*Q) << "   |    " << output(!(P*Q)) << "    |     " << output(!P+!Q) << "    |\n"; //Prints 2nd row of Truth Table Values
  cout << "------------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |   " << output(P*Q) << "   |    " << output(!(P*Q)) << "    |     " << output(!P+!Q) << "    |\n"; //Prints 3rd row of Truth Table Values
  cout << "------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |  " << output(!P) << " |  " << output(!Q) << " |   " << output(P*Q) << "   |    " << output(!(P*Q)) << "    |     " << output(!P+!Q) << "    |\n"; //Prints 4th row of Truth Table Values
  cout << "------------------------------------------------\n\n"; //table formating



  //First Associative Law (prints the truth table for that)
  
  P = 0; //sets variable P to 0 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  bool R = 0; //sets variable R to 0 for the truth table
  cout << "--------------------------------------------------------\n"; //table formating
  cout << "| First Associative Law                                |\n"; //table formating
  cout << "--------------------------------------------------------\n"; //table formating
  cout << "| P | Q | R | P ∧ Q | Q ∧ R | (P ∧ Q) ∧ R | P ∧ (Q ∧ R)|\n"; //table formating
  cout << "--------------------------------------------------------\n"; //table formating
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 1st row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  R = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 2nd row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 3rd row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  R = 1; //sets variable R to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 4th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 5th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  R = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 6th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 7th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  R = 1; //sets variable R to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P*Q) << "   |   " << output(Q*R) << "   |      " << output((P*Q)*R) << "      |      " << output(P*(Q*R)) << "     |\n"; //Prints 8th row of Truth Table Values
  cout << "--------------------------------------------------------\n\n"; //table formating



  //Second Associative Law (prints the truth table for that)
  
  P = 0; //sets variable P to 0 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "--------------------------------------------------------\n"; //table formating
  cout << "| Second Associative Law                               |\n"; //table formating
  cout << "--------------------------------------------------------\n"; //table formating
  cout << "| P | Q | R | P ∨ Q | Q ∨ R | (P ∨ Q) ∨ R | P ∨ (Q ∨ R)|\n"; //table formating
  cout << "--------------------------------------------------------\n"; //table formating
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 1st row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  R = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 2nd row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 3rd row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  R = 1; //sets variable R to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 4th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 5th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  R = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 6th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 7th row of Truth Table Values
  cout << "--------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  R = 1; //sets variable R to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |   " << output(P+Q) << "   |   " << output(Q+R) << "   |      " << output((P+Q)+R) << "      |      " << output(P+(Q+R)) << "     |\n"; //Prints 8th row of Truth Table Values
  cout << "--------------------------------------------------------\n\n"; //table formating



  //[(p ∨ q) ∧ (p → r) ∧ (q → r)] → r ≡ T (prints the truth table for that)
  
  P = 0; //sets variable P to 0 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  bool T = 1; //sets variable T to 1 for the truth table
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  cout << "| [(P ∨ Q) ∧ (P → R) ∧ (Q → R)] → R ≡ T                                                                         |\n"; //table formating
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  cout << "| P | Q | R | (P ∨ Q) | (P → R) | (Q → R) | (P ∨ Q) ∧ (P → R) ∧ (Q → R) | [(P ∨ Q) ∧ (P → R) ∧ (Q → R)] → R | T |\n"; //table formating
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 1st row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  R = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 2nd row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 3rd row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  R = 1; //sets variable R to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 4th row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 5th row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  R = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 6th row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 0 for the truth table
  R = 0; //sets variable R to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 7th row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  R = 1; //sets variable R to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " | " << output(R) << " |    " << output(P+Q) << "    |    " << output(P>=R) << "    |    " << output(Q>=R) << "    |              " << output((P+Q)*(P>=R)*(Q>=R)) << "              |                " << output((P+Q)*(P>=R)*(Q>=R)>=R) << "                  | T |\n"; //Prints 8th row of Truth Table Values
  cout << "-----------------------------------------------------------------------------------------------------------------\n\n"; //table formating



    //p ↔ q ≡ (p → q) ∧ (q → p) (prints the truth table for that)
  


  cout << "---------------------------------------------------------\n"; //table formating
  cout << "| P ↔ Q ≡ (P → Q) ∧ (Q → P)                             |\n"; //table formating
  cout << "---------------------------------------------------------\n"; //table formating
  cout << "| P | Q | (P → Q) | (Q → P) | (P → Q) ∧ (Q → P) | P ↔ Q |\n"; //table formating
  cout << "---------------------------------------------------------\n"; //table formating
  P = 0; //sets variable P to 0 for the truth table
  Q = 0; //sets variable Q to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |    " << output(P>=Q) << "    |    " << output(Q>=P) << "    |        " << output((P>=Q)*(Q>=P)) << "         |    " << output(1) << "   |\n"; //Prints 1st row of Truth Table Values
  cout << "---------------------------------------------------------\n"; //table formating
  Q = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |    " << output(P>=Q) << "    |    " << output(Q>=P) << "    |        " << output((P>=Q)*(Q>=P)) << "         |    " << output(P=Q) << "   |\n"; //Prints 2nd row of Truth Table Values
  cout << "---------------------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table 
  Q = 0; //sets variable Q to 0 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |    " << output(P>=Q) << "    |    " << output(Q>=P) << "    |        " << output((P>=Q)*(Q>=P)) << "         |    " << output(P=Q) << "   |\n"; //Prints 3rd row of Truth Table Values
  cout << "---------------------------------------------------------\n"; //table formating
  P = 1; //sets variable P to 1 for the truth table 
  Q = 1; //sets variable Q to 1 for the truth table
  cout << "| " << output(P) <<" | " << output(Q) << " |    " << output(P>=Q) << "    |    " << output(Q>=P) << "    |        " << output((P>=Q)*(Q>=P)) << "         |    " << output(P=Q) << "   |\n"; //Prints 4th row of Truth Table Values
  cout << "---------------------------------------------------------\n"; //table formating
  

 
}