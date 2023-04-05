n, m = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
n -= a.sum
puts n >=0 ? n :-1