require 'set'

def pangram(sentence)
    letters = Set.new
    sentence.each_char do |ch|
        if ch.match?(/[a-zA-Z]/)
            letters.add(ch)
        end
    end
    return letters.size == 26
end

puts "Enter a string of lowercase Latin letters: "
sentence = gets.chomp
puts pangram(sentence)