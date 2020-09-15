#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("test menu with switch function")
{
	REQUIRE(menu(1) == "option 1");
	REQUIRE(menu(2) == "option 2");
	REQUIRE(menu(3) == "option 3");
	REQUIRE(menu(4) == "option 4");
	REQUIRE(menu(10) == "Invalid Option");
}
