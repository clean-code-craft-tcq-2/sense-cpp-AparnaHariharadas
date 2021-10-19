#include "stats.h"
#include <numeric>
Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
    //Implement statistics here
    //const std::vector<__>& elementlist;
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    float average = sum/elementlist.size();
    //max = ComputeStatistics.max(inputlist);
   // min = ComputeStatistics.min(inputlist);
}

