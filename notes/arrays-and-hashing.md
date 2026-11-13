# Arrays and hashing

## Arrays
Arrays store elements in contiguous memory and support constant-time indexed access.

Useful patterns:
- Traversal: inspect each element once.
- Prefix sum: answer range-sum questions using accumulated totals.
- Sorting: make ordering and two-pointer scans easier.
- Frequency counting: count values when the range is manageable.

## Hash maps and sets
Use a map for frequencies, complements, or average-case lookup. Use a set when only membership or uniqueness matters.

Examples:
- Two Sum: store previously seen values and search for the complement.
- Duplicate detection: insert each value into a set.
- Frequency count: map each value to its count.

## Things to check
- Are duplicate values allowed?
- Can values be negative?
- Is the value range too large for a frequency array?
- Do original indices or order matter?

A single traversal is O(n). Hash operations are O(1) on average, O(n) worst case.