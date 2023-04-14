import java.io.*;
import java.util.*;

public class Enclosure<T extends Animal> {
    private ArrayList<T> animals;
    private int animalCount = 0;

    public Enclosure() {
        this.animals = new ArrayList<T>();
    } 

    public int getAnimalCount() {
        return this.animalCount;
    }

    public void addAnimal(T animal) {
        this.animals.add(animal);
        this.animalCount++;
    }

    public T getAnimalAt(int i) {
        return this.animals.get(i);
    }

    public void removeAnimalAt(int i) {
        this.animals.remove(i);
        this.animalCount--;
    }

    public boolean isEmpty() {
        return this.animalCount == 0;
    }

    public void describe() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong menuliskan output serupa dengan output berikut:
        // Kandang berisi 2 ekor hewan:
        // 1. po, spesies Pandamus Maximus, umur 5 tahun
        // 2. po2, spesies Pandamus Maximus, umur 5 tahun
        if(this.isEmpty()){
            System.out.println("Kandang ini kosong...");
        }
        else{
            System.out.println("Kandang ini berisi " + this.animalCount + " ekor hewan:");
            for (int i=0;i<this.animalCount;i++){
                System.out.println(i+1+". "+this.getAnimalAt(i).getName()+", spesies "+this.getAnimalAt(i).getSpecies()+", umur "+this.getAnimalAt(i).getAge() + " tahun");
            }
        }
    }

    public void feed() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong maka akan memanggil method eat pada tiap animal dalam this.animals
        if(this.isEmpty()){
            System.out.println("Kandang ini kosong...");
        }
        else{
            for (int i=0;i<this.animalCount;i++){
                this.getAnimalAt(i).eat();
            }
        }
    }

    public boolean safeForPetting() {
        for (int i=0;i<this.animalCount;i++){
            if(!this.getAnimalAt(i).isFriendly()){
                return false;
            }
        }
        return true;
    }

    // public static void main(String[] args){
    //     Enclosure e = new Enclosure<Panda>();
    //     Panda po = new Panda("po", 5);
    //     Panda po2 = new Panda("po2", 5);
    //     e.addAnimal(po);
    //     e.addAnimal(po2);
    //     e.describe();
    // }
}