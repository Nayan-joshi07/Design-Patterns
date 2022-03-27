public class Player {
     private int id;
     private String playerName;
     private String symbol;
     private boolean isWin;

     Player(int id,String playerName,String symbol){
          this.id = id;
          this.playerName = playerName;
          this.symbol = symbol;
     }

     public void setId(int id){
         this.id = id;
     }

     public int getId(){
         return this.id;
     }

     public void setName(String playerName){
         this.playerName = playerName;
     }

     public String getName(){
         return this.playerName;
     }

     public void setSymbol(String symbol){
         this.symbol = symbol;
     }

    public String getSymbol() {
        return this.symbol;
    }

    public void setIsWin(boolean isWin){
         this.isWin = isWin;
    }

    public boolean getIsWin(){
         return this.isWin;
    }

}
