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
