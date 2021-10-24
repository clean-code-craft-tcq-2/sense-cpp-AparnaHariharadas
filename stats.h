#include <vector>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <numeric>
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
   StatsAlerter(float maxThreshold1)//,std::vector<bool> alerters1)
   {
      maxThreshold = maxThreshold1;
     // alerters = alerters1;
   }
   
   EmailAlert email;
   LEDAlert led;
   int checkAndAlert(const std::vector<float>& elementlist){
      auto max = (float)*max_element(begin(elementlist),end(elementlist));
      cout << StatsAlerter::maxThreshold <<endl;
      //std::vector<bool> alerters1 =alerters;
      float maxThreshold1 =10.4;// maxThreshold;
       int val;
     /* EmailAlert email;
      LEDAlert led;
      if (max > maxThreshold1) {
        
          email.emailSent = true;
          led.ledGlows = true;
      }
      else{
          email.emailSent = false;
          led.ledGlows = false;
      }*/
          if (max > maxThreshold1) {
              val =0;
          }
      return val;
   }
};



    
