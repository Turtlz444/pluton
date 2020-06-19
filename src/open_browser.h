/*
    Pluton - Copyright (c) SimpleBinary 2020
*/

#ifndef OPEN_BROWSER_H
#define OPEN_BROWSER_H

#include <cstdlib>

char remove_spaces(char c) {
    if (c == ' ') {
        return '+';
    }

    return c;
}

std::string search_google(std::string url, std::string prefix = "https://google.com/search?q=") {
    std::string fixed_url;

    std::transform(url.begin(), url.end(), url.begin(),
                   [](unsigned char c){ return remove_spaces(c); });


    #ifdef __unix__
        try {
            std::system(std::string("firefox " + prefix + url).c_str() + url);
        } throw {
            std::system(std::string("chromium " + prefix + url).c_str());
        } throw {
            std::system(std::string("chrome " + prefix + url).c_str());
        } catch {
            std::cout << url << std::endl;
        }
    #else
        std::system(std::string("start " + prefix + url).c_str());
    #endif

    return "";
}

#endif //OPEN_BROWSER_H
