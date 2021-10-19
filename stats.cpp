#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
    //Implement statistics here
    const std::vector<__>& inputlist;
    average = ComputeStatistics.average(inputlist);
    max = ComputeStatistics.max(inputlist);
    min = ComputeStatistics.min(inputlist);
}

float ComputeStatistics.average(std::vector<___>& elementlist)
{
    sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    avg = sum/elementlist.size();
}
