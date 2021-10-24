#include "stats.h"

Statistics::Stats Statistics::ComputeStatistics(const vector<float>& elementlist) {
    //Implement statistics here
   
    Statistics::Stats computedStats;
    int length_list = elementlist.size();
    float sum = accumulate(elementlist.begin(),elementlist.end(),0.0);
    bool NAN_check = elementlist.empty();
    
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
