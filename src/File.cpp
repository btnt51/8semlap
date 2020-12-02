//
// Created by btnt51 on 11/30/2020.
//


#include "File.h"

CFile::CFile()
{

}

CFile::~CFile()
{

}

void CFile::Menu()
{
    FillTheArray();
    FillTheFile();
    std::cout << "An array of random numbers in the range from -50 to 50 is written to the file." << std::endl;
}

void CFile::FillTheArray()
{
    std::mt19937 gen(time(nullptr));
    std::uniform_int_distribution<int> uid(-50,50);
    for(int & i : Array)
        i = uid(gen);
}

void CFile::FillTheFile()
{
    int *first{(std::find_if(Array, Array + 100, [](int x) { return x % 2 != 0; }))};
    int CopyArray[100] = {};
    for(int i = 0; i < 100; i++)
    {
        CopyArray[i] = Array[i] + abs(*first);
    }
    for(int i = 0; i < 100; i++)
        std::cout << Array[i] << "|" << CopyArray[i] << std::endl;
    std::ofstream File("output.txt");
    if(File)
    {
        for(int &i : CopyArray)
        {
            File << i << "\n";
        }
    }
}
