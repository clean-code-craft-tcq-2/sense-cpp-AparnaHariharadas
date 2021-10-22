#include "stats.h"
#include <numeric>
#include <math.h>
#include <algorithm>
//extern float average1;
using namespace std;
Statistics::Stats Statistics::ComputeStatistics(const vector<float>& elementlist) {
    //Implement statistics here
    //isnan(elemnetlist)
    Statistics::Stats computedStats;
    int length_list = elementlist.size();
    float sum = accumulate(elementlist.begin(),elementlist.end(),0.0);
   // auto max = std::max_element(std::begin(elementlist),std::end(elementlist));
   // auto min = std::min_element(elementlist.begin(),elementlist.end());
    computedStats.average1 = (float)sum/length_list;
    computedStats.max = (float)*max_element(begin(elementlist),end(elementlist));
    computedStats.min = (float)min_element(elementlist.begin(),elementlist.end());
    return computedStats;
}

