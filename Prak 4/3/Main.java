public class Main{
    public static void main(String[] args){
        DaftarBelanja daftar = new DaftarBelanja(100);
        daftar.belanja("kotak merah",5);
        daftar.belanja(10,5, "kotak merah");
        daftar.belanja(10, "kotak merah");
        daftar.print();
    }
}