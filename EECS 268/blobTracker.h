/** -----------------------------------------------------------------------------
 *
 * @file  executive.h
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 5
 * @brief The header file for the executive class.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <iostream>
#include <fstream>
#include "ListInterface.h"
#include "LinkedList.h"
#include "Node.h"
#include "BrowserHistoryInterface.h"
#include "BrowserHistory.h"
#include "executive.h"

using namespace std;

class executive
{
	private:
	string m_fileName= "";
	string m_command = "";
	ifstream m_inputFile;
	
	
	public:
	executive(string fileName);

	void run(); // interactes with the file 
	void openfile(); // opens the file
	
};

#endif