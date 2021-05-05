class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int>A(deck.size(),0);
        sort(deck.begin(),deck.end());
        int j=0;
        int count=0;
        int size=deck.size();
        for(int i=0;i<size;i++)
        {
            count=0;
            while(A[j%size]!=0)
            {
                if(j==size)
                      {j=0;}
                j++;
            }
            A[j]=deck[i];
            for(int k=0;k<size;k++)
            {
                if(A[k]==0)
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count!=size)
            {
               while(A[j%size]!=0)
                {
                   if(j==size)
                      {j=0;}
                   j++;
               }
            j=j+1;
            }
            
        }
        return A;
        
    }
};
