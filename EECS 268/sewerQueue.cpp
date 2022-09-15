/** -----------------------------------------------------------------------------
 *
 * @file  Queue.cpp
 * @author Matthew McManness 
 * Assignment:   EECS-268 Lab 4
 * @brief This is the defines the methods of the queue class.
 * @date 10/4/21
 *
 ---------------------------------------------------------------------------- **/
 

using namespace std;

template <typename T>
Queue<T>::Queue()
{
	m_front = nullptr;
	m_back = nullptr;
}

template <typename T>
void Queue<T>::enqueue(T entry)
{
	if(!isEmpty())
	{		
		
		Node<T>* temp = nullptr;
		temp = new Node<T>(entry);
		m_back->setNext(temp);
		m_back = temp;
	
	} 
	else
	{
		cout << "hi";
		Node<T>* temp = nullptr;
		temp = new Node<T>(entry);
		m_back = temp;
		temp->setNext(m_back);
		m_front = temp;
	}
}

template <typename T>
void Queue<T>::dequeue()
{
	if(!isEmpty())
	{
		Node<T>* temp = m_front;
		m_front = m_front->getNext();
		delete temp;
	}
	else
	{
		throw(runtime_error("You cannot Dequeue an empty Queue!"));
	}
	if(m_front == nullptr)
	{
		m_back = nullptr;
	}
}

template <typename T>
T Queue<T>::peekFront() const
{
	if(isEmpty())
	{
		throw(runtime_error("Queue is currently Empty"));
	}
	else
	{
		return(m_front->getEntry());
	}
}

template <typename T>
bool Queue<T>::isEmpty() const
{
	if(m_front->getNext() == nullptr)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
