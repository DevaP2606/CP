#include <stdio.h>
#include <math.h>

int count_dig(int a)
{
    int d = 0;
    while (a != 0)
    {
        d++;
        a /= 10;
    }
    return d;
}

void sep_dig(int a, int arr[], int d)
{
    for (int i = 0; i < d; i++)
    {
        arr[i] = a % 10; // Store the last digit
        a /= 10;         // Remove the last digit
    }
}

int main()
{
    int n, temp, dcoun, sum;
    int arm[100];
    int j = 0;
    for (int k = 100; k < 10000; k++)
    {
        
        sum = 0;
        temp = k;
        dcoun = count_dig(k);
        int digits[dcoun];

        sep_dig(k, digits, dcoun);

        // Calculate the Armstrong sum
        for (int i = 0; i < dcoun; i++)
        {
            sum += pow(digits[i], dcoun);
        }

      
        if (temp == sum)
        {
            arm[j] = temp;
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", arm[i]);
    }

    return 0;
}
