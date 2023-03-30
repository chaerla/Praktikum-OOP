/**
 * Elang.java
 * Implementasi class Elang
 * @author 13521044 Rachel Gabriela Chen
 */
public class Elang extends Animal {
    private int basePower;
    private int jumlahTelur;

    public Elang(int basePower_){
        this.basePower = basePower_;
        this.numberOfLegs = 2;
        this.jumlahTelur = 0;
        this.children = 0;
    }

    public int getJumlahTelur(){
        return this.jumlahTelur;
    }

    public void bertelur(){
        this.jumlahTelur++;
    }

    public int getAnimalPower(){
        return this.basePower * this.children - this.jumlahTelur;
    }
}
