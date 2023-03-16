public class TempatTinggal {
    protected int luas;
    protected double hargaBahanBangunan;

    public TempatTinggal() {
        this.luas = 0;
        this.hargaBahanBangunan = 0;
    }

    public TempatTinggal(int l, double h) {
        this.luas = l;
        this.hargaBahanBangunan = h;
    }

    public int getLuas() {
        return this.luas;
    }

    public double getHargaBahanBangunan() {
        return this.hargaBahanBangunan;
    }

    public void setLuas(int l) {
        this.luas = l;
    }

    public void setHargaBahanBangunan(double h) {
        this.hargaBahanBangunan = h;
    }

    public double hitungBiayaBangun() {
        return this.luas * this.hargaBahanBangunan;
    }

}

class Rumah extends TempatTinggal {

    public Rumah(int l, double h) {
        this.luas = l;
        this.hargaBahanBangunan = h;
    }

    public Rumah(int lebar, int panjang, double hargaBahanBangunan) {
        this.luas = lebar * panjang;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public double hitungBiayaBangun(double setoran) {
        return this.hitungBiayaBangun() + setoran;
    }

    public void setLuas(int lebar, int panjang) {
        this.luas = lebar * panjang;
    }
}

interface Kendaraan {
    public double hitungJarakTempuh();
}

class Karavan extends TempatTinggal implements Kendaraan {
    private float bensin;
    private float pemakaianBensin;

    public float getBensin() {
        return this.bensin;
    }

    public float getPemakaianBensin() {
        return this.pemakaianBensin;
    }

    public void setBensin(float b) {
        this.bensin = b;
    }

    public void setPemakaianBensin(float p) {
        this.pemakaianBensin = p;
    }

    public double hitungBiayaBangun() {
    return this.luas * this.hargaBahanBangunan * 3;
    }

    public double hitungJarakTempuh() {
        return this.bensin * this.pemakaianBensin;
    }
}