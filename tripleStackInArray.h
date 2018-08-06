//
//  tripleStackInArray.h
//  ThreeinOne(Fixed Divison)
//
//  Created by Louie Shi on 8/2/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#ifndef tripleStackInArray_h
#define tripleStackInArray_h

class tripleStackInArray
{
public:
    int numberOfStacks = 3;
    int stackCapacity;
    int* values;
    int* sizes;

    //Default Constructor
    tripleStackInArray()
    {
        stackCapacity = 4;
        values = new int[numberOfStacks * stackCapacity];
        sizes = new int[numberOfStacks];
        
        //Clear values array
        for(int i = 0; i < (numberOfStacks * stackCapacity); i++)
        {
            values[i] = -1;
        }
        
        //Clear sizes array
        for(int i = 0; i < numberOfStacks; i++)
        {
            sizes[i] = 0;
        }
    }
    
    //Passing Stack
    tripleStackInArray(int sc)
    {
        stackCapacity = sc;
        values = new int[numberOfStacks * stackCapacity];
        sizes = new int[numberOfStacks];
        
        //Clear values array
        for(int i = 0; i < (numberOfStacks * stackCapacity); i++)
        {
            values[i] = -1;
        }
        
        //Clear sizes array
        for(int i = 0; i < numberOfStacks; i++)
        {
            sizes[i] = -1;
        }
    }
    
    void push(int stackNum, int val);
    void pop(int stackNum);
    void peek(int stackNum);
    bool isEmpty(int stackNum);
    bool isFull(int stackNum);
    int indexTopOfStack(int stackNum);
    void printValues();
};

#endif /* tripleStackInArray_h */
