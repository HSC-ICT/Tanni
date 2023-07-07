x = 5
y = 10

fact = function (n) {
    let ans = 1
    for(let i = 1; i <= n; i++) ans *= i
    return ans
}

console.log(`Summation = ${x} + ${y} = ${x + y}`)
console.log(`Subtraction = ${x} - ${y} = ${x - y}`)
console.log(`Multiplication = ${x} * ${y} = ${x * y}`)
console.log(`Division = ${x} / ${y} = ${x / y}`)
console.log(`Modulus = ${x} % ${y} = ${x % y}`)
console.log(`Exponentiation = ${x} ** ${y} = ${x ** y}`)
console.log(`Logarithm = log${x} = ${Math.log(x)}`)
console.log(`Factorial = ${x}! = ${fact(x)}`)
console.log(`Square root = sqrt(${x}) = ${Math.sqrt(x)}`)
console.log(`Cube root = cbrt(${x}) = ${Math.cbrt(x)}`)
console.log(`Power = pow(${x}, ${y}) = ${Math.pow(x, y)}`)
console.log(`Absolute = abs(${x}) = ${Math.abs(x)}`)
console.log(`Ceil = ceil(${x}) = ${Math.ceil(x)}`)
console.log(`Floor = floor(${x}) = ${Math.floor(x)}`)
console.log(`Round = round(${x}) = ${Math.round(x)}`)
console.log(`Trunc = trunc(${x}) = ${Math.trunc(x)}`)
console.log(`Max = max(${x}, ${y}) = ${Math.max(x, y)}`)
console.log(`Min = min(${x}, ${y}) = ${Math.min(x, y)}`)
console.log(`Sin = sin(${x}) = ${Math.sin(x)}`)
console.log(`Cos = cos(${x}) = ${Math.cos(x)}`)
console.log(`Tan = tan(${x}) = ${Math.tan(x)}`)
