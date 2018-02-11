/**
 * @file    Game.h
 * @ingroup SdlMan
 * @brief   Test project for SDL C++ development with CMake and Google Test.
 *
 * Copyright (c) 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#pragma once

struct SDL_Window;

/// Game Application
class Game {
public:
    Game();
    ~Game();

    /// Game state
    enum class State : char {
        Menu = 'M',
        Running = 'R',
        Paused = 'P',
        Win = 'W',
        Lost = 'W',
    };

    /// Is the game state in one of the running states (so that the main loop can continue)
    bool IsRunning();

    /// Handle input events
    void handleEvents();
    /// Update entities and game state
    void update();
    /// Render world level and entities
    void render();

private:
    SDL_Window* mpWindow = nullptr; ///< The type used to identify a window

    State mState = State::Menu; ///< Game state
};
