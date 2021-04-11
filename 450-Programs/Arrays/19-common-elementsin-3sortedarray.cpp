//450 -19
// finding element in set: https://thispointer.com/c-how-to-check-if-a-set-contains-an-element-setfind-vs-setcount/

class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        set<int> s1;
        set<int> s2;
        set<int> s3;
        vector<int> vect;
        for (int i = 0; i < n1; i++)
            s1.insert(A[i]);

        for (int i = 0; i < n2; i++)
            s2.insert(B[i]);

        for (int i = 0; i < n3; i++)
            s3.insert(C[i]);

        for (int i = 0; i < n1; i++)
        {
            // auto it1 = s1.find(A[i]);
            // auto it2 = s2.find(B[i]);
            // auto it3 = s3.find(C[i]);

            if ((s1.count(A[i]) != 0) && (s2.count(A[i]) != 0) && (s3.count(A[i]) != 0))
            {
                auto it4 = find(vect.begin(), vect.end(), A[i]);
                if (it4 == vect.end())
                    vect.push_back(A[i]);
            }
        }
        return vect;
    }
};