public class duplicate_array {
    public static void main(String[] args) {
        int arr[] = {1, 4, 2, 3, 4, 4, 5, 9, 10, 10, 1, 2, 2, 11, 11};
        int n = arr.length;
        int[] A = new int[n];
        int k = 0;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    int l;
                    for (l = 0; l < k; l++) {
                        if (A[l] == arr[i]) {
                            break;
                        }
                    }
                    if (l == k) { 
                        A[k++] = arr[i];
                    }
                    break;
                }
            }
        }

        for (int i = 0; i < k; i++) {
            System.out.println(A[i]);
        }
    }
}