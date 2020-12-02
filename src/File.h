//
// Created by btnt51 on 11/30/2020.
//

#ifndef INC_8SEMLAP_FILE_H
#define INC_8SEMLAP_FILE_H
#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <iomanip>

class CFile {

public:
    CFile();
    ~CFile();
    void Menu();
    void FillTheArray();
    void FillTheFile();

private:
    int Array[100]{};
};


#endif //INC_8SEMLAP_FILE_H
