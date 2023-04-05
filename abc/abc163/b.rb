#問題:https://atcoder.jp/contests/abc163/tasks/abc163_b
#提出:https://atcoder.jp/contests/abc163/submissions/12544007
#2020-05-01AC
n, m = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
n -= a.sum
puts n >=0 ? n :-1