# Big-O quick reference

| Operation / pattern | Typical time |
| --- | --- |
| Array index access | O(1) |
| Linear search | O(n) |
| Binary search on sorted data | O(log n) |
| Comparison sorting | O(n log n) |
| Hash map lookup / insert | O(1) average, O(n) worst |
| Balanced BST search / insert | O(log n) |
| Tree traversal | O(n) |
| Graph BFS / DFS | O(V + E) |

## Space complexity
- O(1): fixed extra variables.
- O(n): an auxiliary array, map, or stack that grows with input.
- O(h): recursion depth for a tree of height h.

## Before submitting
- Count how often each element is visited.
- Include sorting and data-structure costs.
- Include recursion stack and auxiliary containers.
- State average-case assumptions for hashing.