class Solution:
    def make_border(self,board,i,j,row,col):
        if i<0:
            return
        if j<0:
            return
        if i>=row:
            return
        if j>=col:
            return
        if board[i][j]=='O':
            board[i][j]='*'
            self.make_border(board,i-1,j,row,col)
            self.make_border(board,i+1,j,row,col)
            self.make_border(board,i,j-1,row,col)
            self.make_border(board,i,j+1,row,col)
    def solve(self, board: List[List[str]]) -> None:
        i=0
        j=0
        if len(board)==0:
            return board
        rows=len(board)
        cols=len(board[0])
        for i in range(rows):
            self.make_border(board,i,0,rows,cols)
            self.make_border(board,i,cols-1,rows,cols)
            
        for i in range(cols):
            self.make_border(board,0,i,rows,cols)
            self.make_border(board,rows-1,i,rows,cols)
        for i in range(rows):
            for j in range(cols):
                if board[i][j]=='*':
                    board[i][j]='O'
                elif board[i][j]=='O':
                    board[i][j]='X'
