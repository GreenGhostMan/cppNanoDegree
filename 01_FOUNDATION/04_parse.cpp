#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

void PrintVector(std::vector<int> line);
std::vector<std::vector<int>> ReadBoardFile(std::string path);
std::vector<int> ParseLine(std::string str);

int main()
{
    std::string path("board.board");
    std::vector<std::vector<int>> board;
    board = ReadBoardFile(path);
    for(auto item: board)
    {
        PrintVector(item);
    }
    return 0;
}
void PrintVector(std::vector<int> line)
{
    std::cout<<"{";
    for(auto item: line)
    {
        std::cout<< item << ",";
    }
    std::cout<<"}"<<std::endl;
}
std::vector<int> ParseLine(std::string line)
{
    std::istringstream ist(line);
    int n;
    char c;
    std::vector<int> row;
    while(ist >> n >> c)
    {
        row.push_back(n);        
    }
    return row;
}
std::vector<std::vector<int>> ReadBoardFile(std::string path)
{
    std::ifstream myFile(path);
    std::string str_;
    std::vector<std::vector<int>> grid;
    if(myFile)
    {
        while(getline(myFile,str_))
        {
            std::vector<int> test_vector;
            test_vector = ParseLine(str_);
            //PrintVector(test_vector);
            grid.push_back(test_vector);                    
        }
    }
    else{
        std::cout<<"Error"<<std::endl;
    }
    return grid;
}