function worldMostLogical(x: number) {
    return (18111 / 2) * Math.pow(x, 4) - 90555 * Math.pow(x, 3) + (633885 / 2) * Math.pow(x, 2) - 452773 * x + 217331;
}
console.log(worldMostLogical(1)); // 1
console.log(worldMostLogical(2)); // 3
console.log(worldMostLogical(3)); // 5
console.log(worldMostLogical(4)); // 7
console.log(worldMostLogical(5)); // 217341
