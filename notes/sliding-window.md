# Sliding window

A sliding window maintains a contiguous range while moving through an array or string.

## Fixed-size window
1. Calculate the first window.
2. Move one step right.
3. Remove the element leaving the window.
4. Add the new element entering the window.
5. Update the answer.

## Variable-size window
1. Expand the right boundary.
2. Update the window state.
3. While the window violates the condition, shrink from the left.
4. Update the best valid answer.

## Watch out
- Confirm the condition supports shrinking.
- Handle small inputs and window sizes carefully.
- With negative values, the usual positive-sum shrinking logic may not apply.

A typical scan is O(n) when each boundary moves forward at most n times.