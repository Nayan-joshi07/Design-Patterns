public class Console implements  Print{
    @Override
    public void printBoard(Board board) {
        String [][] _board = board.getBoard();
        for(int i=0;i<_board.length;i++){
            for(int j=0;j<_board[i].length;j++){
                System.out.print(_board[i][j]+"  ");
            }
            System.out.println();
        }
    }
}
