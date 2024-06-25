# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        # Create a dummy node which points to the head
        dummy = ListNode(0, head)
        first = dummy
        second = dummy

        # Move first pointer n+1 steps ahead
        for _ in range(n + 1):
            first = first.next

        # Move both first and second pointers until first reaches the end
        while first:
            first = first.next
            second = second.next

        # Remove the nth node from the end
        second.next = second.next.next

        # Return the head of the modified list
        return dummy.next
