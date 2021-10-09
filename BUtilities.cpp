/*
    BUtilities.cpp

    Utilities using class B

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#include "BUtilities.hpp"

std::string BUtilities::m0Value(B a) {
    return a.m0();
}

std::string BUtilities::m1Value(B a) {
    return a.m1();
}

std::string BUtilities::m2Value(B a) {
    return a.m2();
}

std::string BUtilities::m3Value(B a) {
    return a.m3();
}

std::string BUtilities::m0Ptr(B* pa) {
    return pa->m0();
}

std::string BUtilities::m1Ptr(B* pa) {
    return pa->m1();
}

std::string BUtilities::m2Ptr(B* pa) {
    return pa->m2();
}

std::string BUtilities::m3Ptr(B* pa) {
    return pa->m3();
}

std::string BUtilities::m0Ref(B& a) {
    return a.m0();
}

std::string BUtilities::m1Ref(B& a) {
    return a.m1();
}

std::string BUtilities::m2Ref(B& a) {
    return a.m2();
}

std::string BUtilities::m3Ref(B& a) {
    return a.m3();
}
