//
//  partb.hpp
//  lab3 Part A
//
//  Created by tommy mok on 12/4/2017.
//  Copyright © 2017年 tommy mok. All rights reserved.
//

#include <ctime>
 using namespace std;
 class Clock {
     public:
     Clock();
     Clock(clock_t s);
     void start();
     void setStart(clock_t start_ts);
     clock_t getStart();
     double getElapsedTime();
     private:
     clock_t start_ts;
     };
