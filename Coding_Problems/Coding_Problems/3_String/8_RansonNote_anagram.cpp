// // 383. Ransom Note

// class Solution
// {
// public:
//     bool canConstruct(string ransomNote, string magazine)
//     {

//         if (ransomNote.length() > magazine.length())
//         {
//             return false;
//         }

//         int count[256] = {0};

//         for (int i = 0; i < magazine.length(); i++)
//         {
//             count[magazine[i]]++;
//         }

//         for (int i = 0; i < ransomNote.length(); i++)
//         {
//             count[ransomNote[i]]--;
//         }

//         for (int i = 0; i < 256; i++)
//         {
//             if (count[i] < 0)
//                 return false;
//         }

//         return true;
//     }
// };