#include "../include/catch2/catch.hpp"
#include "../include/chapter6.hh"
#include <vector>

using namespace chapter6;

SCENARIO("Placeholder", "[]") {
  GIVEN("Something") {

    WHEN("We do this") {

      THEN("The computations are correct") { REQUIRE(1 == 1); }
    }
  }
}
