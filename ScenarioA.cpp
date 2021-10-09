/*
    ScenarioA.cpp

    Investigation of virtual methods and overriding
*/

#include "A.hpp"
#include "AUtilities.hpp"

#include <cassert>

// ensure assert() is not turned off
#ifdef NDEBUG
static_assert(false, "NDEBUG cannot be defined");
#endif

int main() {

    A a;

    assert(a.m0() == "A::m0()");
    assert(a.m1() == "A::m1()");
    assert(a.m2() == "A::m2()");
    assert(a.m3() == "A::m3()");

    assert(AUtilities::m0Value(a) == "A::m0()");
    assert(AUtilities::m1Value(a) == "A::m1()");
    assert(AUtilities::m2Value(a) == "A::m2()");
    assert(AUtilities::m3Value(a) == "A::m3()");

    A* pa = &a;

    assert(pa->m0() == "A::m0()");
    assert(pa->m1() == "A::m1()");
    assert(pa->m2() == "A::m2()");
    assert(pa->m3() == "A::m3()");

    assert(AUtilities::m0Ptr(&a) == "A::m0()");
    assert(AUtilities::m1Ptr(&a) == "A::m1()");
    assert(AUtilities::m2Ptr(&a) == "A::m2()");
    assert(AUtilities::m3Ptr(&a) == "A::m3()");

    A& ra = a;

    assert(ra.m0() == "A::m0()");
    assert(ra.m1() == "A::m1()");
    assert(ra.m2() == "A::m2()");
    assert(ra.m3() == "A::m3()");

    assert(AUtilities::m0Ref(a) == "A::m0()");
    assert(AUtilities::m1Ref(a) == "A::m1()");
    assert(AUtilities::m2Ref(a) == "A::m2()");
    assert(AUtilities::m3Ref(a) == "A::m3()");

    return 0;
}
