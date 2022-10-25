f __name__ == '__main__':
    n = int(input())
    g=[]
    for _ in range(n):
        scores=input().split()
        g.append(scores)
        scores=[]
    query_name = input()
    for i in range(n):
        if query_name==g[i][0]:
            a=(float(g[i][1])+float(g[i][2])+float(g[i][3]))/3.0
            a="{:.2f}".format(a)
    print(a)
