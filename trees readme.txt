For this week's additional program, I programmed a tree module.

This tree module makes use of nodes which are connected together in a tree-like structure.
The nodes are connected through declaring: "left", "right" & "parent". Left determines the chosen node's left child node. Right
determines the chosen node's right child node. Parent determines the chosen node's parent node. 

The tree structure is built up of 2 nodes: root and current. Root determines the root node. Current determines the current node we are
currently accessing.

The following functionalities are within the program:
Create new tree
Set current node to root node
Check if current node is at the root
Check if the current position is a leaf (no child nodes)
Move current position to root / left child / right child node node
Inserting a root / left child / right child node with data value x
Return the value stored in the root / left child / right child node
Edit the existing value within the root / left child / right child node to value 'x'
Delete the selected node. Only leafs may be deleted. A leaf node is a node with no child nodes
A post order traversal recursive algorithm that prints the dummy tree

All of these functions are tested automatically in the testing section labelled in my code.

Important note for my testing:
The function setupDummyTree sets up a tree with the following properties:
root node data value = 4
left child node data value = 3
right child node data value = 5

A lot of my testing is executed on the dummyTree setup.