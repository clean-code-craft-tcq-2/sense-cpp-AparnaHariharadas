#include "stats.h"
#include <numeric>
#include <math.h>
#include <algorithm>
using namespace std;
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

void checkAndAlert(const vector<float>& elementlist)
{
    auto max = (float)*max_element(begin(elementlist),end(elementlist));
    std::vector<bool> alerters1 =alerters;
    float maxThreshold1 = maxThreshold;
    EmailAlert email;
    LEDAlert led;
    if (max > maxThreshold1) {
        
        email.emailSent = true;
        led.ledGlows = true;
    }
    else{
        email.emailSent = false;
        led.ledGlows = false;
    }
}
        
