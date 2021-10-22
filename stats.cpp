#include "stats.h"
#include <numeric>
#include <math.h>
#include <iostream>
//extern float average1;
Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& elementlist) {
    //Implement statistics here
    //isnan(elemnetlist)
    Statistics::Stats computedStats;
    int length_list = elementlist.size();
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    float max = std::*max_element(elementlist.begin(),elementlist.end());
    float min = std::*min_element(elementlist.begin(),elementlist.end());
    computedStats.average1 = (float)sum/length_list;
    computedStats.max = max;
    computedStats.min = min;
    return computedStats;
}

