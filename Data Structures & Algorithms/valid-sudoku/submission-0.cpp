class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /* 9x9 Sudoku board */
        for (int i = 0; i < 9; ++i)
        {
            std::unordered_set<char> boardrow;
            int rowsize = 0;
            for (int j = 0; j < 9; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    boardrow.insert(board[i][j]);
                    ++rowsize;

                }
            }
            if (boardrow.size() != rowsize)
            {
                return false;
            }
        }
        for (int i = 0; i < 9; ++i)
        {
            std::unordered_set<char> boardcol;
            int colsize = 0;
            for (int j = 0; j < 9; ++j)
            {
                if (std::isdigit(board[j][i]))
                {
                    boardcol.insert(board[j][i]);
                    ++colsize;
                }
            }
            if (boardcol.size() != colsize)
            {
                return false;
            }
        }
        // Box 1
        std::unordered_set<char> box1;
        int box1size = 0;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    //std::cout << board[i][j] << "\n";
                    box1.insert(board[i][j]);
                    ++box1size;
                }
            }
            //std::cout << box1.size();
            //std::cout << box1size;
        }
        if (box1.size() != box1size)
        {
            return false;
        }
        
        std::unordered_set<char> box2;
        int box2size = 0;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 3; j < 6; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    box2.insert(board[i][j]);
                    ++box2size;
                }
            }
            
        }
        if (box2.size() != box2size)
            {
                return false;
            } 

        std::unordered_set<char> b3;
        int b3s = 0;
        for (int i = 0; i < 3; ++i)
        {
            
            for (int j = 6; j < 9; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b3.insert(board[i][j]);
                    ++b3s;
                }
            }
            
        }
        if (b3.size() != b3s)
            {
                return false;
            } 

        std::unordered_set<char> b4;
        int b4s = 0;
        for (int i = 3; i < 6; ++i)
        {

            for (int j = 0; j < 3; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b4.insert(board[i][j]);
                    ++b4s;
                }
            }

        }
        if (b4.size() != b4s)
        {
            return false;
        } 


        std::unordered_set<char> b5;
        int b5s = 0;
        for (int i = 3; i < 6; ++i)
        {

            for (int j = 3; j < 6; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b5.insert(board[i][j]);
                    ++b5s;
                }
            }
            
        }
        if (b5.size() != b5s)
            {
                return false;
            } 


        std::unordered_set<char> b6;
        int b6s = 0;
        for (int i = 6; i < 9; ++i)
        {

            for (int j = 3; j < 6; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b6.insert(board[i][j]);
                    ++b6s;
                }
            }
            
        }
        if (b6.size() != b6s)
        {
            return false;
        } 


        std::unordered_set<char> b7;
        int b7s = 0;
        for (int i = 6; i < 9; ++i)
        {

            for (int j = 0; j < 3; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b7.insert(board[i][j]);
                    ++b7s;
                }
            }
           
        }
        if (b7.size() != b7s)
        {
            return false;
        } 


        std::unordered_set<char> b8;
        int b8s = 0;
        for (int i = 6; i < 9; ++i)
        {
            for (int j = 3; j < 6; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b8.insert(board[i][j]);
                    ++b8s;
                }
            }
        }
        if (b8.size() != b8s)
        {
            return false;
        } 

        std::unordered_set<char> b9;
        int b9s = 0;
        for (int i = 6; i < 9; ++i)
        {

            for (int j = 6; j < 9; ++j)
            {
                if (std::isdigit(board[i][j]))
                {
                    b9.insert(board[i][j]);
                    ++b9s;
                }
            }
           
        }
        if (b9.size() != b9s)
        {
            return false;
        } 
        return true;
    }
};
