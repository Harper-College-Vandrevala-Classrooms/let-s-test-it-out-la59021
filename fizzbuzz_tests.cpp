#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "fizzbuzz.hpp"
#include "iostream"
using namespace std;

TEST_CASE("Testing FizzBuzz") {
    REQUIRE(fizzBuzz(0) == "FizzBuzz");
    REQUIRE(fizzBuzz(1) == "1");
    REQUIRE(fizzBuzz(2) == "2");
    REQUIRE(fizzBuzz(3) == "Fizz");
    REQUIRE(fizzBuzz(4) == "4");
    REQUIRE(fizzBuzz(5) == "Buzz");
    REQUIRE(fizzBuzz(6) == "Fizz");
    REQUIRE(fizzBuzz(10) == "Buzz");
    REQUIRE(fizzBuzz(15) == "FizzBuzz");
    REQUIRE(fizzBuzz(20) == "Buzz");
    REQUIRE(fizzBuzz(98) == "98");
    REQUIRE(fizzBuzz(1000) == "Buzz");
    REQUIRE(fizzBuzz(8735) == "Buzz");
}