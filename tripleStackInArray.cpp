//
//  tripleStackInArray.cpp
//  ThreeinOne(Fixed Divison)
//
//  Created by Louie Shi on 8/2/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "tripleStackInArray.h"

using namespace std;

void tripleStackInArray::push(int stackNum, int val)
{
      int index = -1;

//    Code Without try and catch
//
//    if(isFull(stackNum))
//    {
//        cerr << "Can't push anymore into a full stack!" << endl;
//    }
//    else
//    {
//        index = indexTopOfStack(stackNum) + 1;
//        values[index] = val;
//        sizes[stackNum - 1]++;
//    }
    
    try
    {
        if(isFull(stackNum))
        {
            throw range_error("Can't push anymore into a full stack!");
        }
        else
        {
            index = indexTopOfStack(stackNum) + 1;
            values[index] = val;
            sizes[stackNum - 1]++;
        }
    }
    catch (range_error err)
    {
        cout << err.what() << endl;
        return;
    }
    
}

void tripleStackInArray::pop(int stackNum)
{
    int index = -1;
    
//    Code Without try and catch
//
//    if(isEmpty(stackNum))
//    {
//        cerr << "Can't pop an empty stack!" << endl;
//    }
//    else
//    {
//        index = indexTopOfStack(stackNum);
//        values[index] = -1;
//        sizes[stackNum - 1]--;
//    }
    
    try
    {
        if(isEmpty(stackNum))
        {
            throw range_error("Can't pop an empty stack!");
        }
        else
        {
            index = indexTopOfStack(stackNum);
            values[index] = -1;
            sizes[stackNum - 1]--;
        }
    }
    catch (range_error err)
    {
        cout << err.what() << endl;
        return;
    }
}

void tripleStackInArray::peek(int stackNum)
{
        int index;
    
//    Code Without try and catch
//
//        if(isEmpty(stackNum))
//        {
//            cerr << "The stack is currently empty!" << endl;
//        }
//        else
//        {
//            index = indexTopOfStack(stackNum);
//            cout << "Peek: " << values[index] << endl;
//        }
    try {
            if(isEmpty(stackNum))
            {
                throw range_error("The stack is currently empty! Can't PEEK");
            }
            else
            {
                index = indexTopOfStack(stackNum);
                cout << "Peek: " << values[index] << endl;
            }
        }
    catch (range_error err)
    {
        cout << err.what() << endl;
        return;
    }
}

//DONE
bool tripleStackInArray::isEmpty(int stackNum)
{
    return (sizes[stackNum - 1] == 0);
}

bool tripleStackInArray::isFull(int stackNum)
{
    return (sizes[stackNum - 1] == stackCapacity);
}

// Returns the index of the item on top of the stack
int tripleStackInArray::indexTopOfStack(int stackNum)
{
    int startIndex = 0 + (stackCapacity * (stackNum - 1));
    int count = sizes[stackNum - 1];
    
    return (startIndex + count - 1);
}

//DONE
void tripleStackInArray::printValues()
{
    int finalIndex = stackCapacity * numberOfStacks;
    
    for(int i = 0; i < finalIndex; i++)
    {
        cout << i << " " << values[i] << " " << endl;
    }
    cout << endl;
}
