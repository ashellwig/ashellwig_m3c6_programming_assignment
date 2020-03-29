#include "../include/catch2/catch.hpp"
#include "../include/chapter6.hh"

using namespace chapter6;

SCENARIO("We are supplied normal, integer-type inputs", "[calculation]") {
  GIVEN("The supplied data") {
    int windSpeed = 88;
    int temperature = 11;

    WHEN("We calculate the windchill") {
      int windChill = chapter6::calculateWindchill(windSpeed, temperature);

      THEN("The computation results to -20") { REQUIRE(windChill == -20); }
    }
  }
}
