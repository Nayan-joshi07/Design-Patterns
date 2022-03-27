import java.util.HashMap;

public class GameValidater {
    Board board;
    HashMap<Integer,Boolean> playerCheck;
    public GameValidater(Board board,HashMap<Integer,Boolean> playerCheck){
        this.board = board;
        this.playerCheck = playerCheck;
    }

    public boolean validateCoordinates(int x,int y){
        return x<board.getBoard().length && y<board.getBoard().length && x>=0 && y>=0;
    }

    public boolean validateIsBoardPositionEmpty(int x,int y){
        return board.getPosition(x,y).equals("-");
    }
}
