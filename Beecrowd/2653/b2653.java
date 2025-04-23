import java.io.IOException;
import java.util.*;

public class b2653 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        Set<String>djk = new TreeSet<>();
        while(scan.hasNext()){
            String str = scan.nextLine();
            djk.add(str);
        }
        System.out.println(djk.size());
        scan.close();
    } 
}

