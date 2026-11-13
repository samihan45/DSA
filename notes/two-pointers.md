# Two pointers

Two pointers maintain two positions while scanning a sequence. The technique can reduce nested loops to a linear scan.

## Common forms
- Opposite ends: start at both ends and move based on a condition. Useful for sorted pair-sum problems and palindrome checks.
- Same direction: both pointers move forward. Useful for removing duplicates in-place.
- Fast and slow: move at different speeds. Useful for linked-list cycle detection and finding a middle node.

## Key question
What property tells me which pointer can safely move? The movement rule must be justified; arbitrary movement can skip a valid answer.

Many scans take O(n) time and O(1) extra space, provided sorting is not required first.