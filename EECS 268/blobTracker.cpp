/** -----------------------------------------------------------------------------
 *
 * @file  executive.cpp
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 5
 * @brief The class file for executive creates a browser history and reads in instructions from file.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/

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

executive::executive(string fileName)
{
	m_fileName = fileName;
}

void executive::openfile()
{
	m_inputFile.open(m_fileName);
}

void executive::run()
{

	openfile();

	if(m_inputFile.is_open())
	{
		
		BrowserHistoryInterface* myHistory = new BrowserHistory();
		while(!m_inputFile.eof())
		{
			m_inputFile >> m_command;
	
			if(m_command == "NAVIGATE")
			{
				m_inputFile >> m_command;
				myHistory->navigateTo(m_command);
			}
			else if(m_command == "BACK")
			{
				myHistory->back();
			}
			else if(m_command == "FORWARD")
			{
				myHistory->forward();
			}
			else if(m_command == "HISTORY")
			{
				LinkedList<string> history;
				myHistory->copyCurrentHistory(history);
				cout << "\nOldest\n===================\n";
				for(int i=1; i <= history.length();i++)
				{
					if(myHistory->current() == history.getEntry(i))
					{
						cout << history.getEntry(i) << "     <==current\n";
					}
					else
					{
						cout << history.getEntry(i) << '\n';
					}
				}		
				cout << "===================\nNewest\n";
			}
			else
			{
				cout << "\n\nFile not formatted correctly.\n\n";
				break;
			}
			
			
		}
	}
	else
	{
		cout << "\nThe file " << m_fileName << " could not be opened.\n\n";
	}	
}




