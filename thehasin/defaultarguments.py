if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        student_marks[name] = score
    query_name = input()
    print("{0:.2f}".format(sum(student_marks[query_name]) / len(student_marks[query_name])))

# #!/bin/python3