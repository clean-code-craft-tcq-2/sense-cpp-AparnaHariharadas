#include "stats.h"
#include <numeric>
#include <math.h>
#include <iostream>
extern float average1;
float Statistics::ComputeStatistics(const std::vector<float>& elementlist) {
    //Implement statistics here
    //const std::vector<__>& elementlist;
    //isnan(elemnetlist)
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    computedStats.average1 = (float)sum/elementlist.size();
    std::cout << average1<<std::endl;
   // average = roundoff(average,3);
    //max = ComputeStatistics.max(inputlist);
   // min = ComputeStatistics.min(inputlist);
    return computedStats.average1;
}

