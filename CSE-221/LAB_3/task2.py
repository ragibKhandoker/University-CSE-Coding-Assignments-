def find_max(arr,left,right):
    if left == right:
        return arr[left]
    mid = (right + left)//2
    max_left = find_max(arr,left,mid)
    max_right = find_max(arr,mid+1,right)
    return max(max_left,max_right)


def main():
    c1 = int(input("Enter array length: "))
    arr = []
    i=0
    while(i<c1):
        print("Enter array elements: ")
        x1 = int(input())
        arr.append(x1)
        i+=1
    print("The array is: ")
    j=0
    while(j<c1):
        print(arr[j],end=" ")
        j+=1
    print("\nMaximum value:", find_max(arr,0,c1-1))
if __name__ == "__main__":
    main()
