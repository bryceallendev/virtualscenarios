/*
    AUtilities.cpp

    Utilities using class A

    Note: The code violates the coding style for names and comments
    to focus on a programming language concept. Do not use this
    style as a guide for actual code.
*/

#include "AUtilities.hpp"

std::string AUtilities::m0Value(A a) {
    return a.m0();
}

std::string AUtilities::m1Value(A a) {
    return a.m1();
}

std::string AUtilities::m2Value(A a) {
    return a.m2();
}

std::string AUtilities::m3Value(A a) {
    return a.m3();
}

std::string AUtilities::m0Ptr(A* pa) {
    return pa->m0();
}

std::string AUtilities::m1Ptr(A* pa) {
    return pa->m1();
}

std::string AUtilities::m2Ptr(A* pa) {
    return pa->m2();
}

std::string AUtilities::m3Ptr(A* pa) {
    return pa->m3();
}

std::string AUtilities::m0Ref(A& a) {
    return a.m0();
}

std::string AUtilities::m1Ref(A& a) {
    return a.m1();
}

std::string AUtilities::m2Ref(A& a) {
    return a.m2();
}

std::string AUtilities::m3Ref(A& a) {
    return a.m3();
}
