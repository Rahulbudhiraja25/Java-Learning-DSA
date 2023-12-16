public class Array_lowerBoundUpperBound {
    public static void main(String args[]) {
        int[] arr = { 1, 2, 2, 2, 2, 3, 3, 5, 5, 4, 6, 6, 8, 8, 9 };
        int n = 5;

        System.out.println(lowerBound(arr, n));
        System.out.println(upperBound(arr, n));

    }

    public static int lowerBound(int[] arr, int n) {
        int hi = arr.length - 1, lo = 0, ans = -1;
        while (lo <= hi) {
            int mid=(lo+hi)/2;
            if(arr[mid]==n){
                ans=mid;
                hi=mid-1;
            }
            else if(mid<n){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }

        }
        return ans;
    }

    public static int upperBound(int[] arr, int n) {
        int hi = arr.length - 1, lo = 0, ans = -1;
        while (lo <= hi) {
            int mid=(lo+hi)/2;
            if(arr[mid]==n){
                ans=mid;
                lo=mid+1;
            }
            else if(mid<n){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }

        }

        return ans;
    }
}
