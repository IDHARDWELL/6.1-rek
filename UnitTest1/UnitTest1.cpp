#include "pch.h"
#include "CppUnitTest.h"
#include "../FileName.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int n = 4;
            int t[n] = { 1, 3, 5, 7 };
            int sum = Sum(t, n, 0);
            Assert::AreEqual(sum, 16);
        }
    };
}
