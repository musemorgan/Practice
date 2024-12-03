/* 
Class notes: 
no node can have more than 2 children 
basically a linked list with left and right but it is singally linked so you cant go backwards
the length of a path is the number of branches on a path 
level, and height are also data members

Different ways to traverse:


ex :         A
            /   \
        B         c
       / \       - \
    D       E       f
  -  \     - -     - \
       G              h
      - -            - -

Inorder: LVR
travserve the left subtree
visit the node
traverse the right subtree
the node should print in between its children 
this should print D, G, B, E, A, C, F, H,. This method is LVR (left visit right)


Preorder Traversal:VLR
VLR (visit, left, right)
this prints A, B, D, G, E, C, F, H

Post Order:LRV
Left, right, visit
Prints G, D, E, B, H, F, C, A

logn is the best case scenario 
*/