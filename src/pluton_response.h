/*
    Pluton - Copyright (c) SimpleBinary 2020
*/

#ifndef PLUTON_RESPONSE_H
#define PLUTON_RESPONSE_H

#include <random>
#include <chrono>

std::string random_output() {
    static std::mt19937 mt(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()));
    std::uniform_int_distribution<int> dist(1, 15);

    switch (dist(mt)) {
        case 1: return "Yes";
        case 2: return "No";
        case 3: return "Maybe";
        case 4: return "Yessum";
        case 5: return "Nome";
        case 6: return "No way";
        case 7: return "Probably";
        case 8: return "True";
        case 9: return "False";
        case 10: return "You're so hosed";
        case 11: return "42";
        case 12: return "Epic";
        case 13: return "Probably";
        case 14: return "Sometimes";
        case 15: return "Meh";
        default: return "Failed";
    }
}

#endif //PLUTON_RESPONSE_H
