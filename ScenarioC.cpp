/*
    ScenarioC.cpp

    Investigation of virtual methods and overriding
*/

#include "A.hpp"
#include "AUtilities.hpp"
#include "B.hpp"
#include "BUtilities.hpp"
#include "C.hpp"
#include "CUtilities.hpp"

#include <string>
#include <cassert>

// ensure assert() is not turned off
#ifdef NDEBUG
static_assert(false, "NDEBUG cannot be defined");
#endif

int main() {

    C c;

    assert(c.m0() == "A::m0()");
    assert(c.m1() == "C::m1()");
    assert(c.m2() == "C::m2()");
    assert(c.m3() == "C::m3()");

    assert(AUtilities::m0Value(c) == "A::m0()");
    assert(AUtilities::m1Value(c) == "A::m1()");
    assert(AUtilities::m2Value(c) == "A::m2()");
    assert(AUtilities::m3Value(c) == "A::m3()");

    assert(BUtilities::m0Value(c) == "A::m0()");
    assert(BUtilities::m1Value(c) == "B::m1()");
    assert(BUtilities::m2Value(c) == "B::m2()");
    assert(BUtilities::m3Value(c) == "B::m3()");

    A* pa = &c;

    assert(pa->m0() == "A::m0()");
    assert(pa->m1() == "A::m1()");
    assert(pa->m2() == "C::m2()");
    assert(pa->m3() == "A::m3()");

    assert(AUtilities::m0Ptr(&c) == "A::m0()");
    assert(AUtilities::m1Ptr(&c) == "A::m1()");
    assert(AUtilities::m2Ptr(&c) == "C::m2()");
    assert(AUtilities::m3Ptr(&c) == "A::m3()");

    A& ra = c;

    assert(ra.m0() == "A::m0()");
    assert(ra.m1() == "A::m1()");
    assert(ra.m2() == "C::m2()");
    assert(ra.m3() == "A::m3()");

    assert(AUtilities::m0Ref(c) == "A::m0()");
    assert(AUtilities::m1Ref(c) == "A::m1()");
    assert(AUtilities::m2Ref(c) == "C::m2()");
    assert(AUtilities::m3Ref(c) == "A::m3()");

    B* pb = &c;

    assert(pb->m0() == "A::m0()");
    assert(pb->m1() == "B::m1()");
    assert(pb->m2() == "C::m2()");
    assert(pb->m3() == "C::m3()");

    assert(BUtilities::m0Ptr(&c) == "A::m0()");
    assert(BUtilities::m1Ptr(&c) == "B::m1()");
    assert(BUtilities::m2Ptr(&c) == "C::m2()");
    assert(BUtilities::m3Ptr(&c) == "C::m3()");

    B& rb = c;

    assert(rb.m0() == "A::m0()");
    assert(rb.m1() == "B::m1()");
    assert(rb.m2() == "C::m2()");
    assert(rb.m3() == "C::m3()");

    assert(BUtilities::m0Ref(c) == "A::m0()");
    assert(BUtilities::m1Ref(c) == "B::m1()");
    assert(BUtilities::m2Ref(c) == "C::m2()");
    assert(BUtilities::m3Ref(c) == "C::m3()");

    C* pc = &c;

    assert(pc->m0() == "A::m0()");
    assert(pc->m1() == "C::m1()");
    assert(pc->m2() == "C::m2()");
    assert(pc->m3() == "C::m3()");

    assert(BUtilities::m0Ptr(&c) == "A::m0()");
    assert(BUtilities::m1Ptr(&c) == "B::m1()");
    assert(BUtilities::m2Ptr(&c) == "C::m2()");
    assert(BUtilities::m3Ptr(&c) == "C::m3()");

    C& rc = c;

    assert(rc.m0() == "A::m0()");
    assert(rc.m1() == "C::m1()");
    assert(rc.m2() == "C::m2()");
    assert(rc.m3() == "C::m3()");

    assert(BUtilities::m0Ref(c) == "A::m0()");
    assert(BUtilities::m1Ref(c) == "B::m1()");
    assert(BUtilities::m2Ref(c) == "C::m2()");
    assert(BUtilities::m3Ref(c) == "C::m3()");

    return 0;
}
