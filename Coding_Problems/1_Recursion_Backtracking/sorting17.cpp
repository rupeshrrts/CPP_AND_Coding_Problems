// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the array : ";
//     cin >> n;

//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         for (int j = i + 1; j < n; j++)
//         {
//             /* code */
//             if (arr[i] > arr[j])
//             {
//                 /* code */
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout << arr[i] << " ";
//     }
// }

// // using swap function
// #include <iostream>
// using namespace std;

// bool KyaSwapKrnaHai(int x, int y)
// {
//     if (x > y)
//     {
//         /* code */
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cout << "Enter the array : ";
//     cin >> n;

//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         for (int j = i + 1; j < n; j++)
//         {
//             /* code */
//             if (KyaSwapKrnaHai(arr[i], arr[j]))
//             {
//                 /* code */
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout << arr[i] << " ";
//     }
// }

// sorting using vector

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool KyaSwapKrnaHai(int x, int y)
// {
//     if (x > y)
//     {
//         /* code */
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cout << "Enter the array : ";
//     cin >> n;

//     vector<pair<int, int>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> v[i].first >> v[i].second;
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     /* code */
//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         /* code */
//     //         if (KyaSwapKrnaHai(v[i], v[j]))
//     //         {
//     //             /* code */
//     //             swap(v[i], v[j]);
//     //         }
//     //     }
//     // }
//     sort(v.begin(), v.end());
//     cout << "Output is  ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout << v[i].first << " " << v[i].second << endl;
//     }
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool KyaSwapKrnaHai(pair<int, int> x, pair<int, int> y)
// {
//     if (x > y)
//     {
//         /* code */
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cout << "Enter the array : ";
//     cin >> n;

//     vector<pair<int, int>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> v[i].first >> v[i].second;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         /* code */s
//         for (int j = i + 1; j < n; j++)
//         {
//             /* code */
//             if (KyaSwapKrnaHai(v[i], v[j]))
//             {
//                 /* code */
//                 swap(v[i], v[j]);
//             }
//         }
//     }
//     // sort(v.begin(), v.end());
//     cout << "Output is  ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout << v[i].first << " " << v[i].second << endl;
//     }
// }

// but i want first asending  order and seconed is decending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool KyaSwapKrnaHai(pair<int, int> x, pair<int, int> y)
{
    if (x.first != y.second)
    {
        /* code */
        if (x.first > y.first)
        {
            return true;
        }
        return false;
    }
    else
    {
        if (x.second < y.second)
        {
            return true;
        }
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter the array : ";
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (KyaSwapKrnaHai(v[i], v[j]))
            {
                /* code */
                swap(v[i], v[j]);
            }
        }
    }
    // sort(v.begin(), v.end());
    cout << "Output is  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
