// Last updated: 8/1/2026, 5:22:48 pm
function createCounter(n) {
    return function() {
        return n++;
    };
}

// Example usage:
function runCounter(n, calls) {
    const counter = createCounter(n);
    return calls.map(() => counter());
}

// Test cases:
console.log(runCounter(10, ["call", "call", "call"])); // [10, 11, 12]
console.log(runCounter(-2, ["call", "call", "call", "call", "call"])); // [-2, -1, 0, 1, 2]
