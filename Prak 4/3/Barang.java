public class Barang{ 
    private String nama;
    private int amount;

    public Barang(String nama_, int amount_){
        this.nama = nama_;
        this.amount = amount_;
    }

    public String toString(){
        return this.amount + " " + this.nama;
    }
}