#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <math.h>
#include <cmath>
#include<iostream>
using namespace std;

TEST_CASE("reports average, minimum and maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    auto computedStats = Statistics::ComputeStatistics({});
    //All fields of computedStats (average1, max, min) must be
    //NAN (not-a-number), as defined in math.h
    //Design the REQUIRE statement here.
    REQUIRE(isnan(computedStats.max) == true);
    REQUIRE(isnan(computedStats.min) == true);
    REQUIRE(isnan(computedStats.average) == true);
    //Use http://www.cplusplus.com/reference/cmath/isnan/
}

TEST_CASE("raises alerts when max is greater than threshold") {
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    std::vector<bool> alerters = {&emailAlert, &ledAlert};
    const float maxThreshold = 10.2;
    StatsAlerter statsAlerter(maxThreshold,alerters);
    statsAlerter.checkAndAlert({99.8, 34.2, 4.5, 6.7});
    REQUIRE(ledAlert.ledGlows);
    REQUIRE(emailAlert.emailSent);
    
}
