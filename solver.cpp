#include "solver.hpp"
#include <complex>


using namespace solver;

// RealVariable :: RealVariable (double r)
// {
    
// }
RealVariable  RealVariable :: operator+ (RealVariable x)
{
    
    return x;
}

RealVariable  RealVariable :: operator+ (double x)
{
    RealVariable r;
    return r;
}

RealVariable solver ::  operator+ (int x, RealVariable y)
{
    RealVariable r;
    return r;
}

RealVariable  RealVariable ::operator- (int x)
{
    RealVariable r;
    return r;
}
RealVariable  RealVariable :: operator- (RealVariable x)
{
    RealVariable r;
    return r;
}

RealVariable solver ::  operator* (double x, RealVariable y )
{
    RealVariable r;
    return r;
}

RealVariable RealVariable :: operator^ (int x)
{
    RealVariable r;
    return r;
}

RealVariable RealVariable :: operator== (RealVariable x)
{
    return true;
}
RealVariable   RealVariable :: operator== (int x)
{
    return true;
}

RealVariable  RealVariable :: operator/ (int x)
{
    RealVariable r;
    return r;
}

ComplexVariable  solver :: operator* (int x, ComplexVariable y)
{
    ComplexVariable c;
    return c;
}


ComplexVariable ComplexVariable :: operator- (int x)
{
    ComplexVariable c;
    return c;
}

ComplexVariable ComplexVariable ::operator- (ComplexVariable x)
{
    ComplexVariable c;
    return c;
}

ComplexVariable ComplexVariable :: operator+ (ComplexVariable x)
{
    ComplexVariable c;
    return c;
}

ComplexVariable  ComplexVariable :: operator+ (complex<double> x)
{
    ComplexVariable c;
    return c;
}

ComplexVariable ComplexVariable ::operator+ (int x)
{
    ComplexVariable c;
    return c;
}

 ComplexVariable solver:: operator+ (int x, ComplexVariable y)
 {
    ComplexVariable c;
    return c;
 }

ComplexVariable  ComplexVariable ::operator/ (int x)
{
    ComplexVariable c;
    return c;
}

ComplexVariable  ComplexVariable :: operator^ (int x)
{
    ComplexVariable c;
    return c;
}

ComplexVariable   ComplexVariable ::operator== (ComplexVariable x)
{
    return true;

}
ComplexVariable  ComplexVariable :: operator== (int x)
{
    return true;
}

double solver:: solve(RealVariable x)
{
    return 2;
}

complex<double> solver:: solve(ComplexVariable x)
{
  return std:: complex <double>(2.2,4.0);
}

