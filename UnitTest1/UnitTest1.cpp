﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1 it C/Lab 8.1 it C.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(FindCharTest)
        {
            char str[12] = "1+2-4+5=67";
            int result = FindChar(str);
            Assert::AreEqual(result, 4);
        }
    };
}