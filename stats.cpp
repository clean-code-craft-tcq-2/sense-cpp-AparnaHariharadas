#include "stats.h"
#include <numeric>
#include <math.h>
float Statistics::ComputeStatistics(const std::vector<float>& elementlist) {
    //Implement statistics here
    //const std::vector<__>& elementlist;
    //isnan(elemnetlist)
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    ComputeStatistics ComputeStat;
    ComputeStat.average = sum/elementlist.size();
    //max = ComputeStatistics.max(inputlist);
   // min = ComputeStatistics.min(inputlist);
    return average;
}

