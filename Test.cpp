#include "doctest.h"
#include <string>
#include <complex>
#include "solver.hpp"

using namespace solver;


using namespace std;


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

    CHECK_THROWS((solve(x/0 == 1)));
}

TEST_CASE("Test 2, x^2 ,RealVariable") {
    RealVariable x;
    CHECK((solve((x^2) == 144) == 12 || solve((x^2) == 144) == -12));
    CHECK((solve((x^2) == 121) ==1 || solve((x^2) == 121) == -11));
    CHECK((solve((x^2) == 100) == 10 || solve((x^2) == 100) == -10));
    CHECK((solve((x^2) == 81) == 9 || solve((x^2) == 81) == -9));
    CHECK((solve((x^2) == 64) == 8 || solve((x^2) == 64) == -8));
    CHECK((solve((x^2) == 49) == 7 || solve((x^2) == 49) == -7));
    CHECK((solve((x^2) == 36) == 6 || solve((x^2) == 36) == -6));
    CHECK((solve((x^2) == 25) == 5 || solve((x^2) == 25) == -5));
    CHECK((solve((x^2) == 16) == 4 ||solve((x^2) == 16) == -4));
    CHECK((solve((x^2) == 9) == 3 || solve((x^2) == 9) == -3));
    CHECK((solve((x^2) == 4) == 2 || solve((x^2) == 4) == -2));
    CHECK((solve((x^2) == 1) == 1 || solve((x^2) == 1) == -1));

    CHECK_THROWS(solve((x^2) == -1));
    CHECK_THROWS(solve((x^2) == -144));
    CHECK_THROWS(solve((x^2) == -121));
    CHECK_THROWS(solve((x^2) == -100));
    CHECK_THROWS(solve((x^2) == -81));
    CHECK_THROWS(solve((x^2) == -62));
    CHECK_THROWS(solve((x^2) == -49));
    CHECK_THROWS(solve((x^2) == -36));

}

TEST_CASE("Test 3, RealVariable") {
    RealVariable x;
    CHECK((solve(((2*x^2) + 4*x +10 ) == 10) == -2 || solve(((2*x^2) + 4*x +10 ) == 10) == 0));
    CHECK((solve(((x^2) + 2*x ) == 1) == -1));
    CHECK((solve(((5*x^2) + 6*x ) == 0) == 0 || solve(((5*x^2) + 6*x ) == -(1.2)) == 0));
    CHECK((solve(((x^2) + 7*x +6 ) == 0) == -1 || solve(((x^2) + 7*x +6 ) == 0) == 6));
    CHECK((solve(((x^2) + 3*x +0) == 0) == 0 || solve(((x^2) + 3*x +0) == 0) == -3));
    CHECK((solve(((2*x^2) + 3*x +0) == 0) == 0 || solve(((2*x^2) + 3*x +0) == 0) == -1.5));
    CHECK((solve(((x^2) + 4*x +3 ) == 0) == -3 || solve(((x^2) + 4*x +3 ) == 0) == -1));
    CHECK((solve(((x^2) + 5*x +4 ) == 0) == -1 || solve(((x^2) + 5*x +4 ) == 0) == -4));
    CHECK((solve(((x^2) + 6*x +5 ) == 0) == -5 || solve(((x^2) + 6*x +5 ) == 0) == -1));
    CHECK((solve(((x^2) + 8*x +7 ) == 0) == -7 || solve(((x^2) + 8*x +7 ) == 0) == -1));


    CHECK_THROWS(solve((x^2) == -5));
    CHECK_THROWS(solve((x^2) == -2));
    CHECK_THROWS(solve((x^2) == -10));
    CHECK_THROWS(solve((x^2) == -34));
    CHECK_THROWS(solve((x^2) == -55));
    CHECK_THROWS(solve((x^2) == -23));
    CHECK_THROWS(solve((x^2) == -12));
    CHECK_THROWS(solve((x^2) == -102));
    CHECK_THROWS(solve((x^2) == -122));
    CHECK_THROWS(solve((x^2) == -30));
    CHECK_THROWS(solve((x^2) == -3));
    CHECK_THROWS(solve((x^2) == -11));
    CHECK_THROWS(solve((x^2) == -6));
    CHECK_THROWS(solve((x^2) == -8));
    
}


