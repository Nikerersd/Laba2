package main

import "fmt"

func main() {
    N := 4
    if N > 26 {
        fmt.Println("Incorrect data")
    } else {
        for i := N; i > 0; i-- {
            for k := N; k >= i; k-- {
                Str := 'A' + k - 1
                fmt.Printf("%c ", Str)
            }
            fmt.Println()
        }
    }
}