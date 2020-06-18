/*
    Pluton - Copyright (c) SimpleBinary 2020
*/

#ifndef OPEN_BROWSER_H
#define OPEN_BROWSER_H

#include <cstdlib>

std::string search_google(std::string url) {
    #ifdef __unix__
        try {
            std::system(std::string("firefox https://google.com/search?q=" + url).c_str() + url);
        } throw {
            std::system(std::string("chromium https://google.com/search?q=" + url).c_str());
        } throw {
            std::system(std::string("chrome https://google.com/search?q=" + url).c_str());
        } catch {
            std::cout << url << std::endl;
        }
    #else
        std::system(std::string("start https://google.com/search?q=" + url).c_str());
    #endif

    return "";
}

#endif //OPEN_BROWSER_H
