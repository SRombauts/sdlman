/**
 * @file    Main.cpp
 * @ingroup SdlMan
 * @brief   Test project for SDL C++ development with CMake and Google Test.
 *
 * Copyright (c) 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#include "gtest/gtest.h"

/// Test Google test!
TEST(GoogleTest, expectEq) {
    EXPECT_EQ(1, 1);
}
