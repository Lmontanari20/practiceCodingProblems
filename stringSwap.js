/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var areAlmostEqual = function (s1, s2) {
  if (s1.length != s2.length) {
    return false;
  }

  count = 0;

  for (let i = 0; i < s1.length; i++) {
    if (!s2.includes(s1[i])) {
      return false;
    }
    if (s1[i] != s2[i]) {
      count += 1;
    }
  }

  if (count == 2 || count == 0) {
    return true;
  }
  return false;
};
