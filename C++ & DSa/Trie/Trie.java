class Node {
    Node[] children;
    boolean eow; 
    Node() {
        children = new Node[26]; 
        eow = false;
    }
}
public class Trie {
    private Node root; 
    Trie() {
        this.root = new Node();
    }
    public void insert(String s) {
        int len = s.length();
        Node temp = root;
        for (int level = 0; level < len; level++) {
            int index = s.charAt(level) - 'a';
            if (temp.children[index] == null) {
                temp.children[index] = new Node();
            }
            temp = temp.children[index];
        }
        temp.eow = true; 
    }
    public boolean search(String s) {
        int len=s.length();
        Node temp=root;
        for (int level=0; level < len; level++) {
            int index = s.charAt(level) - 'a';
            if (temp.children[index] == null) {
                return false; 
            }
            temp = temp.children[index];
        }
        return temp.eow; 
    }
    public static void main(String[] args) {
        Trie trie = new Trie();
       
    }
}
