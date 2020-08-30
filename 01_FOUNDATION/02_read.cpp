#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void ReadBoardFile(std::string path);

int main()
{
    std::string path("board.board");
    ReadBoardFile(path);

    return 0;

}
void ReadBoardFile(std::string path)
{
    std::ifstream myFile(path);
    std::string str_;
    if(myFile)
    {
        while(getline(myFile,str_))
        {
            std::cout<<str_<<std::endl;
        }
    }
    else{
        std::cout<<"Error"<<std::endl;
    }
}