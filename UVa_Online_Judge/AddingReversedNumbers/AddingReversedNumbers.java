import java.util.Scanner;
import java.math.BigInteger;

public class AddingReversedNumbers{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        while(n > 0){
            BigInteger a = scan.nextBigInteger();
            BigInteger b = scan.nextBigInteger();
            while(a.remainder(BigInteger.valueOf(10)) == BigInteger.valueOf(0)){ 
                a = a.divide(BigInteger.valueOf(10));
            }
            while(b.remainder(BigInteger.valueOf(10)) == BigInteger.valueOf(0)){
                b = b.divide(BigInteger.valueOf(10));
            }
            String strA = "" + a; String revStrA = "";
            String strB = "" + b; String revStrB = "";
            for(int i = strA.length()-1; i >= 0; i--){
                revStrA += strA.charAt(i);
            }
            for(int i = strB.length()-1; i >= 0; i--){
                revStrB += strB.charAt(i);
            }
            //System.out.println(revStrA + " " + revStrB);
            BigInteger revA = new BigInteger(revStrA);
            BigInteger revB = new BigInteger(revStrB);
            BigInteger sum = revA.add(revB);
            String strSum = "" + sum;
            String revStrSum = "";
            for(int i = strSum.length()-1; i >= 0; i--){
                revStrSum += strSum.charAt(i);
            }
            int index = 0;
            for(int i = 0; i < revStrSum.length(); i++){
                char c = revStrSum.charAt(i);
                if(c != '0'){
                    index = i;
                    break;
                }
            }
            String result = "";
            result = revStrSum.substring(index, revStrSum.length());
            System.out.println(result);
            n--;
        }
        scan.close();
    }
}

