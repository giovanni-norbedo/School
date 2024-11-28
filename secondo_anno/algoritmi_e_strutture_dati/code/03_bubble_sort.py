# bubble sort

from typing import List


def bubble_sort(arr: List[int]) -> List[int]:
    # per ogni elemento dell'array al rovescio
    for i in range(len(arr) - 1, -1, -1):
        # per ogni elemento dell'array fino a i - 1
        for j in range(i - 1):
            # se l'elemento corrente è maggiore di quello successivo
            if arr[j] > arr[j + 1]:
                # scambio i due elementi
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


old = [2, 4, -3, 0, 3]
new = old.copy()
result = bubble_sort(new)

print(f"\nArray: {old} of size {len(old)}")
print(f"Sorted array: {new}")