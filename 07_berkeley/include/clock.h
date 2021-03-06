#pragma once

#include <iostream>
#include <chrono>

#include "timeutils.h"

class Clock {
    public:
        Clock(std::string name);

        void operator()();

    private:
        std::string name;
        std::chrono::time_point<std::chrono::system_clock> curr_time;
};