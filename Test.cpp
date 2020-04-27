#include "doctest.h"
#include "solver.hpp"

using namespace solver;

#include <string>
using namespace std;

int num = 0;
TEST_CASE("Test 1, easy test, RealVariable") {
    RealVariable x;
    CHECK(solve(2*x == 10) == 5);
    CHECK(solve(x == 2) == 2);
    CHECK(solve(5*x + 2 == 32) == 6);
    CHECK(solve(3*x - 8 + 6  == 10) == 4);
    CHECK(solve(2*x - 4 + 3*x -1 == 10) == 3);
    CHECK(solve(10*x - 4 - 3*x == 66) == 10);
    CHECK(solve(9*x - 23 == 10) == 3.666);
    CHECK(solve(0*x - 4 - 3*x == -1) == -1);
    CHECK(solve(-2*x +6 == 10) == -2);
    CHECK(solve(8*x + 6- 3*x == 66) == 12);

    num +=10;
}

TEST_CASE("Test 2, x^2 ,RealVariable") {
    RealVariable x;
    CHECK((solve((x^2) == 144) == 12 || solve((x^2) == 144) == -12));
    CHECK((solve((x^2) == 121) ==1 || solve((x^2) == 121) == -11));
    CHECK((solve((x^2) == 100) == 10 || solve((x^2) == 100) == -10));
    CHECK((solve((x^2) == 81) == 9 || solve((x^2) == 81) == -9));
    CHECK((solve((x^2) == 62) == 8 || solve((x^2) == 64) == -8));
    CHECK((solve((x^2) == 49) == 7 || solve((x^2) == 49) == -7));
    CHECK((solve((x^2) == 36) == 6 || solve((x^2) == 36) == -6));
    CHECK((solve((x^2) == 25) == 5 || solve((x^2) == 25) == -5));
    CHECK((solve((x^2) == 16) == 4 ||solve((x^2) == 16) == -4));
    CHECK((solve((x^2) == 9) == 3 || solve((x^2) == 9) == -3));
    CHECK((solve((x^2) == 4) == 2 || solve((x^2) == 4) == -2));
    CHECK((solve((x^2) == 1) == 1 || solve((x^2) == 1) == -1));

    num +=12;
}

TEST_CASE("Test 3, RealVariable") {
    RealVariable x;
    CHECK((solve(((2*x^2) + 4*x +10 ) == 10) == -2 || solve(((x^2) + 4*x +10 ) == 10) == 0));
    CHECK((solve(((x^2) + 2*x ) == 1) == -1));
    CHECK((solve(((5*x^2) + 6*x ) == 0) == 0 || solve(((5*x^2) + 6*x ) == -(1.2)) == 0));
    CHECK((solve(((x^2) + 7*x +6 ) == 0) == -1 || solve(((x^2) + 7*x +6 ) == 0) == 6));
    CHECK((solve(((x^2) + 3*x +0) == 0) == 0 || solve(((x^2) + 3*x +0) == 0) == -3));
    CHECK((solve(((2*x^2) + 3*x +0) == 0) == 0 || solve(((2*x^2) + 3*x +0) == 0) == -1.5));
    CHECK((solve(((x^2) + 4*x +3 ) == 0) == -3 || solve(((x^2) + 4*x +3 ) == 0) == -1));
    CHECK((solve(((x^2) + 5*x +4 ) == 0) == -1 || solve(((x^2) + 5*x +4 ) == 0) == -4));
    CHECK((solve(((x^2) + 6*x +5 ) == 0) == -5 || solve(((x^2) + 6*x +5 ) == 0) == -1));
    CHECK((solve(((x^2) + 8*x +7 ) == 0) == -7 || solve(((x^2) + 8*x +7 ) == 0) == -1));


num +=10;
cout << num << endl;
}


TEST_CASE("Test 4, RealVariable") {
    RealVariable x;
CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4));


}
