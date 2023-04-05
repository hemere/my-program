#問題:https://atcoder.jp/contests/abc163/tasks/abc163_c
#提出:https://atcoder.jp/contests/abc163/submissions/12544354
#2020-05-01AC
n = gets.to_i
a = gets.split.map(&:to_i)
b = Array.new(n){0}
a.each do |x|
  b[x-1] += 1
end
puts b