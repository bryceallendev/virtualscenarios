/*
    C.hpp

    Declaration file for class C

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#ifndef INCLUDED_C_HPP
#define INCLUDED_C_HPP

#include "B.hpp"
#include <string>

class C : public B {
public:

    std::string m1() const;

    std::string m3() const;

    std::string m2() const;
};

#endif
