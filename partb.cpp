//
//  partb.cpp
//  lab3 Part A
//
//  Created by tommy mok on 12/4/2017.
//  Copyright © 2017年 tommy mok. All rights reserved.
//


#include <vector>
 #include <algorithm>
 #include <iostream>
 #include <cstdlib>
#include "Clock.h"
using namespace std;
void insertion_sort(vector<int> & v)
{
int insert, moveItem;
    for(int next=1;next<v.size();++next)
        {
            insert = v.at(next);
             moveItem = next;
             while((moveItem>0) &&
                     (v.at(moveItem-1) > insert))
                 {
                     v.at(moveItem) = v.at(moveItem-1);
                     --moveItem;
                     }
             v.at(moveItem) = insert;
             }
     }
int main()
 {
     Clock clk;
     const int size = 100000;
     vector<int> v1(size),v2;
     srand(time(NULL));
     for(int i=0; i<size; ++i)
         v1.at(i) = rand();
         v2 = v1; clk.start();
        sort(v1.begin(), v1.end());
         cout << "sort(): " <<
        clk.getElapsedTime() << " seconds\n";
         cout << "v1/v2 are "<<
        ((v1==v2)?"the same.\n":"different.\n");
         clk.start();
         insertion_sort(v2);
         cout << "insertion_sort(): " <<
        clk.getElapsedTime() << " seconds\n";
         cout << "v1/v2 are "<<
        ((v1==v2)?"the same.\n":"different.\n");
         return 0;
         }
