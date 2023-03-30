public class DaftarBelanja{
    private Barang[] listBelanja;
    private int jumlahBarang;
    private int maxBarang;

    public DaftarBelanja(int max){
        this.listBelanja = new Barang[max];
        this.jumlahBarang = 0;
        this.maxBarang = max;
    }

    public void belanja(int lorong, String keterangan){
        if(this.jumlahBarang < this.maxBarang){
            this.listBelanja[this.jumlahBarang] = new Barang(keterangan + " (lorong " + lorong +")", 1);
            this.jumlahBarang++;
        }
    }

    public void belanja(int lorong, int qty, String keterangan){
        if(this.jumlahBarang < this.maxBarang){
            this.listBelanja[this.jumlahBarang] = new Barang(keterangan + " (lorong " + lorong +")", qty);
            this.jumlahBarang++;
        }
    }

    public void belanja(String barang){
        if(this.jumlahBarang < this.maxBarang){
            this.listBelanja[this.jumlahBarang] = new Barang(barang, 1);
            this.jumlahBarang++;
        }
    }

    public void belanja(String barang, int qty){
        if(this.jumlahBarang < this.maxBarang){
            this.listBelanja[this.jumlahBarang] = new Barang(barang, qty);
            this.jumlahBarang++;
        }
    }

    public void print(){
        for (int i = 0; i < this.jumlahBarang;i++){
            System.out.println((i+1) + ". " + this.listBelanja[i].toString());
        }
    }
}