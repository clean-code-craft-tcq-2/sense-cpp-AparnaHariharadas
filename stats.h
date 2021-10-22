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
  bool emailSent;
   
};

class LEDAlert {
   bool ledGlows;
   
};
class StatsAlerter {
   public:
   float maxThreshold;
   EmailAlert email;
   LEDAlert led;
   void checkAndAlert(const std::vector<<IAlerter*>& alerters);
   
};


    
