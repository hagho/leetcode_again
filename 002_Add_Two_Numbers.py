# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        res = ListNode(0)
        head = res
        jinwei = 0
        while l1 and l2:
            head.next = ListNode((l1.val + l2.val + jinwei) % 10)
            jinwei = (l1.val + l2.val + jinwei) / 10
            l1 = l1.next
            l2 = l2.next
            head = head.next
        while l1:
            head.next = ListNode((l1.val + jinwei) % 10)
            jinwei = (l1.val + jinwei) / 10
            l1 = l1.next
            head = head.next
        while l2:
            head.next = ListNode((l2.val + jinwei) % 10)
            jinwei = (l2.val + jinwei) / 10
            l2 = l2.next
            head = head.next
        if jinwei != 0:
            head.next = ListNode(jinwei)
        return res.next
         
        