/*
    B.hpp

    Declaration file for class B

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#ifndef INCLUDED_B_HPP
#define INCLUDED_B_HPP

#include "A.hpp"
#include <string>

class B : public A {
public:

    virtual std::string m3() const;

    std::string m1() const;

    std::string m2() const;
};

#endif
