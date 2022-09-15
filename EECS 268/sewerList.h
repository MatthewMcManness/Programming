/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.h
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 5
 * @brief This file outlines what Linked Lists will do.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListInterface.h"
#include "Node.h"

template <typename T>
class LinkedList : public ListInterface<T>
{
	
	protected:
	Node<T>* m_front;
	int m_length;
	
	
	public:
	
	LinkedList();
	
    virtual ~LinkedList() {}
	
    /**
    * @pre The index is valid
    * @post The entry is added to the list at the index, increasing length by 1
    * @param index, position to insert at (1 to length+1)
    * @param entry, value/object to add to the list
    * @throw std::runtime_error if the index is invalid
    */
    virtual void insert(int index, T entry);

    /**
    * @pre The index is valid
    * @post The entry at given position is removed, reducing length by 1 
    * @param index, position to remove at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
    virtual void remove(int index);

    /**
    * @pre The index is valid
    * @post None 
    * @param index, position to look at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
    virtual T getEntry(int index) const;

    /**
    * @pre None
    * @post List is empty
    * @throw None
    */
   virtual void clear();

    /**
    * @pre The index is valid (must already exist)
    * @post Given entry overrides the entry at the given index 
    * @param index, position to override at (1 to length)
    * @param entry, value/object to place at given index
    * @throw std::runtime_error if the index is invalid
    */
   virtual void setEntry(int index, T entry);

    /**
    * @pre None
    * @post None
    * @return the length of the list is returned
    */
     virtual int length() const;
};

#include "LinkedList.cpp"
#endif