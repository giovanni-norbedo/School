# selection sort

from typing import List


def selection(arr: List[int]) -> List[int]:
    # per ogni elemento dell'array al rovescio
    for i in range(len(arr) - 1, -1, -1):
        # prendo l'indice massimo
        max_index = i
        # per ogni elemento dell'array fino al penultimo
        for j in range(i - 1):
            # se l'elemento corrente è maggiore di quello massimo
            if arr[j] > arr[max_index]:
                # il massimo diventa l'elemento corrente
                max_index = j
        # scambio i due elementi
        arr[i], arr[max_index] = arr[max_index], arr[i]
    return arr


old = [2, 4, -3, 0, 3]
new = old.copy()
result = selection(new)

print(f"\nArray: {old} of size {len(old)}")
print(f"Sorted array: {new}")