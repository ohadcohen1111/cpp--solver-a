#include <iostream>
#include "complex.h"
#include <string>

using namespace std;

namespace solver {

    class RealVariable
    {
        private:
            double real;

        public:
        //constructor
           // RealVariable (double r);
        //operators   
            RealVariable operator+ (RealVariable x);
            RealVariable operator+ (double x);
            friend RealVariable operator+ (int x, RealVariable y);

            RealVariable operator- (int x);
            RealVariable operator- (RealVariable x);

            friend RealVariable operator* (double x, RealVariable y );

            RealVariable operator^ (int x);

            bool operator== (RealVariable x);
            bool operator== (int x);

            RealVariable operator/ (int x);

   

    };

     class ComplexVariable
    {
        private:
            double c_real;
            int c_image;

        public:
            // ComplexVariable operator* (int x);
            // ComplexVariable operator* (double x);
            friend ComplexVariable operator* (int x, ComplexVariable y);


            ComplexVariable operator- (int x);
            ComplexVariable operator- (ComplexVariable x);

            ComplexVariable operator+ (ComplexVariable x);
            ComplexVariable operator+ (complex<double> x);
            ComplexVariable operator+ (int x);
            friend ComplexVariable operator+ (int x, ComplexVariable y);

            ComplexVariable operator/ (int x);

            ComplexVariable operator^ (int x);

            // ComplexVariable operator() (int x);

            bool operator== (ComplexVariable x);
            bool operator== (int x);

            complex<double> solve(bool x);

    };


    double solve(bool x);

}