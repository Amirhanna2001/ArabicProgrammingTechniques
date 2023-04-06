package recursivealgo;
import java.util.Scanner;
/**
 *
 * @author amirhanna
 */
public class RecursiveAlgo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        //IF & ELSE 
//        if(isValid(n)){
//            //O(n^2)
//        }
//        else
//            System.out.println("Invalid Input"); // O(1)
        
        
        
        
//        int cnt=0;
//        int y = n,x=0;
//        while(x<y) {
//            ++cnt;
//            --y;
//            ++x;
//        }
//        System.out.println(cnt);
        
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) 
            arr[i] = in.nextInt();
        
        System.out.println(maxValue(arr));
        //System.out.println(isUnique(arr));


        
                
    }
    public static boolean isValid(int n){
        if(n>0 && n<1000) return true;
        return false;
    }
    // 4 6 8 2 45 10 
    // 2 4 6 8 10 45   O(n^2)
    // return arr[n-1] O(1)
    public static int maxValue(int arr[]){
        int mx = arr[0];//45
        for (int i = 1; i < arr.length; i++) {
            if(arr[i] > mx){
                mx = arr[i];
            }
        }
        return mx;
    }
    public static boolean isUnique(int arr[]){
        for (int i = 0; i < arr.length-2; ++i) 
            for (int j = i+1; j < arr.length-1; ++j) 
                if(arr[i] == arr[j]) return false;
                
       return true;     
    }
}
