/*
    ScenarioB.cpp

    Investigation of virtual methods and overriding
*/

#include "A.hpp"
#include "AUtilities.hpp"
#include "B.hpp"
#include "BUtilities.hpp"

#include <string>
#include <cassert>

// ensure assert() is not turned off
#ifdef NDEBUG
static_assert(false, "NDEBUG cannot be defined");
#endif

int main() {

    B b;

    assert(b.m0() == "A::m0()");
    assert(b.m1() == "B::m1()");
    assert(b.m2() == "B::m2()");
    assert(b.m3() == "B::m3()");

    assert(AUtilities::m0Value(b) == "A::m0()");
    assert(AUtilities::m1Value(b) == "A::m1()");
    assert(AUtilities::m2Value(b) == "A::m2()");
    assert(AUtilities::m3Value(b) == "A::m3()");

    assert(BUtilities::m0Value(b) == "A::m0()");
    assert(BUtilities::m1Value(b) == "B::m1()");
    assert(BUtilities::m2Value(b) == "B::m2()");
    assert(BUtilities::m3Value(b) == "B::m3()");

    A* pa = &b;

    assert(pa->m0() == "A::m0()");
    assert(pa->m1() == "A::m1()");
    assert(pa->m2() == "B::m2()");
    assert(pa->m3() == "A::m3()");

    assert(AUtilities::m0Ptr(&b) == "A::m0()");
    assert(AUtilities::m1Ptr(&b) == "A::m1()");
    assert(AUtilities::m2Ptr(&b) == "B::m2()");
    assert(AUtilities::m3Ptr(&b) == "A::m3()");

    A& ra = b;

    assert(ra.m0() == "A::m0()");
    assert(ra.m1() == "A::m1()");
    assert(ra.m2() == "B::m2()");
    assert(ra.m3() == "A::m3()");

    assert(AUtilities::m0Ref(b) == "A::m0()");
    assert(AUtilities::m1Ref(b) == "A::m1()");
    assert(AUtilities::m2Ref(b) == "B::m2()");
    assert(AUtilities::m3Ref(b) == "A::m3()");

    B* pb = &b;

    assert(pb->m0() == "A::m0()");
    assert(pb->m1() == "B::m1()");
    assert(pb->m2() == "B::m2()");
    assert(pb->m3() == "B::m3()");

    assert(BUtilities::m0Ptr(&b) == "A::m0()");
    assert(BUtilities::m1Ptr(&b) == "B::m1()");
    assert(BUtilities::m2Ptr(&b) == "B::m2()");
    assert(BUtilities::m3Ptr(&b) == "B::m3()");

    B& rb = b;

    assert(rb.m0() == "A::m0()");
    assert(rb.m1() == "B::m1()");
    assert(rb.m2() == "B::m2()");
    assert(rb.m3() == "B::m3()");

    assert(BUtilities::m0Ref(b) == "A::m0()");
    assert(BUtilities::m1Ref(b) == "B::m1()");
    assert(BUtilities::m2Ref(b) == "B::m2()");
    assert(BUtilities::m3Ref(b) == "B::m3()");

    return 0;
}
