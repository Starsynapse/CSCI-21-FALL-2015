/*
 * Name        : lab_15.h
 * Author      : Eduardo Zamora
 * Description : Working with nodes
 */
 
class SLNode
{
 private:
  SLNode* next_node_;
  //points to the next node in a singly-linked list
  
  int contents_;
  //stores the data contents of a SLNode
  
 public:
  SLNode();
  //default constructor; sets contents_ to 0
  
  SLNode(int parameter_assigned_to_contents);
  //sets nest_node to NULL
  
  ~SLNode();
  //does nothing; useless pos
  
  void set_contents(int);
  //mutator for contents
  
  int contents() const;
  //accessor for contents_
  
  void set_next_node(SLNode*);
  //mutator for nest_node_
  
  SLNode* next_node() const;
  //accessor for next_node_
}