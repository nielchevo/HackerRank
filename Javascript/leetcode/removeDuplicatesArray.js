/**
 * @param {number[]} nums
 * @return {number}
 */
function removeDuplicateArray(nums) {
    const set = new Set(); // using Set to keep track duplicate value
    const result = nums.filter(val => {
        if (set.has(val)) {
            return false;
        }

        set.add(val);
        return true;
    });

    return result.length;
};

// acceptable solution for leetcode since nums pass by reference
function removeDuplicate(nums) {
    let counter = 0;

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] == nums[counter]) {
            continue;
        } else {
            counter++;
            nums[counter] = nums[i];
        }
    }

    return counter + 1;
}

console.log(removeDuplicateArray([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])); // return 5
console.log(removeDuplicate([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])) // return 5
console.log(removeDuplicate([1, 1, 2])); // return 2