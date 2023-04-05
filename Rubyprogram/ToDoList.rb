#作成日:2023/3/30
#最終更新日:2023/4/1
if File.exist?("ToDoList.txt")
    puts "ToDoListを読み込んでいます..."
    task_set = IO.readlines("ToDoList.txt")
    puts "----読み込みが完了しました----"
end

while true
    puts "Listを閲覧したい場合1を、追加したい場合2を、削除したい場合3を、プログラムを終了したい場合4を入力してください: "
    digits = gets.to_i

    if digits == 1
        puts task_set
    elsif digits == 2
        puts "追加したいタスク名を入力してください: "
        task = gets.chomp
        puts "期日を設定してください(例:2024-01-01): "
        limit = gets.chomp

        def is_number?(text)
            text.size == 10 && !! (text[0..3] =~ /^[0-9]+$/) && !! (text[5..6] =~ /^[0-9]+$/) && !! (text[8..9] =~ /^[0-9]+$/)
        end
        while !is_number?(limit)
            puts "記述フォーマットが違います。再度入力してください(yyyy-mm-dd): "
            limit = gets.chomp
        end
        task_set.push(task + " " + limit + "\n")
        File.open("ToDoList.txt", File.exist?("ToDoList.txt") ? "a" : "w") do |file|
            file.puts task + " " + limit
        end
        puts "----反映しました----"

    elsif digits == 3
        while true
            puts "削除したいタスク名を入力してください: "
            task = gets.chomp
            task_find = -1
            for i in 1..task_set.size
                if task_set[i-1][0,task.size] == task
                    task_find = i-1
                    break
                end
            end
            if task_find == -1
                puts "タスクが存在しません。続行する場合はyを、中断する場合はy以外の文字を入力してください: "
                YesNo = gets.chomp
                if YesNo != "y"
                    break
                end
            else
                task_set.delete_at(task_find)
                puts "タスクを削除しています。。。"
                File.open("ToDoList.txt", "w") do |file|
                    for i in 1..task_set.size
                        file.write(task_set[i-1])
                    end
                end
                puts "----反映しました----"
                break
            end
        end
    elsif digits == 4
        exit
    end
end