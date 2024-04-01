package main
import (
	"fmt"
)
func Pangram(sentence string) bool {
	letters := make(map[rune]bool)
	for _, ch := range sentence {
		if ch >= 'a' && ch <= 'z' {
			letters[ch] = true
		}
	}
	return len(letters) == 26
}
func main() {
	var sentence string
	fmt.Print("Enter a string of lowercase Latin letters: ")
	fmt.Scanln(&sentence)
	fmt.Println(Pangram(sentence))
}