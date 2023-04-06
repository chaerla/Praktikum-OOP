import java.util.Arrays;

public class GameKata {
    public static void run(String[] tito, String[] wiwid) {
        String[] uniqueTito = Arrays.stream(tito)
                .distinct()
                .toArray(String[]::new);

        String[] uniqueWiwid = Arrays.stream(wiwid)
                .distinct()
                .toArray(String[]::new);

        for (int i = 0; i < uniqueTito.length; i++) {
            for (int j = 0; j < uniqueWiwid.length; j++) {
                if (uniqueTito[i].equals(uniqueWiwid[j])) {
                    System.out.println(uniqueTito[i]);
                }
            }
        }
    }

    public static void main(String[] args) {
        String[] tito = { "Budi", "Adalah", "Budi", "Budi" }; // fixed array initialization
        String[] wiwid = { "Budi", "Adalajh", "Oranga", "Adalah" }; // fixed array initialization
        run(tito, wiwid); // pass the arrays as arguments to the run method
    }
}