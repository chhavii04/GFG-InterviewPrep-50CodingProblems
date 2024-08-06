/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->data);
            head=head->next;
        }
        int n=0;
        if(v.size()%2==0){
            n=v.size()/2;
        }else{
            n=(v.size()+1)/2;
        }
        int j=v.size()-1;
        for(int i=0;i<n;i++){
            if(v[i]!=v[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};