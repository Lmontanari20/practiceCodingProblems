// takes two arrays of non empty integers - or positive,
// finds pair of numbers whose absolute difference is closest to 0 and returns those two numbers in an array

function pair(arr1, arr2) {
  if (arr1.length == 0 || arr2.length == 0) {
    return -1;
  }
  arr1.sort((a, b) => {
    return a - b;
  });
  arr2.sort((a, b) => {
    return a - b;
  });
  let dif = Math.abs(arr1[0] - arr2[0]);
  let smallest = [arr1[0], arr2[0], dif];
  let i = 0;
  let j = 0;

  while (i < arr1.length && j < arr2.length) {
    let diff = Math.abs(arr1[i] - arr2[j]);

    if (diff < smallest[2]) {
      smallest[0] = arr1[i];
      smallest[1] = arr2[j];
      smallest[2] = diff;
    }
    arr1[i] < arr2[j] ? i++ : j++;
  }
  return smallest;
}

let a = [1, 3, 2, -2];
let b = [-3, 9, -1];

console.log(pair(a, b));
