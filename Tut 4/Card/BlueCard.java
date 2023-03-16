package Card;
public class BlueCard extends Card {
    public BlueCard(Double n) {
        super(n);
    }

    public void printInfo() {
        System.out.println("Kartu Biru: " + this.number);
    }

    public Double value() {
        return this.number + 0.2;
    }

}