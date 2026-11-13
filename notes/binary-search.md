# Binary search

Binary search repeatedly halves a sorted or monotonic search space.

## Standard search
Maintain an inclusive range [left, right]:
- Calculate mid as left + (right - left) / 2.
- If the middle value matches, return its index.
- If it is smaller than target, search the right half.
- Otherwise search the left half.
- Stop when left > right.

## Boundary search
For first/last occurrence and lower/upper bounds, define the predicate precisely. Maintain a clear boundary invariant and be consistent about inclusive or half-open intervals.

## Common mistakes
- Using binary search without sorted or monotonic data.
- Mixing inclusive and exclusive boundaries.
- Forgetting duplicates.
- Computing mid as (left + right) / 2 when overflow is possible.

Time is O(log n); iterative search uses O(1) extra space.