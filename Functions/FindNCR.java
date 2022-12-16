public class FindNCR{

    public static int fact(int n){
        int fact = 1;
        for(int i = 1; i<=n; i++){
            fact = fact * i;
        }

        return fact;
    }

    public static int ncr(int n, int r){
        int ans;
        
        int numerator = fact(n);
        int denomenator = fact(r) * fact(n - r);

        ans = numerator / denomenator;

        return ans;
    }

    public static void main(String args[]){

        int n = 5, r = 0;

        System.out.println(ncr(n, r));


    }
}