/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function() {
        var s ="Hello World";
        return s;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */