#include <iostream>
#include <vector>
#include <fstream>
int main()
{
    std::ofstream file("board.board");
    std::vector<std::vector<int>> board={   {0,0,0,0,1,1,1,1},
                                            {0,0,0,0,0,1,1,1},
                                            {1,1,0,1,1,0,0,0},
                                            {1,0,0,0,0,0,0,0}
                                        };
    for(size_t i=0;i<board.size();i++)
    {
        for(int j=0;j<board[0].size(); j++)
        {
            file<<board[i][j]<<",";
        }file<<"\n";  
    }
    file.close();
    return 0;
}