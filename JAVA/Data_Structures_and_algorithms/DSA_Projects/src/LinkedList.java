public class LinkedList {
    Node head;

    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
        }
    }

    public void AddFirst(String data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            newNode.next = head;
            head = newNode;
        }

    }



    public static void main(String args[]) {
        LinkedList list = new LinkedList();
        list.AddFirst("a");
        list.AddFirst("b");

    }
}
