# TASKS

# 0. Red-Black - New node (0/6)

- files: `0-rb_tree_node.c`
- prototype: `rb_tree_t *rb_tree_node(rb_tree_t *parent, int val, rb_color_t
color)`
	- `parent` is the parent of the node we wish to create
	- `value` is the data to store within the new node
	- `color` specifies whether the node is red or black
	- newly created nodes do not have any children
	- return a pointer to the new node or `NULL` upon failure

# 1. Red-Black - Is Red-Black (0/5)

- files: `1-rb_tree_is_valid.c`
- prototype: `int rb_tree_is_valid(const rb_tree_t *tree)`
	- `tree` is pointer to the root node of the tree in question
	- return `1` if `tree` is a valid RB tree, `0` otherwise
	- if `tree` is `NULL`, return `0`

## properties of a red-black tree:

- a red-black tree is a BST (?)
- every node is either red or black
- root of tree is always black
- adjacent red nodes are not allowed -- a red node cannot have a red parent or a
  red child
- every path from the `root` node to a `NULL` node has the same number of black
  nodes

# 2. Red-Black - Insert (0/6)

- files: `0-rb_tree_node.c`, `2-rb_tree_insert.c`
- prototype: `rb_tree_t *rb_tree_insert(rb_tree_t **tree, int value)`
	- `tree` is double pointer to the root node of the tree to insert a value in
	- `value` is the data to store in the node to be inserted
	- return a pointer to the newly created node, or `NULL` upon failure
	- if `tree` is `NULL`, the newly created node must become the root node
	- if the value is already present in the tree, it must be ignored
	- the resultant tree must be a red-black tree
	- up to seven functions are allowed in the source file

