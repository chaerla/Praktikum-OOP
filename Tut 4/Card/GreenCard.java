package Card;
public class GreenCard extends Card {
    public GreenCard(Double n) {
        super(n);
    }

    public void printInfo() {
        System.out.println("Kartu Hijau: " + this.number);
    }

    public Double value() {
        return this.number + 0.1;
    }

}