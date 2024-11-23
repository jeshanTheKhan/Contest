def find_array(t, queries):
    results = []

    for _ in range(t):
        x = queries[_]
        result = []

        k = 1
        while x > 0:
            if x >= k:
                result.extend([k] * k)
                x -= k
            else:
                result.extend([x] * x)
                x = 0
            k += 1

        if len(result) > 200:
            results.append([-1])
        else:
            results.append([len(result)] + result)

    return results

def main():
    t = int(input())
    queries = [int(input()) for _ in range(t)]

    results = find_array(t, queries)

    for result in results:
        print(*result)

if __name__ == "__main__":
    main()
