//
//  IndexList.h
//  employees_project
//
//  Created by Raza Rauf on 2015-05-14.
//  Copyright (c) 2015 Raza Rauf. All rights reserved.
//

#ifndef __employees_project__INDEXLIST__
#define __employees_project__INDEXLIST__

#include <iostream>
#include <stdio.h>
using namespace std;

template <class T, int maxSize>
class indexList
{
public:
    // Constructor
    indexList();
    // Add an item to the end of an indexed list
    bool append(const T&);
    // Retrieve an element at a specified index
    void selSort();
    // Display the list contents
    void display();
    int findIndexOfMin(int startIndex, int endIndex);
    void exchange (T& a1, T& a2);
    
private:
    //Data Members
    T elements[maxSize]; 
    int size;
};

#endif /* defined(__employees_project__IndexList__) */

//Default constructor for the IndexList
//Initializes data member(s)
template <class T, int maxSize>
indexList<T, maxSize>::indexList()
{
    size = 0;		// list is empty
}

template <class T, int maxSize>
bool indexList<T, maxSize>::append(const T& item)

// Pre:  item is defined
// Post: if size < maxSize, item is appended to
// list
// Returns: true if item was appended; otherwise,
// false
{
    bool result;
    // Add item to the end of the list if not full.
    if (size < maxSize)
    {
        elements[size] = item;
        size++;
        result = true;
    }
    else
    {
        cerr << "Array is filled - can't append!" << endl;
        result = false;
    }
    return result;
}
// Sort the indexed list
template <class T, int maxSize>
void indexList<T, maxSize>::selSort()
{
    int minSub;
    for (int i = 0; i < size-1; i++)
    {  // Find index of smallest element in
        // unsorted section of items.
        
        minSub = findIndexOfMin(i, size-1);
        
        // Exchange items at position minSub and i
        exchange(elements[minSub], elements[i]);
    }
    
}
//Searches and returns the index of the minimum element of the array
template <class T, int maxSize>
int indexList<T, maxSize>::findIndexOfMin(int startIndex, int endIndex)
{  int minIndex;
    int i;
    minIndex = startIndex;
    for (i = startIndex + 1; i <= endIndex; i++)
        if (elements[i] < elements[minIndex])
            minIndex = i;
    // All elements are examined and minIndex is
    // the index of the smallest element.
    
    return minIndex;
    
}

//Exchanges any two data members
template <class T, int maxSize>
void indexList<T, maxSize>::exchange(T& a1, T& a2)
{
    T temp;
    
    temp = a1;
    a1 = a2;
    a2 = temp;
}

// Display the list contents
// Pre:  none
// Post: Displays each item stored in the list
template <class T, int maxSize>
void indexList<T, maxSize>::display()
{
    // Display each list element.
    for (int i = 0; i < size; i++)
        cout << elements[i];
}