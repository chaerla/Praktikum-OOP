/**
 * Gajah.java
 * Implementasi Gajah
 * @author 13521044 Rachel Gabriela Chen
 */
    
public class Gajah extends Animal {
    private int basePower;
    private int age;

    public Gajah(int basePower_, int age_){
        this.basePower = basePower_;
        this.age = age_;
        this.numberOfLegs = 4;
        this.children = 0;
    }

    public int getAge(){
        return this.age;
    }

    public int getAnimalPower(){
        return 3*(this.basePower + this.age + this.children);
    }
}
