//
//  main.cpp
//  ThreeinOne(Fixed Divison)
//
//  Created by Louie Shi on 8/2/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include "tripleStackInArray.h"

using namespace std;

int main(int argc, const char * argv[])
{
    tripleStackInArray stk;
    
    stk.values[0] = -1;
    stk.values[1] = -1;
    stk.values[2] = -1;
    stk.values[3] = -1;
    stk.values[4] = -1;
    stk.values[5] = -1;
    stk.values[6] = -1;
    stk.values[7] = -1;
    stk.values[8] = -1;
//
//    stk.printValues();
//
//    cout << stk.indexTopOfStack(1) << endl;
//    cout << stk.indexTopOfStack(2) << endl;
//    cout << stk.indexTopOfStack(3) << endl;
    
    stk.printValues();
    
    stk.push(1, 8);
    stk.push(1, 9);
    stk.push(1, 10);
    stk.push(1, 11);
    stk.push(1, 12);
    stk.pop(1);
    stk.pop(1);
    stk.pop(1);
    stk.pop(1);
    //stk.pop(1);
    
    stk.printValues();

    stk.peek(1);
    
//    cout << "isEmpty: " << stk.isEmpty(1) << endl;
//    cout << "isEmpty: " << stk.isEmpty(2) << endl;
//    cout << "isEmpty: " << stk.isEmpty(3) << endl;
//    cout << endl;
//
//    cout << "isFull: " << stk.isFull(1) << endl;
//    cout << "isFull: " << stk.isFull(2) << endl;
//    cout << "isFull: " << stk.isFull(3) << endl;
//    cout << endl;
    
//    cout << "Start Index of Stack 1: " << stk.indexTopOfStack(1) << endl;
//    cout << "Start Index of Stack 2: " << stk.indexTopOfStack(2) << endl;
//    cout << "Start Index of Stack 3: " << stk.indexTopOfStack(3) << endl;
//    cout << endl;
    
    return 0;
}
