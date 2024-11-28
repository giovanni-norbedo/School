# binary search

from typing import List


def binary_search(arr: List[int], target: int) -> int:
    # prendo il primo e l'ultimo indice dell'array
    left, right = 0, len(arr) - 1

    # quando l'indice di sinistra è minore di quello a destra
    while left <= right:
        # prendo l'indice nel mezzo
        mid = (left + right) // 2

        # se è uguale al target, ritorno la posizione
        if arr[mid] == target:
            return mid
        # se è minore del target, left diventa mid + 1
        # quindi cerco target nella metà destra dell'array
        elif arr[mid] < target:
            left = mid + 1
        # se è maggiore del target, right diventa mid - 1
        # quindi cerco target nella metà sinistra dell'array
        elif arr[mid] > target:
            right = mid - 1
    
    # se left > right allora non ho trovato il target
    return -1


arr = [-2, 1, 4, 5, 8, 11, 12, 15, 19, 20, 21]
search = 4
result = binary_search(arr, search)

print(f"\nArray: {arr} of size {len(arr)}")
print(f"Target {search} found at index {result}")