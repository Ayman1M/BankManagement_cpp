//
// Created by ayman on 5/18/25.
//

#include "../lib_h/FilesReader.h"

FilesReader::FilesReader(const string path) {
    this->path_file = path;
    lines = read_file_by_line();
    line_count = lines.size();
    words = read_file_by_word();
    word_count = words.size();
}

vector<string> FilesReader::read_file_by_line() {
    vector<string> lines;
    string line ="";
    file.open(path_file, ios::in);
    if (file.is_open()) {
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }
    return lines;
}
vector<string> FilesReader::read_file_by_word() {
    vector<string> words;
    string word = "";
    file.open(path_file, ios::in);
    if (file.is_open()) {
        while (file >> word) {
            words.push_back(word);
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }
    return words;
}