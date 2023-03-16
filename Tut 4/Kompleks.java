
class Kompleks {
    private static int n_kompleks = 0;
    private int real;
    private int imaginer;

    public Kompleks() {
        this.real = 0;
        this.imaginer = 0;
        Kompleks.n_kompleks++;
    }

    public Kompleks(int real, int imaginer) {
        this.real = real;
        this.imaginer = imaginer;
        Kompleks.n_kompleks++;
    }

    public int getReal() {
        return this.real;
    }

    public int getImaginer() {
        return this.imaginer;
    }

    public void setReal(int n) {
        this.real = n;
    }

    public void setImaginer(int n) {
        this.imaginer = n;
    }

    public Kompleks plus(Kompleks b) {
        return new Kompleks(this.real + b.real, this.imaginer + b.imaginer);
    }

    public Kompleks minus(Kompleks b) {
        return new Kompleks(this.real - b.real, this.imaginer - b.imaginer);
    }

    public Kompleks multiply(Kompleks b) {
        return new Kompleks(this.real * b.real - this.imaginer * b.imaginer,
                this.imaginer * b.real + this.real * b.imaginer);
    }

    public Kompleks multiply(int x) {
        return new Kompleks(this.real * x, this.imaginer * x);
    }

    public static int countKompleksInstance() {
        return Kompleks.n_kompleks;
    }

    public void print() {
        if (this.real != 0 || (this.imaginer == 0 && this.real == 0)) {
            System.out.print(this.real);
        }
        if (this.imaginer != 0) {
            if (this.imaginer > 0 && this.real != 0) {
                System.out.print("+");
            }
            System.out.print(imaginer);
            System.out.print("i");
        }
        System.out.println();
    }

}