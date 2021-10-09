/*
    CUtilities.hpp

    Utilities using class C

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#ifndef INCLUDED_CUTILITY_HPP
#define INCLUDED_CUTILITY_HPP

#include "C.hpp"
#include <string>

class CUtilities {
public:

    static std::string m0Value(C a);

    static std::string m1Value(C a);

    static std::string m2Value(C a);

    static std::string m3Value(C a);

    static std::string m0Ptr(C* pa);

    static std::string m1Ptr(C* pa);

    static std::string m2Ptr(C* pa);

    static std::string m3Ptr(C* pa);

    static std::string m0Ref(C& a);

    static std::string m1Ref(C& a);

    static std::string m2Ref(C& a);

    static std::string m3Ref(C& a);
};

#endif
