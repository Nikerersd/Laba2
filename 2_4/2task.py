import string

def Pangram(sentence):
    letters = set()
    for ch in sentence:
        if ch.isalpha():
            letters.add(ch)
    return len(letters) == 26

sentence = input("Enter a string of lowercase Latin letters: ")
print(Pangram(sentence))