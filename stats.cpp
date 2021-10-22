#include "stats.h"
#include <numeric>
#include <math.h>
#include <algorithm>
//extern float average1;
Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& elementlist) {
    //Implement statistics here
    //isnan(elemnetlist)
    Statistics::Stats computedStats;
    int length_list = elementlist.size();
    float sum = std::accumulate(elementlist.begin(),elementlist.end(),0.0);
    auto max = std::max_element(std::begin(elementlist),std::end(elementlist));
    auto min = std::min_element(elementlist.begin(),elementlist.end());
    computedStats.average1 = (float)sum/length_list;
    computedStats.max = (float)max;
    computedStats.min = (float)min;
    return computedStats;
}

