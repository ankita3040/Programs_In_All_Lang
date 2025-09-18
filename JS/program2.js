

function test() {
a = 90; // No 'let', 'const', or 'var' → becomes global (not recommended)
console.log("a -> Inside the function = " + a);
}

test();
console.log("a -> Outside the function = " + a);