TEST_CASE("Test 4, RealVariable") {
    RealVariable x;
    CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4));
    CHECK((solve(((2*x^2) + 5*x +10 ) == 10 + x) == -2 || solve(((2*x^2) + 5*x +10 ) == 10 + x) == 0));
    CHECK((solve(((x^2) + 4*x ) == 4*x/2 + 1) == -1));
    CHECK((solve(((5*x^2) + 10*x ) == 12*x/3) == 0 || solve(((5*x^2) + 10*x ) == 12*x/3) == -1.2));
    CHECK((solve(((3*x^2) + 7*x +6 ) == 2*x^2) == -1 || solve(((3*x^2) + 7*x +6 ) == 2*x^2) == 6));
    CHECK((solve(((2*x^2) + 5*x + 0) == (x^2) + 2*x) == 0 || solve(((2*x^2) + 5*x + 0) == (x^2) + 2*x) == -3));
    CHECK((solve(((2*x^2) + 5*x +0) == 6*x/3) == 0 || solve(((2*x^2) + 5*x +0) == 6*x/3) == -1.5));
    CHECK((solve(((4*x^2) + 10*x - 5 ) == (3*x^2) + 6*x - 8) == -3 || solve(((4*x^2) + 10*x - 5 ) == (3*x^2) + 6*x - 8) == -1));
    CHECK((solve(((x^2) + 6*x + 14 ) == 10 + 4.0*x/2 - x) == -1 || solve(((x^2) + 6*x + 14 ) == 10 + 4.0*x/2 - x) == -4));
    CHECK((solve(((x^2) + 0*x +5 ) == -9*x +3*x) == -5 || solve(((x^2) + 0*x +5 ) == -9*x +3*x) == -1));
    CHECK((solve(((x^2) + 9*x + 3 ) == 2*x/2 - 4) == -7 || solve(((x^2) + 9*x + 3 ) == 2*x/2 - 4) == -1));


}

TEST_CASE("Test 5, RealVariable") {
    RealVariable x;
    CHECK((solve((x^2) + 4*x == 144 + 4*x) == 12 || solve((x^2) + 4*x == 144 + 4*x) == -12));
    CHECK((solve((x^2)+ 3*x - 4 == 121 + 3*x - 4) ==1 || solve((x^2)+ 3*x - 4 == 121 + 3*x - 4) == -11));
    CHECK((solve((x^2) + x == 100 + x) == 10 || solve((x^2) + x == 100 + x) == -10));
    CHECK((solve((x^2) + 4*x/4 == 81 + x) == 9 || solve((x^2) + 4*x/4 == 81 + x) == -9));
    CHECK((solve((x^2) + 0*x== 64) == 8 || solve((x^2) + 0*x == 64) == -8));
    CHECK((solve((x^2) + 5 == 54) == 7 || solve((x^2) + 5 == 54) == -7));
    CHECK((solve((-1*x^2) + (2*x^2)== 36) == 6 || solve((-1*x^2) + (2*x^2) ==  36) == -6));
    CHECK((solve((x^2) -2 + 4*x== 23 +3*x + x) == 5 || solve((x^2) -2 + 4*x== 23 +3*x + x) == -5));
    CHECK((solve((x^2) + 6*x == 16 +12*x/2) == 4 ||solve((x^2) + 6*x == 16 +12*x/2) == -4));
    CHECK((solve((x^2) == 4 + 5) == 3 || solve((x^2) == 4 + 5) == -3));
    CHECK((solve((x^2) + x == 4 + 2*x/2) == 2 || solve((x^2) + x == 4 + 2*x/2) == -2));
    CHECK((solve((x^2) + 3*x == 1 + 3*x + 0) == 1 || solve((x^2) + 3*x == 1 + 3*x + 0) == -1));

}

