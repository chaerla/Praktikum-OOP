import java.io.*;
import java.util.*;

public class Zoo {
    private ArrayList<Enclosure<? extends Animal>> enclosures;
    private float ticketPrice;
    private int enclosureCount;

    public Zoo() {
        // Inisialisasi this.enclosures dan this.ticketPrice
        this.enclosures = new ArrayList<Enclosure<? extends Animal>>();
        this.ticketPrice = 0;
        this.enclosureCount = 0;
    }

    public void addEnclosure(Enclosure<? extends Animal> enc) {
        if (!enc.isEmpty()){
            this.enclosures.add(enc);
            this.enclosureCount++;
            // this.updateTicketPrice();
        }
    }

    public void updateTicketPrice() {
        // Melakukan update terhadap this.ticketPrice dengan rumus sebagai berikut
        // harga tiket baru = 0
        // Untuk setiap Enclosure dalam this.enclosures:
            // Apabila Enclosure bersifat safeForPetting:
            //     harga tiket baru += 1.5 * jumlah animal dalam enclosure
            // else:
            //     harga tiket baru += 1 * jumlah animal dalam enclosure 
        float newPrice = 0;
        for (int i = 0; i<this.enclosureCount;i++){
            if(this.enclosures.get(i).safeForPetting()){
                newPrice += 1.5 * this.enclosures.get(i).getAnimalCount();
            }
            else{
                newPrice += this.enclosures.get(i).getAnimalCount();
            }
        }
        this.ticketPrice = newPrice;
    }

    public float getTicketPrice() {
        // getter untuk this.ticketPrice
        return this.ticketPrice;
    }

    public int getTotalAnimalCount() {
        // Mengembalikan jumlah total semua hewan yang ada pada semua enclosure dalam this.enclosures
        int cnt = 0;
        for (int i = 0; i<this.enclosureCount;i++){
            cnt+= this.enclosures.get(i).getAnimalCount();
        }
        return cnt;
    }

    public int getEnclosureCount() {
        return this.enclosureCount;
    }

    public static void main(String[] args){
        
    }
}