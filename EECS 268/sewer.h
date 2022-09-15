/** -----------------------------------------------------------------------------
 *
 * @file  Node.h
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 3
 * @brief This header file creates Nodes that I can use with My Data Structure.
 * @date 9/27/21
 *
 ---------------------------------------------------------------------------- **/

#ifndef NODE_H
#define NODE_H

class Node
{
	private:
	char m_entry;
	Node* m_next;
	
	public:
	
	 /*
       * @pre None
       * @post creates a new Node with a character (entry)
       * @param entry, the element to be contained inside the Node
       * @throw None
    */
	Node(char entry);
	
	 /*
       * @pre None
       * @post returns what was contained in the Node
       * @param None
       * @throw None
    */
	char getEntry() const;
	
	 /*
       * @pre None
       * @post entry replaces whatever was inside the Node previously
       * @param entry, the element to be put in the Node
       * @throw None
    */
	void setEntry(char entry);
	
	 /*
       * @pre None
       * @post returns the Node* to the next Node
       * @param None
       * @throw None
    */
	Node* getNext() const;
	
	 /*
       * @pre None
       * @post changes what Node this Node is pointing to
       * @param next, the pointer to the Node that you want to be next.
       * @throw None
    */
	void setNext(Node* next);

};
#endif