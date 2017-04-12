//
//  main.cpp
//  lab3 Part A
//
//  Created by tommy mok on 11/4/2017.
//  Copyright © 2017年 tommy mok. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    const int size = 9;
    vector<int> numbers;
    vector<int> v(size);
                
    
    ifstream in ("file.in",ios::in);
    
    int number;
   
    
    for(int i=1 ;in >> number;++i){
        
        numbers.push_back(number);
    }
    
    for(int i=0 ;i<8;i++)
    {
        numbers[i]=numbers[i+1];
    }
    for(int i=0;i<numbers.size();++i)
    {
       v.at(i)  = numbers[i];
    }
    
       in.close();
   
    
    
   
   for(int i=1;i<size; ++i)
{
    int insert;
    int moveltem;
    insert = v.at(i);
    moveltem = i;
    while((moveltem>0)&&(v.at(moveltem-1)>insert))
    {
        v.at(moveltem) = v.at(moveltem-1);
        --moveltem;
    }
    v.at(moveltem) = insert;
    
        }
    
    
    int output;
    for(int i=4;i<size;++i)
    {
        output=output+v.at(i);
    }
    cout<< output;

return 0;

    
}
