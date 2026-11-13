int minimumOperations(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] <= 0)
            continue;

        int duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0) {
            count++;
        }
    }

    return count;
}