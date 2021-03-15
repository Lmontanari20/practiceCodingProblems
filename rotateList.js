/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var rotateRight = function (head, k) {
  if (!head || head.next === null) {
    return head;
  }
  let kmod = k % sizeList(head);
  if (kmod > 0) {
    let secondLastNode = lastNode(head);
    let newHead = secondLastNode.next;
    secondLastNode.next = null;
    newHead.next = head;
    head = newHead;
    kmod = kmod - 1;
    head = rotateRight(head, kmod);
  }
  return head;
};

let lastNode = function (head) {
  while (head.next) {
    if (!head.next.next) {
      return head;
    }
    head = head.next;
  }
};

let sizeList = function (head) {
  let size = 1;
  while (head.next) {
    size++;
    head = head.next;
  }
  return size;
};
