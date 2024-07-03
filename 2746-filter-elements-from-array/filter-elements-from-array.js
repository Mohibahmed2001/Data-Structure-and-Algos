/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let size = 0;
    const newArr = new Array(arr.length);
    for (let i = 0; i < arr.length; ++i) {
        if (fn(arr[i], i)) {
            newArr[size] = arr[i];
            size++;
        }
    }
    // Ensure new array is of length size
    while (newArr.length > size) {
        newArr.pop();
    }
    return newArr
};