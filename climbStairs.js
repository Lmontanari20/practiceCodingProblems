/**
 * @param {number} n
 * @return {number}
 */
// var climbStairs = function(n) {
//     return climb_stairs(0,n)
// };

// var climb_stairs = function(i, n) {
//     if(i > n) {
//         return 0
//     }
//     if(i == n) {
//         return 1
//     }
//     return climb_stairs(i+1, n) + climb_stairs(i+2, n)
// }


var climbStairs = function(n) {
    if (n == 1) {
        return 1;
    }
    let dp = [0];
    dp.push(1);
    dp.push(2);
    for (let i = 3; i <= n; i++) {
        dp.push(dp[i - 1] + dp[i - 2]);
    }
    return dp[n];
}