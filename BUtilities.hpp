/*
    BUtilities.hpp

    Utilities using class B

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#ifndef INCLUDED_BUTILITY_HPP
#define INCLUDED_BUTILITY_HPP

#include "B.hpp"
#include <string>

class BUtilities {
public:

    static std::string m0Value(B a);

    static std::string m1Value(B a);

    static std::string m2Value(B a);

    static std::string m3Value(B a);

    static std::string m0Ptr(B* pa);

    static std::string m1Ptr(B* pa);

    static std::string m2Ptr(B* pa);

    static std::string m3Ptr(B* pa);

    static std::string m0Ref(B& a);

    static std::string m1Ref(B& a);

    static std::string m2Ref(B& a);

    static std::string m3Ref(B& a);
};

#endif
