def quick_sort(arr,left,right):
    if left<right:
        pivot=partition(arr,left,right)
        quick_sort(arr,left,pivot-1)
        quick_sort(arr,pivot+1,right)
def partition(arr,left,right):
    i=left
    j=right-1
    pivot=arr[right]
    while i<j:
        while i<right and arr[i]<pivot:
            i=i+1
        while j>left and arr[j]>pivot:
            j=j-1
        if i<j:
            arr[i],arr[j]=arr[j],arr[i]
    if arr[i]>pivot:
        arr[i],arr[right]=arr[right],arr[i]
    return i
arr=[5,465,32,21,1]
quick_sort(arr,0,len(arr)-1)
print(arr)