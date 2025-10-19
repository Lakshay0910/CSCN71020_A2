#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2Tests
{
    TEST_CLASS(RectangleTests)
    {
    public:

        TEST_METHOD(Test_GetPerimeter_NormalValues)
        {
            int l = 10, w = 5;
            int result = getPerimeter(&l, &w);
            Assert::AreEqual(30, result);
        }

        TEST_METHOD(Test_GetArea_NormalValues)
        {
            int l = 10, w = 5;
            int result = getArea(&l, &w);
            Assert::AreEqual(50, result);
        }

      

                // --- setLength tests ---
                TEST_METHOD(SetLength_NormalValue)
                {
                    int length = 0;
                    setLength(25, &length);
                    Assert::AreEqual(25, length);
                }

                TEST_METHOD(SetLength_MinBoundary)
                {
                    int length = 0;
                    setLength(1, &length);
                    Assert::AreEqual(1, length);
                }

                TEST_METHOD(SetLength_InvalidBelowRange)
                {
                    int length = 10;
                    setLength(0, &length);
                    Assert::AreEqual(10, length);  // assumes invalid ignored
                }

                // --- setWidth tests ---
                TEST_METHOD(SetWidth_NormalValue)
                {
                    int width = 0;
                    setWidth(50, &width);
                    Assert::AreEqual(50, width);
                }

                TEST_METHOD(SetWidth_MaxBoundary)
                {
                    int width = 0;
                    setWidth(99, &width);
                    Assert::AreEqual(99, width);
                }

                TEST_METHOD(SetWidth_InvalidAboveRange)
                {
                    int width = 20;
                    setWidth(120, &width);
                    Assert::AreEqual(20, width);   
                }
            };
        }


