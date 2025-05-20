//
// Created by ayman on 5/18/25.
//

#include "../lib_h/FilesReader.h"

FilesReader::FilesReader(const string path) {
    this->path_file = path;
    lines = read_file_by_line();
    line_count = lines.size()+1;
    words = read_file_by_word();
    word_count = words.size()+1;
}

vector<string> FilesReader::read_file_by_line() {
    vector<string> lines;
    string line ="";
    try {
        file.open(path_file, ios::in);
    }catch (const std::exception& e) {
        cout<<"you need fo check "<<path_file<<" file"<<endl;
    }
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
   try {
       file.open(path_file, ios::in);
   }catch (const std::exception& e) {
       cout<<"you need fo check "<<path_file<<" file"<<endl;
   }
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