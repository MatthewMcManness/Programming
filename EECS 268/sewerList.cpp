/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 5
 * @brief This file describes how Linked Lists Work.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/
 
#include <stdexcept>
#include <iostream>
 
 using namespace std;
 
  template <typename T>
  LinkedList<T>::LinkedList()
  {
	  m_length = 0;
	  m_front = nullptr;
  }
 
 template <typename T>
  void LinkedList<T>::insert(int index, T entry)
  {
	if(m_length != 0)
	{
		if((index <= m_length) && (index > 0))
		{
			Node<T>* newNode = new Node<T>(entry);
			Node<T>* temp = m_front;
			
			for(int i = 0; i < (index); i++)
			{
				temp = temp->getNext();
			}
			newNode->setNext(temp);
			temp = m_front;
			for(int i = 0; i < (index-1); i++)
			{
				temp = temp->getNext();
			}
			temp->setNext(newNode);
			m_length++;
		}	
		else
		{
			throw(runtime_error("index not valid"));
		}
	}
	else if (index == 1)
	{
		Node<T>* newFront = new Node<T>(entry);
		m_front = newFront;
		m_length++;
	}
	else
	{
		throw(runtime_error("index not valid"));
	}
  }
  
  template <typename T>
  void LinkedList<T>::remove(int index)
  {
	if(m_length != 0)
	{
		if((index <= m_length) && (index > 0))
		{
			Node<T>* temp = m_front;
			Node<T>* previous = nullptr;
			
			for(int i = 0; i < (index-1); i++)
			{
				temp = temp->getNext();
			}
			previous = temp;
			temp = m_front;
			for(int i = 0; i < index; i++)
			{
				temp = temp->getNext();
			}
			previous->setNext(temp->getNext());
			m_length--;
		}	
		else
		{
			throw(runtime_error("index not valid"));
		}
	}
	else if (index == 1)
	{
		m_front = nullptr;
		m_length--;
	}
	else
	{
		throw(runtime_error("index not valid"));
	}
  }
  
 template <typename T>
  T LinkedList<T>::getEntry(int index) const
  {
	  if((index <= m_length) && (index > 0))
	{
		Node<T>* temp = m_front;
		for(int i = 0; i < (index-1); i++)
		{
			temp = temp->getNext();
		}
		return(temp->getEntry());
	}	
	else
	{
		throw(runtime_error("index not valid"));
	}		
  }
  
 template <typename T>
  void LinkedList<T>::clear()
  {
	  while(m_length != 0)
	  {
		  this->remove(1);
	  }
  }
  
  template <typename T>
  void LinkedList<T>::setEntry(int index, T entry)
  {
	if(m_length != 0)
	{
		if((index <= m_length) && (index > 0))
		{
			Node<T>* newNode = new Node<T>(entry);
			Node<T>* temp = m_front;
			
			for(int i = 0; i < (index=1); i++)
			{
				temp = temp->getNext();
			}
			newNode->setNext(temp);
			temp = m_front;
			for(int i = 0; i < (index-1); i++)
			{
				temp = temp->getNext();
			}
			temp->setNext(newNode);
			
		}	
		else
		{
			throw(runtime_error("index not valid"));
		}
	}
	else
	{
		throw(runtime_error("index not valid"));
	}
  }
  
  
  template <typename T>
  int LinkedList<T>::length() const
  {
	  return(m_length);
  }
  
