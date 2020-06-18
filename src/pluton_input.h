/*
    Pluton - Copyright (c) SimpleBinary 2020
*/

#ifndef PLUTON_INPUT_H
#define PLUTON_INPUT_H

#include "pluton_response.h"
#include "open_browser.h"

std::string pluton_input() {
    // Get User Input
    std::string input;
    std::getline(std::cin, input);

    // Convert std::string to lowercase
    std::transform(input.begin(), input.end(), input.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    // Check Responses
    if (input == "hi" or input == "hello" or input == "yo" or input == "hi pluton" or input == "hello pluton" or input == "yo pluton") {
        return "Hello, there!";
    } else if (input == "bye") {
        return "Bye!";
    } else if (input == "search") {
        return search_google(input);
    } else {
        return random_output();
    }
}

#endif //PLUTON_INPUT_H
