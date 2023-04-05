#問題:https://atcoder.jp/contests/abc296/tasks/abc296_b
#提出:https://atcoder.jp/contests/abc296/submissions/40344721
#2023-04-05AC
board = 8.times.map { gets.chomp }
 
8.times do |i|
    8.times do |j|
        if board[i][j] == '*'
            puts "#{('a'.ord + j).chr}#{8-i}"
            exit
        end
    end
end