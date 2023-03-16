package Card;
// package Card;

public class YellowCard extends Card {
    public YellowCard(Double n) {
        super(n);
    }

    public void printInfo() {
        System.out.println("Kartu Kuning: " + this.number);
    }

    public Double value() {
        return this.number + 0.3;
    }

}