/*
    AUtilities.hpp

    Utilities using class A

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#ifndef INCLUDED_AUTILITY_HPP
#define INCLUDED_AUTILITY_HPP

#include "A.hpp"
#include <string>

class AUtilities {
public:

    static std::string m0Value(A a);

    static std::string m1Value(A a);

    static std::string m2Value(A a);

    static std::string m3Value(A a);

    static std::string m0Ptr(A* pa);

    static std::string m1Ptr(A* pa);

    static std::string m2Ptr(A* pa);

    static std::string m3Ptr(A* pa);

    static std::string m0Ref(A& a);

    static std::string m1Ref(A& a);

    static std::string m2Ref(A& a);

    static std::string m3Ref(A& a);
};

#endif
