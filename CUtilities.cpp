/*
    CUtilities.cpp

    Utilities using class C

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#include "CUtilities.hpp"

std::string CUtilities::m0Value(C a) {
    return a.m0();
}

std::string CUtilities::m1Value(C a) {
    return a.m1();
}

std::string CUtilities::m2Value(C a) {
    return a.m2();
}

std::string CUtilities::m3Value(C a) {
    return a.m3();
}

std::string CUtilities::m0Ptr(C* pa) {
    return pa->m0();
}

std::string CUtilities::m1Ptr(C* pa) {
    return pa->m1();
}

std::string CUtilities::m2Ptr(C* pa) {
    return pa->m2();
}

std::string CUtilities::m3Ptr(C* pa) {
    return pa->m3();
}

std::string CUtilities::m0Ref(C& a) {
    return a.m0();
}

std::string CUtilities::m1Ref(C& a) {
    return a.m1();
}

std::string CUtilities::m2Ref(C& a) {
    return a.m2();
}

std::string CUtilities::m3Ref(C& a) {
    return a.m3();
}
