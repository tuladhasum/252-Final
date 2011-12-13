//Header File: linkedStack.h

#ifndef H_StackType
#define H_StackType

#include <iostream>
#include <cassert>

using namespace std;

//Definition of the node
template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

template<class Type>
class linkedStackType
{
public:
    const linkedStackType<Type>& operator=
                                (const linkedStackType<Type>&); 
      //Overload the assignment operator.
    void initializeStack();
      //Function to initialize the stack to an empty state. 
      //Postcondition: The stack elements are removed; 
      //               stackTop = NULL.
    bool isEmptyStack() const;
      //Function to determine whether the stack is empty.
      //Postcondition: Returns true if the stack is empty,
      //               otherwise returns false.
    bool isFullStack() const;
      //Function to determine whether the stack is full.
      //Postcondition: Returns false.

    void destroyStack();
      //Function to remove all the elements of the stack,  	 
      //leaving the stack in an empty state.
      //Postcondition: stackTop = NULL

    void push(const Type& newItem);
      //Function to add newItem to the stack.
      //Precondition: The stack exists and is not full.
      //Postcondition: The stack is changed and newItem 
      //               is added to the top of the stack.

    Type top() const;
      //Function to return the top element of the stack.
      //Precondition: The stack exists and is not empty.
      //Postcondition: If the stack is empty, the program 
      //               terminates; otherwise, the top element
      //               of the stack is returned.

    void pop();
      //Function to remove the top element of the stack.
      //Precondition: The stack exists and is not empty.
      //Postcondition: The stack is changed and the top element
      //               is removed from the stack.

    linkedStackType(); 
      //default constructor
      //Postcondition: stackTop = NULL
    linkedStackType(const linkedStackType<Type>& otherStack); 
      //copy constructor
    ~linkedStackType();
      //destructor
      //All the elements of the stack are removed from the stack.

private:
    nodeType<Type> *stackTop; //pointer to the stack

    void copyStack(const linkedStackType<Type>& otherStack); 
      //Function to make a copy of otherStack.
      //Postcondition: A copy of otherStack is created and
      //               assigned to this stack.
};


template<class Type> //default constructor
linkedStackType<Type>::linkedStackType()
{
	stackTop = NULL;
}

template<class Type>
void linkedStackType<Type>::destroyStack()
{
	nodeType<Type> *temp; //pointer to delete the node

	while (stackTop != NULL)  //while there are elements in the stack
	{
	   temp = stackTop;      //set temp to point to the current node
	   stackTop = stackTop->link; //advance stackTop to the next node
	   delete temp;     //deallocate memory occupied by temp
	}
}// end destroyStack

template<class Type>
void linkedStackType<Type>:: initializeStack()
{
    destroyStack();
}

template<class Type>
bool linkedStackType<Type>::isEmptyStack() const
{
	return(stackTop == NULL);
}

template<class Type>
bool linkedStackType<Type>:: isFullStack() const
{
   return false;
}

template<class Type>
void linkedStackType<Type>::push(const Type& newElement)
{
   nodeType<Type> *newNode; //pointer to create the new node

   newNode = new nodeType<Type>; //create the node
   assert(newNode != NULL);

   newNode->info = newElement;   //store newElement in the node
   newNode->link = stackTop;     //insert newNode before stackTop
   stackTop = newNode;          //set stackTop to point to the top node
} //end push


template<class Type>
Type linkedStackType<Type>::top() const
{
	assert(stackTop != NULL);	//if stack is empty,
								//terminate the program
   	return stackTop->info;      //return the top element 
}//end top

template<class Type>
void linkedStackType<Type>::pop()
{
   nodeType<Type> *temp;       //pointer to deallocate memory

   if (stackTop != NULL)
   {
   		temp = stackTop;            //set temp to point to the top node
   		stackTop = stackTop->link;  //advance stackTop to the next node
   		delete temp;	            //delete the top node
   }
   else
		cout << "Cannot remove from an empty stack." << endl;
}//end pop

template<class Type> 
void linkedStackType<Type>::copyStack
                       (const linkedStackType<Type>& otherStack)
{
    nodeType<Type> *newNode, *current, *last;

    if (stackTop != NULL) //if stack is nonempty, make it empty
        destroyStack();

    if (otherStack.stackTop == NULL)
        stackTop = NULL;
    else
    {
        current = otherStack.stackTop;  //set current to point
                                   //to the stack to be copied

            //copy the stackTop element of the stack 
        stackTop = new nodeType<Type>;   //create the node
        assert(stackTop != NULL);

        stackTop->info = current->info; //copy the info
        stackTop->link = NULL;     //set the link field of the
                                   //node to NULL
        last = stackTop;      //set last to point to the node
        current = current->link;    //set current to point to
                                    //the next node

            //copy the remaining stack
        while (current != NULL)
        {
            newNode = new nodeType<Type>;
            assert(newNode!= NULL);

            newNode->info = current->info;
            newNode->link = NULL;
            last->link = newNode;
            last = newNode;
            current = current->link;
        }//end while
    }//end else
}

    //copy constructor
template<class Type>   
linkedStackType<Type>::linkedStackType(
                       const linkedStackType<Type>& otherStack) 
{
	stackTop = NULL;
	copyStack(otherStack);
}//end copy constructor

    //destructor
template<class Type> 
linkedStackType<Type>::~linkedStackType()
{
	destroyStack();
}//end destructor

    //overloading the assignment operator
template<class Type>   
const linkedStackType<Type>& linkedStackType<Type>::operator=
    			  (const linkedStackType<Type>& otherStack)
{ 
	if (this != &otherStack) //avoid self-copy
		copyStack(otherStack);

	return *this; 
}//end operator=

#endif

