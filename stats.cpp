#include "stats.h"
#include <numeric>
#include <math.h>
#include <iostream>
float Statistics::ComputeStatistics(const std::vector<double>& elementlist) {
    //Implement statistics here
    //const std::vector<__>& elementlist;
    //isnan(elemnetlist)
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    average = sum/elementlist.size();
    std::cout << average<<std::endl;
   // average = roundoff(average,3);
    //max = ComputeStatistics.max(inputlist);
   // min = ComputeStatistics.min(inputlist);
    return average;
}

