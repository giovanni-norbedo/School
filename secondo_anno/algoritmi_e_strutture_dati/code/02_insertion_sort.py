# insertion sort

from typing import List


def insertion_sort(arr: List[int]) -> List[int]:
    # per ogni elemento dell'array
    for i in range(len(arr)):
        j = i
        # finché j è maggiore di 0 e l'elemento precedente è maggiore dell'elemento corrente
        while j > 0 and arr[j - 1] > arr[j]:
            # scambio i due elementi
            arr[j], arr[j - 1] = arr[j - 1], arr[j]
            j -= 1
    return arr


old = [2, 4, -3, 0, 11]
new = old.copy()
result = insertion_sort(new)

print(f"\nArray: {old} of size {len(old)}")
print(f"Sorted array: {new}")