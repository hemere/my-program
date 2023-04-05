board = 8.times.map { gets.chomp }
 
8.times do |i|
    8.times do |j|
        if board[i][j] == '*'
            puts "#{('a'.ord +j).chr}#{8-i}"
            exit
        end
    end
end