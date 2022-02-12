// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int h, n;

    int* arr1;
    int* arr2;

    h = 0;
    n = 0;

    int lenght1, lenght2, maxx = 0;

    lenght1 = (a / 2) + 1;
    lenght2 = (b / 2) + 1;

    arr1 = new int[lenght1];
    arr2 = new int[lenght2];


    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0) {
            arr1[h++] = i;
        }
    }

    for (int j = 1; j <= b; j++)
    {
        if (b % j == 0) {
            arr2[n++] = j;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                if (arr1[i] > maxx) {
                    maxx = arr1[i];
                }
            }
        }
    }

    delete[]arr1;
    delete[]arr2;
    return maxx;
}
