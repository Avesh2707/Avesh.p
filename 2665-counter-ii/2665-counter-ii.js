/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(n) {
    let current = n;

    return {
        increment: function() {
            return ++current;
        },

        decrement: function() {
            return --current;
        },

        reset: function() {
            current = n;
            return current;
        }
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */