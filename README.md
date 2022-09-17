# A Very Logical Function
There is a function f(x) that satisfies the conditions below.
```
(1) f(1) = 1

(2) f(2) = 3

(3) f(3) = 5

(4) f(4) = 7
```
then what's f(5)?

① 9<br>
② 11<br>
③ 13<br>
④ 15<br>
⑤ 217341<br>

Answer: ⑤
## C++
```cpp
#include <iostream>
#include <cmath>

double worldMostLogical(double x) {
    return (18111 / 2.0) * pow(x, 4) - 90555 * pow(x, 3) + (633885 / 2.0) * pow(x, 2) - 452773 * x + 217331;
}

int main() {
    std::cout << worldMostLogical(1) << std::endl; // 1
    std::cout << worldMostLogical(2) << std::endl; // 3
    std::cout << worldMostLogical(3) << std::endl; // 5
    std::cout << worldMostLogical(4) << std::endl; // 7
    std::cout << worldMostLogical(5) << std::endl; // 217341
}
```

## Go
```go
package main

import (
	"fmt"
	"math"
)

func worldMostLogical(x float64) float64 {
	return (18111/2)*math.Pow(x, 4) - 90555*math.Pow(x, 3) + (633885/2)*math.Pow(x, 2) - 452773*x + 217331

}

func main() {
	fmt.Println(worldMostLogical(1)) // 1
	fmt.Println(worldMostLogical(2)) // 3
	fmt.Println(worldMostLogical(3)) // 5
	fmt.Println(worldMostLogical(4)) // 7
	fmt.Println(worldMostLogical(5)) // 217341
}
```

## Rust
```rs
fn world_most_logical(x: f64) -> f64 {
    (18111.0 / 2.0) * x.powi(4) - 90555.0 * x.powi(3) + (633885.0 / 2.0) * x.powi(2) - 452773.0 * x
        + 217331.0
}

fn main() {
    println!("{}", world_most_logical(1.0)); // 1
    println!("{}", world_most_logical(2.0)); // 3
    println!("{}", world_most_logical(3.0)); // 5
    println!("{}", world_most_logical(4.0)); // 7
    println!("{}", world_most_logical(5.0)); // 217341
}
```

## Typescript (Javascript)
```ts
function worldMostLogical(x: number) {
    return (18111 / 2) * Math.pow(x, 4) - 90555 * Math.pow(x, 3) + (633885 / 2) * Math.pow(x, 2) - 452773 * x + 217331;
}
console.log(worldMostLogical(1)); // 1
console.log(worldMostLogical(2)); // 3
console.log(worldMostLogical(3)); // 5
console.log(worldMostLogical(4)); // 7
console.log(worldMostLogical(5)); // 217341
```