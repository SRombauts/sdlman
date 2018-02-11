/**
 * @file    Game.cpp
 * @ingroup SdlMan
 * @brief   Test project for SDL C++ development with CMake and Google Test.
 *
 * Copyright (c) 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#include "Game.h"

#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

#include <iostream>
#include <stdexcept>

Game::Game() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        throw std::runtime_error("SDL_Init() failed!");
    }
    if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
        throw std::runtime_error("IMG_Init(IMG_INIT_PNG) failed!");
    }
    if (TTF_Init() != 0) {
        throw std::runtime_error("TTF_Init() failed!");
    }
    if (Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 4096) == -1) {
        throw std::runtime_error("Mix_OpenAudio(22050, DEFAULT, 2, 4096) failed!");
    }
    mpWindow = SDL_CreateWindow("SdlMan", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    if (mpWindow == nullptr) {
        throw std::runtime_error("SDL_CreateWindow(CENTERED, 800, 600) failed!");
    }

    std::cout << "SDL_Init ok\n";
}

Game::~Game() {
    std::cout << "SDL_Quit...\n";

    if (mpWindow) {
        SDL_DestroyWindow(mpWindow);
    }

    Mix_CloseAudio();
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}

bool Game::IsRunning() {
    return (mState != State::Win) && (mState != State::Lost);
}

/// Handle input events
void Game::handleEvents() {
}
/// Update entities and game state
void Game::update() {
}
/// Render world level and entities
void Game::render() {
}

