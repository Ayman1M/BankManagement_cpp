//
// Created by ayman on 5/18/25.
//

#ifndef PATHES_H
#define PATHES_H

#include "header.h"

class FilesReader {
    public:
        vector<string> lines;
        vector<string> words;
        long word_count;
        long line_count ;
    private:
        string path_file; fstream file;
        vector<string> read_file_by_line();
        vector<string> read_file_by_word();
    public:
       explicit FilesReader(const string path );
       //
        ~FilesReader() {}
};



#endif //PATHES_H
