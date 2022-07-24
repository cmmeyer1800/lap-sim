#include "catch.hpp"
#include "csv.h"
#include <vector>


TEST_CASE("Test CSV Simple Doubles"){
  CSVReader csv("test_data/simple_test_double.csv");
  std::vector<std::vector<double>> vals = csv.get_array_double();

  REQUIRE(vals[0][0] == 1);
  REQUIRE(vals[0][1] == 1);
  REQUIRE(vals[1][0] == 2.2);
  REQUIRE(vals[1][1] == 2);
  REQUIRE(vals[2][0] == 3);
  REQUIRE(vals[2][1] == 3.3);
  REQUIRE(vals[3][0] == 4.1);
  REQUIRE(vals[3][1] == 4);
  REQUIRE(vals[4][0] == 5);
  REQUIRE(vals[4][1] == 6.9);
}