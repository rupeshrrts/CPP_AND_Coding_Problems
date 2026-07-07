

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int sum = 0;
//         int a, b;
//         cin >> a >> b;

//         for (int i = a; i < b; i++)
//         {
//             sum = sum + arr[i];
//         }
//         cout << sum;
//     }
// }

// But in 1 sec 10 ^ 8 instruction executre hote hai

//                       and in this Q = 10 ^ 5 and n = 10 ^ 4;

// so total instruction 10 ^ 9 hoga

//     if 10 ^
//     9 / 10 ^ 8 = 10 sec time lgega but in question bola hai 7 sec se jyada time nhi lgna chahiye

// so wee need to follow another approach

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    int *pre_sum = new int[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            pre_sum[i] = arr[i];
        }
        else
        {
            pre_sum[i] = pre_sum[i - 1] + arr[i];
        }
    }

    while (q--)
    {
        int sum;
        int a, b;
        cin >> a >> b;

        sum = pre_sum[b];

        // for (int i = a; i < b; i++)
        // {
        //     sum = sum + arr[i];
        // }

        if (a > 0)
        {
            sum = sum - pre_sum[a - 1];
        }
        cout << sum;
    }
}
