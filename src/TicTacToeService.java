import java.util.List;

public class TicTacToeService {
    Board board;
    List<Player> players;
    Print print;
    GameValidater gameValidater;
    int gameCount = 0;

    public TicTacToeService(Board board, List<Player> players, GameValidater gameValidater, Print print){
        this.board = board;
        this.players = players;
        this.gameValidater = gameValidater;
        this.print = print;
    }

    public void Input(int x,int y,Player player){
         if(!gameValidater.validateCoordinates(x,y)){
             throw  new BoardException("Input are Invalid");
         }

         if(!gameValidater.validateIsBoardPositionEmpty(x,y)){
             throw  new BoardException("Board Point Already Filled");
         }

         String symbol = player.getSymbol();
         board.setPosition(x,y,symbol);
         print.printBoard(board);

         if(checkBoard(x,y,symbol)){
             System.out.println(" Player "+player.getName()+" Wins");
             System.exit(0);
         }
         gameCount++;
        if(checkBoardFill()){
            System.out.println("Game Draw");
            System.exit(0);
        }

    }

    private  boolean checkBoard(int row,int column,String symbol){
        boolean winRow = true,winColumn = true,winLeft = true,winRight = true;
        for(int i=0;i<board.getBoard().length;i++){
            if(!board.getPosition(row,i).equals(symbol)){
                winRow = false;
            }
            if(!board.getPosition(i,column).equals(symbol)){
                winColumn = false;
            }
            if(!board.getPosition(i,i).equals(symbol)){
                   winLeft = false;
            }
            if(!board.getPosition(i,board.getBoard().length-1-i).equals(symbol)){
                winRight = false;
            }
        }
        return winLeft || winRight || winColumn || winRow;
    }

    private boolean checkBoardFill(){
        return gameCount == board.getBoard().length * board.getBoard()[0].length;
    }
}
