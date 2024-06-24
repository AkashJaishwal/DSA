public class FindDuplicate {
    public static void main(String[] args) {
        int[] array = {1, 4, 2, 3, 4, 4, 5, 9, 10, 10, 1, 2, 2, 11, 11};

        System.out.println("Duplicate elements in the array:");
        for (int i = 0; i < array.length - 1; i++) {
            boolean isDuplicate = false;
            for (int j = 0; j < i; j++) {
                if (array[i] == array[j]) {
                    isDuplicate = true;
                    break;
                }
            }
            if (isDuplicate) continue;

            for (int j = i + 1; j < array.length; j++) {
                if (array[i] == array[j]) {
                    System.out.println(array[i]);
                    break;
                }
            }
        }
    }
}
