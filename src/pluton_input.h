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

    // Check if input starts with 'search'
    int find_search = input.rfind("search ", 0);
    int find_search_for = input.rfind("search for ", 0);

    // Convert std::string to lowercase
    std::transform(input.begin(), input.end(), input.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    // Check Responses
    if (input == "hi" or input == "hello" or input == "yo" or input == "hi pluton" or input == "hello pluton" or input == "yo pluton") {
        return "Hello, there!";
    } else if (input == "bye") {
        return "Bye!";
    } else if (find_search_for == 0) {
        // Remove 'search for' from input
        input.replace(find_search_for, 11, "");

        return search_google(input);
    } else if (find_search == 0) {
        // Remove 'search' from input
        input.replace(find_search, 7, "");

        return search_google(input);
    } else {
        return random_output();
    }
}

#endif //PLUTON_INPUT_H
