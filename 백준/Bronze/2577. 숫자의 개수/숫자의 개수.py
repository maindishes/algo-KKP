import sys

input = sys.stdin.readline

n_list =[]
for i in range(3):
    n_list.append(int(input().strip()))
temp=1;
for i in n_list:
    temp *= i

stemp =str(temp)
an_dic={}
for i in range(10):
    an_dic[i]=0;

for i in stemp:
    an_dic[int(i)]+=1

for i,val in an_dic.items():
    print(val)