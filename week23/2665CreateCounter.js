
var createCounter = function (init) {
    let num = init;
    return {
        increment: function () {
            num = num + 1;
            return num;
        },
        decrement: function () {
            num = num - 1;
            return num;
        },

        reset: function () {
             num = init;
            return num;
        }
    }
};

