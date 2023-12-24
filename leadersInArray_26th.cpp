#include <iostream>

/*
                        Q. Leaders in an array

                    explanation - everything on the right should b smaller
                                    given array ->  arr[] = {10, 22, 12, 3, 0, 6}
                                                we can say 22 is the leader bcz all the right elements are smaller
                                                similarly 12 is also a leader
                                                          3 is not
                                                          6 is also the leader,  last will always be a leader
                                                so the answer -> {22, 12, 6}

                Brute force -  we will an element and linear search the right elements

for(i=0; i<n; i++)
{
    leader = true;
    for(j=i; j<n; j++)
    {
        if(a[j] > a[i])
        {
            leader = false;
            break;
        }
    }
    if(leader == true)
        ans.add(a[i]);
}

                TC - O(N^2)
                SC - O(N)


                Optimal sol -  we will take an element and check if largest element on the right is smaller than the 
                                element we have taken then the taken element is leader
                        for exa - we take 22 and greatest element on right is 12, if 22 is greater than 12, it means
                                    12 is a leader

                                we will be doing this from the right of the array, we also declare a maximum element
                                which will get updated everytime we get a greatest nmbr

        Actual code
vector<int> superiorElement(vector<int> &a)
{
    vector<int> ans;                        // O(N)
    int maxi = INT_MIN;
    int n = a.size();
    for(int i = n-1; i >= 0; i--)           // O(N)
    {
        if(a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        // keep trak of right max
        maxi = max(maxi, a[i]);
    }
    
    sort(ans.begin(), ans.end());           // O(N * log N)
    return ans;
}
*/

int main()
{
    std::cout << "Hello World!\n";
}