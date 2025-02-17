class Solution {
    public ListNode insertionSortList(ListNode head) {
        ListNode dummy= new ListNode(0);
        ListNode current=head;
        while(current != null){
            ListNode prev=dummy;
            ListNode nextNode=current.next;
            while(prev.next!=null && prev.next.val < current.val){
                prev=prev.next;
            }
            current.next=prev.next;
            prev.next=current;
            current=nextNode;
        }
        return dummy.next;
    }
}