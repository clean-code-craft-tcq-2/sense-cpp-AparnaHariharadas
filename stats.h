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
   private:
   float maxThreshold;
   std::vector<bool> alerters;
   public:
   StatsAlerter(float maxThreshold1,std::vector<bool> alerters1)
   {
      maxThreshold = maxThreshold1;
      alerters = std::vector<bool> alerters1;
   }
   EmailAlert email;
   LEDAlert led;
   void checkAndAlert(const std::vector<float>& elementlist);
   
};


    
