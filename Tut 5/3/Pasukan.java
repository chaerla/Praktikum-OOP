import java.util.*;

public class Pasukan {
    private List<Integer> list;
    private int n;

    public Pasukan(List<Integer> list_, int n) {
        this.list = list_;
        this.n = n;
    }

    public void reset() {
        this.list.clear();
        for (int i = 0; i < this.n; i++) {
            this.list.add(0);
        }
    }

    public long get(int idx) {
        this.reset();
        long start = Util.getTime();
        int element = this.list.get(idx);
        long end = Util.getTime();
        return end - start;
    }

    public long del(int idx, int t) {
        this.reset();
        long start = Util.getTime();
        for (int i = 0; i < t; i++) {
            this.list.remove(idx);
        }
        long end = Util.getTime();
        return end - start;
    }
}
