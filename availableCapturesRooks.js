/**
 * @param {character[][]} board
 * @return {number}
 */
var numRookCaptures = function (board) {
  // find rook x and y
  // count how many 'p' are in rook x and rook y
  // count is the answer

  let rookX = 0;
  let rookY = 0;
  let result = 0;
  for (let i = 0; i < 8; i++) {
    for (let y = 0; y < 8; y++) {
      if (board[i][y] == "R") {
        rookX = i;
        rookY = y;
      }
    }
  }
  for (let i = rookX + 1; i < 8; i++) {
    if (board[i][rookY] !== "." && board[i][rookY] !== "p") {
      break;
    }
    if (board[i][rookY] == "p") {
      result++;
      break;
    }
  }

  for (let i = rookX - 1; i >= 0; i--) {
    if (board[i][rookY] != "." && board[i][rookY] != "p") {
      break;
    }
    if (board[i][rookY] == "p") {
      result++;
      break;
    }
  }

  for (let i = rookY + 1; i < 8; i++) {
    if (board[rookX][i] != "." && board[rookX][i] != "p") {
      break;
    }
    if (board[rookX][i] == "p") {
      result++;
      break;
    }
  }

  for (let i = rookY - 1; i >= 0; i--) {
    if (board[rookX][i] != "." && board[rookX][i] != "p") {
      break;
    }
    if (board[rookX][i] == "p") {
      result++;
      break;
    }
  }

  return result;
};
