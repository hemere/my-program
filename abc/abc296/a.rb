#問題:https://atcoder.jp/contests/abc296/tasks/abc296_a
#提出:https://atcoder.jp/contests/abc296/submissions/40295651
#2023-04-02AC
n = gets.to_i
s = gets
for i in 0.. n-2
    if s[i] == s[i+1]
        puts "No"
        exit
    end 
end
puts "Yes"