/** -----------------------------------------------------------------------------
 *
 * @file  Node.cpp
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 3
 * @brief This file describes how Nodes work.
 * @date 9/27/21
 *
 ---------------------------------------------------------------------------- **/
 #include "Node.h"
  using namespace std;
 
 Node::Node(char entry)
 {
	setEntry(entry);
	m_next = nullptr;
 }
 
 char Node::getEntry() const
 {
	 return(m_entry);
 }
 
 void Node::setEntry(char entry)
 {
	 m_entry = entry;
 }
 
 Node* Node::getNext() const
 {
	 return(m_next);
 }
 
 void Node::setNext(Node* next)
 {
	 m_next = next;
 }
