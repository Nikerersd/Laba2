def even_digits(number)
    count = 0
    while number > 0
        digit = number % 10
        if digit % 2 == 0
            count += 1
        end
        number /= 10
    end
    return count
end

puts "Enter the number of numbers: "
n = gets.chomp.to_i
puts "Enter the numbers separated by a space: "
numbers = gets.chomp.split.map(&:to_i)

for i in 0...n
    number = numbers[i]
    print even_digits(number)
    if i < n - 1
        print " "
    end
end

puts