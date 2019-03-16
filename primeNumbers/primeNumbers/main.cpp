#include<iostream>

using namespace std;


//  main.cpp
//  primeNumbers
//
//  Created by Richard Taylor on 3/15/19.
//  Copyright © 2019 Richard Taylor. All rights reserved.
//


int main()
{
    int low, high, i, flag;             // create needed
    
    cout << "Enter two numbers(intervals): ";  //prompt the users
    cin >> low >> high;                         // store input
    
    // print output string to user
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    
    //
    while (low < high)
    {
        flag = 0;
        
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0)
            cout << low << " ";
        
        ++low;
    }
    
    return 0;
}
