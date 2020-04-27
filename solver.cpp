#include "solver.hpp"


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

bool RealVariable :: operator== (RealVariable x)
{
    return true;
}
bool   RealVariable :: operator== (int x)
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

bool   ComplexVariable ::operator== (ComplexVariable x)
{
    return true;

}
bool  ComplexVariable :: operator== (int x)
{
    return true;
}

double solver:: solve(bool x)
{
    return 2;
}

