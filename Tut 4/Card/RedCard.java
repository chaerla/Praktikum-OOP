package Card;
public class RedCard extends Card {
    public RedCard(Double n) {
        super(n);
    }

    public void printInfo() {
        System.out.println("Kartu Merah: " + this.number);
    }

    public Double value() {
        return this.number + 0.4;
    }

}