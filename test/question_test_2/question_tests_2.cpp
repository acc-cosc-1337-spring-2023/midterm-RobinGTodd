#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("verify get_dna_p_distance")
{
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 0.4118);
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT") == 0.3529);
}
