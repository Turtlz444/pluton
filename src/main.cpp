/*
    Pluton - Copyright (c) SimpleBinary 2020
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <chrono>
#include "search_data.h"

int main() {
    std::string user_input;
    std::getline(std::cin, user_input);

    std::cout << ai_response(user_input) << std::endl;

    return 0;
}
