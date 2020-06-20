/*
    Pluton - Copyright (c) SimpleBinary 2020
*/

#ifndef SEARCH_DATA_H
#define SEARCH_DATA_H

std::string ai_response(std::string& user_input) {
    std::vector<std::string> possible_responses;
    std::string line_content;
    int current_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    int found_match = 0;
    std::string data_type;

    for (int file = 0; file <= 11; file++) {
        std::ifstream data_file("../../data/" + std::to_string(file) + ".txt");

        for (int i = 0; getline(data_file, line_content); i++) {
            if (i == 0 and user_input == line_content) {
                found_match = 1;
            } else if (i == 1 and found_match) {
                if (line_content.rfind("time ", 0) == 0) {
                    if (current_time - (current_time % 86400) >= 0 and (current_time - current_time % 86400) < 43200)
                }
                data_type = line_content;
            } else if (found_match){
                possible_responses.push_back(line_content);
            }
        }

        data_file.close();
    }

    for (auto & possible_response : possible_responses) {
        std::cout << possible_response << std::endl;
    }
    return possible_responses[0];
}

#endif //SEARCH_DATA_H
