
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include "samplelib.h"

TEST_CASE("Simple Test", "[classic]")
{
   REQUIRE(test() == 0);
}