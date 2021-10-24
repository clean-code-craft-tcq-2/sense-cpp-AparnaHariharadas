#include <vector>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

namespace Statistics {
   class Stats
{
public:
   float average;
   float max;
   float min;
};
   
   Statistics::Stats ComputeStatistics(const std::vector<float>& elementlist);

}

class EmailAlert {
  public:
   bool emailSent;
 };

class LEDAlert {
   public:
   bool ledGlows;
 };

class StatsAlerter {
   public:
   float maxThreshold;
   std::vector<bool> alerters;
   public:
   StatsAlerter(float maxThreshold1,std::vector<bool> alerters1)
   {
      maxThreshold = maxThreshold1;
      alerters = alerters1;
   }
   
   EmailAlert email;
   LEDAlert led;
   
   void checkAndAlert(const std::vector<float>& elementlist){
      auto max = (float)*max_element(begin(elementlist),end(elementlist));
      std::vector<bool> alerter = StatsAlerter::alerters;
      if (max > StatsAlerter::maxThreshold) {
        
          email.emailSent = true;
          led.ledGlows = true;
      }
      else{
          email.emailSent = false;
          led.ledGlows = false;
      }
      cout<<email.emailSent<<endl;
      cout<<led.ledGlows<<endl;
      cout<<StatsAlerter::maxThreshold<<endl;
      cout<<max<<endl;
   }
   
};



    
