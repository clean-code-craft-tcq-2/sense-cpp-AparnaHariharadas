#include <vector>
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
   StatsAlerter checkAndAlert(const std::vector<float>& elementlist);
   
};


    
