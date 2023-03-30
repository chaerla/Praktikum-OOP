/**
 * Animal.java
 * sebagai abstrak class Animal
 * @author 13521044 Rachel Gabriela Chen
 */

public abstract class Animal implements Comparable<Animal> {
    protected int numberOfLegs;
    protected int children; 
    public int getNumberOfLegs(){
        return this.numberOfLegs;
    }
    public long getNumberOfChildren(){
        return this.children;
    }
    public void increaseChild(int inc){
        this.children+=inc;
    }

    abstract int getAnimalPower();
   
    public int compareTo(Animal a) {
        // compareTo mengembalikan:
        // 0 bila this sama dengan m
        // 1 bila this lebih dari m
        // -1 bila this kurang dari m
        if (a.getAnimalPower() == this.getAnimalPower()){
            return 0;
        }
        if (a.getAnimalPower() > this.getAnimalPower()){
            return -1;
        }
        return 1;
    }
}
