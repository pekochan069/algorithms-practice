from itertools import pairwise

def solution(s: str):
    answer = sum(map(lambda a: abs(ord(a[0]) - ord(a[1])), pairwise(s)))
    answer = sum(abs(a - b) for a, b in pairwise(map(ord, s)))
    print(answer)

solution("hello")
