from dataclasses import dataclass

@dataclass(frozen=True)
class Student():
    score: int
    name: str

def read_data(filename):
    with open(filename, 'r') as f:
        data = []
        for line in f:
            score, name = line.split(',')
            data.append(Student(int(score), name.strip()))
    return data
  
data = read_data('data.csv')
for d in data:
    print(f'name: {d.name:<9} score: {d.score}')
