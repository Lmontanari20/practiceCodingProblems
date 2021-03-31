function creditCard(cc) {
  if (cc.length <= 4) {
    return cc;
  }
  result = "";
  end = cc.slice(-4);
  for (let i = 0; i < cc.length - 4; i++) {
    result += "x";
  }
  result += end;
  return result;
}
