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
    computedStats.average = (float)sum/length_list;
    computedStats.max = (float)*max_element(begin(elementlist),end(elementlist));
    computedStats.min = (float)*min_element(begin(elementlist),end(elementlist));
    return computedStats;
}

