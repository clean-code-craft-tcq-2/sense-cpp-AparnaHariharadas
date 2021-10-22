#include "stats.h"
#include <numeric>
#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;
extern float StatsAlerter::maxThreshold;
Statistics::Stats Statistics::ComputeStatistics(const vector<float>& elementlist) {
    //Implement statistics here
    //isnan(elemnetlist)
    Statistics::Stats computedStats;
    int length_list = elementlist.size();
    float sum = accumulate(elementlist.begin(),elementlist.end(),0.0);
    bool NAN_check = elementlist.empty();
    //const double NAN = sqrt(-1);
    if(!NAN_check)
    {
    computedStats.average = (float)sum/length_list;
    computedStats.max = (float)*max_element(begin(elementlist),end(elementlist));
    computedStats.min = (float)*min_element(begin(elementlist),end(elementlist));
    }
    else
    {
        computedStats.average = sqrt(-1);
        computedStats.min = sqrt(-1);
        computedStats.max = sqrt(-1);
    }
    return computedStats;
}

int checkAndAlert(const vector<float>& elementlist)
{
    auto max = (float)*max_element(begin(elementlist),end(elementlist));
    cout << StatsAlerter::maxThreshold <<endl;
    //std::vector<bool> alerters1 =alerters;
    float maxThreshold1 =10.4;// maxThreshold;
        int val;
   /* EmailAlert email;
    LEDAlert led;
    if (max > maxThreshold1) {
        
        email.emailSent = true;
        led.ledGlows = true;
    }
    else{
        email.emailSent = false;
        led.ledGlows = false;
    }*/
        if (max > maxThreshold1) {
            val =0;
        }
    return val;
}
        
  
