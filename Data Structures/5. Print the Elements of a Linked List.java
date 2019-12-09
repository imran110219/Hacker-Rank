void Print(Node head) {
  if(head==null||head.next==null)
      return;
  else{
      Node temp = head;
      while(temp != null){
          System.out.println(temp.data);
          temp = temp.next;
      }
  }
}