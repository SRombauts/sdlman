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
#include "Game.h"

#include <SDL.h>

#include <iostream>

/// Entry point of the application
int main(int argc, char *argv[]) {
    (void)argc; (void)argv;

    std::cout << "Hello World!\n";

    Game game;

    // Game loop
    while (game.IsRunning()) {
        game.handleEvents();
        game.update();
        game.render();
    }

    std::cout << "Bye!\n";

    return 0;
}
