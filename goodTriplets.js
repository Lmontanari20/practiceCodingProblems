/**
 * @param {number[]} arr
 * @param {number} a
 * @param {number} b
 * @param {number} c
 * @return {number}
 */
// |arr[i] - arr[j]| <= a
// |arr[j] - arr[k]| <= b
// |arr[i] - arr[k]| <= c
var countGoodTriplets = function (arr, a, b, c) {
  let countTrip = 0;
  //     let i = 0
  //     let j = 1
  //     let k = 2

  //     while(k != arr.length - 1 && j != arr.length - 2 && i != arr.length -3) {
  //         if(Math.abs(arr[i] - arr[j]) <= a && Math.abs(arr[j] - arr[k]) <= b && Math.abs(arr[i] - arr[k]) <= c) {
  //             countTrip++
  //         }
  //         if(k != arr.length - 1) {
  //                 k++
  //             }else if(j != arr.length - 2) {
  //                 j++
  //             }else if(i != arr.length - 3) {
  //                 i++
  //             }
  //     }

  for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (Math.abs(arr[i] - arr[j]) <= a) {
        for (let k = j + 1; k < arr.length; k++) {
          if (
            Math.abs(arr[j] - arr[k]) <= b &&
            Math.abs(arr[i] - arr[k]) <= c
          ) {
            countTrip++;
          }
        }
      }
    }
  }

  return countTrip;
};