TEST_CASE("Test 6, x^2, ComplexVariable") {
    ComplexVariable x;
    CHECK((solve((x^2) == -144) == complex<double>(0,12) || solve((x^2) == -144) == complex<double>(0,-12)));
    CHECK((solve((x^2) == -121) == complex<double>(0,-11)  || solve((x^2) == -121) == complex<double>(0,11)));
    CHECK((solve((x^2) == -100) ==  complex<double>(0,10) || solve((x^2) == -100) == complex<double>(0,-10)));
    CHECK((solve((x^2) == -81) ==  complex<double>(0,9) || solve((x^2) == -81) ==  complex<double>(0,-9)));
    CHECK((solve((x^2) == -64) ==  complex<double>(0,8) || solve((x^2) == -64) ==  complex<double>(0,-8)));
    CHECK((solve((x^2) == -49) ==  complex<double>(0,7) || solve((x^2) == -49) == complex<double>(0,-7)));
    CHECK((solve((x^2) == -36) ==  complex<double>(0,6)|| solve((x^2) == -36) ==  complex<double>(0,-6)));
    CHECK((solve((x^2) == -25) ==  complex<double>(0,5) || solve((x^2) == -25) ==  complex<double>(0,-5)));
    CHECK((solve((x^2) == -16) ==  complex<double>(0,4) ||solve((x^2) == -16) ==  complex<double>(0,-4)));
    CHECK((solve((x^2) == -9) ==  complex<double>(0,3) || solve((x^2) == -9) ==  complex<double>(0,-3)));
    CHECK((solve((x^2) == -4) ==  complex<double>(0,2) || solve((x^2) == -4) ==  complex<double>(0,-2)));
    CHECK((solve((x^2) == -1) ==  complex<double>(0,1) || solve((x^2) == -1) ==  complex<double>(0,-1)));

}

TEST_CASE("Test 7, complexVariable") {
    ComplexVariable x;
    CHECK((solve((x^2) + 4*x == -144 + 4*x) == complex<double>(0,12) || solve((x^2) + 4*x == -144 + 4*x) == complex<double>(0,-12)));
    CHECK((solve((x^2)+ 3*x - 4 == -121 + 3*x - 4) == complex<double>(0,11) || solve((x^2)+ 3*x - 4 == -121 + 3*x - 4) == complex<double>(0,-11)));
    CHECK((solve((x^2) + x == -100 + x) == complex<double>(0,10) || solve((x^2) + x == -100 + x) == complex<double>(0,-10)));
    CHECK((solve((x^2) + 4*x/4 == -81 + x) == complex<double>(0,9)|| solve((x^2) + 4*x/4 == -81 + x) == complex<double>(0,-9)));
    CHECK((solve((x^2) + 0*x== -64) == complex<double>(0,8) || solve((x^2) + 0*x == -64) == complex<double>(0,-8)));
    CHECK((solve((x^2) - 5 == -54) == complex<double>(0,7) || solve((x^2) - 5 == -54) == complex<double>(0,-7)));
    CHECK((solve((-1*x^2) + (2*x^2)== -36) == complex<double>(0,6) || solve((-1*x^2) + (2*x^2) ==  -36) == complex<double>(0,-6)));
    CHECK((solve((x^2) + 2 + 4*x== -23 +3*x + x) == complex<double>(0,5) || solve((x^2) + 2 + 4*x== -23 +3*x + x) == complex<double>(0,-5)));
    CHECK((solve((x^2) + 6*x == -16 +12*x/2) == complex<double>(0,4) ||solve((x^2) + 6*x == -16 +12*x/2) == complex<double>(0,-4)));
    CHECK((solve((x^2) == -4 - 5) == complex<double>(0,3) || solve((x^2) == -4 - 5) == complex<double>(0,-3)));
    CHECK((solve((x^2) + x == -4 + 2*x/2) == complex<double>(0,2) || solve((x^2) + x == -4 + 2*x/2) == complex<double>(0,-2)));
    CHECK((solve((x^2) + 3*x == -1 + 3*x + 0) == complex<double>(0,1) || solve((x^2) + 3*x == -1 + 3*x + 0) == complex<double>(0,-1)));

}
