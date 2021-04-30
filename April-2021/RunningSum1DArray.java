public class RunningSum1DArray {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};
        int[] numeros = runningSum(nums);
        System.out.print("[");
        for(int i = 0; i < nums.length; i++){
            if(i == nums.length-1){
                System.out.print(numeros[i] + "]\n");
                break;
            }
            System.out.print(numeros[i] + ",");
        }
    }

    public static int[] runningSum(int[] nums) {
        int[] numeros = new int[nums.length];
        int sum = 0;
        for(int i = 0; i < numeros.length; i++){
            sum += nums[i];
            numeros[i] += sum;
        }
        return numeros;
    }
}
