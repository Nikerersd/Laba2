N = 4
if N > 26
    puts "Incorrect data"
else
    for i in (N).downto(1)
        for k in (N).downto(i)
            Str = ('A'.ord + k - 1).chr
            print Str + " "
        end
        puts
    end
end