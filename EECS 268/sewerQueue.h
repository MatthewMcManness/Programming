/** -----------------------------------------------------------------------------
 *
 * @file  Queue.h
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 4
 * @brief This is the header file describing the queue class.
 * @date 10/4/21
 *
 ---------------------------------------------------------------------------- **/
 
 #ifndef QUEUE_H
 #define QUEUE_H
 
 #include "Node.h"
 #include "QueueInterface.h"
 
 template <typename T>
 class Queue : public QueueInterface<T>
 {
	 
	 private:
	 Node<T>* m_front;
	 Node<T>* m_back;
	 
	 public:
 
	/*
       * @pre None
       * @post creates a new queue with a nullptr for m_front and m_back.
       * @param None
       * @throw None
    */
	Queue();
	
		/*
       * @pre None
       * @post puts a Node in the queue (at the back).
       * @param entry, the new node to enter the queue.
       * @throw None
    */
	virtual void enqueue(T entry);
	
		/*
       * @pre None
       * @post deletes the entry at the front of the queue.
       * @param None
       * @throw None
    */
	virtual void dequeue();
	
		/*
       * @pre None
       * @post returns the value of the entry at the front of the queue.
       * @param None
       * @throw None
    */
	virtual T peekFront() const;
	
		/*
       * @pre None
       * @post checks to see if the queue is empty or not.
       * @param None
       * @throw None
    */
	virtual bool isEmpty() const;
	
 };
 #include "Queue.cpp"

 #endif