# Binary tree traversals

## Depth-first search
- Preorder: node, left, right. Process a node before its subtrees.
- Inorder: left, node, right. In a BST, values are visited in sorted order.
- Postorder: left, right, node. Useful when a result depends on child results.

Recursive traversals use O(h) call-stack space, where h is tree height.

## Breadth-first search
Level order uses a queue:
1. Push the root.
2. Process the current level.
3. Push each existing child.
4. Repeat for the next level.

Every node is processed once, so time is O(n). Queue space can be O(n) in the widest level.

## Edge cases
- Empty tree or a single node.
- Skewed tree.
- Duplicate values.
- Deep trees where recursion depth matters.