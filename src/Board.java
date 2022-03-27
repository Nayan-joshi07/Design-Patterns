public class Board {
    String [][] board;
    public Board(int N){
        board = new String[N][N];
        for(int i=0;i<board.length;i++){
            for(int j=0;j< board[i].length;j++){
                board[i][j] = "_";
            }
        }
    }

    public void setPosition(int x,int y , String symbol){
        board[x][y] = symbol;
    }

    public String getPosition(int x,int y){
        return board[x][y];
    }

    public String[][] getBoard(){
        return board;
    }
}
