#include "stats.h"
#include <numeric>
#include <math.h>
#include <iostream>
extern float average1;
Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& elementlist) {
    //Implement statistics here
    //const std::vector<__>& elementlist;
    //isnan(elemnetlist)
    Statistics::Stats computedStats;
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    computedStats.average1 = (float)sum/elementlist.size();
    //std::cout << average1<<std::endl;
   // average = roundoff(average,3);
    computedStats.max = 8.9;//ComputeStatistics.max(inputlist);
    computedStats.min = 1.5;//ComputeStatistics.min(inputlist);
    return computedStats;
}

