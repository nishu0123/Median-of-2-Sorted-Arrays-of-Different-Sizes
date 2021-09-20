// here i am sharing the code of the question " Median of 2 Sorted Arrays of Different Sizes " this question on gfg in POTD section 19 sept 2021

//i have done my code in c++

  double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        double ans = 0;
        int i = 0;
        int j = 0;
        int n1 = array1.size();
        int n2 = array2.size();
        int k = (n1 + n2)/2;
        int cnt = 0;
        int first = 0;
        int second = 0;
        while(i<n1 && j<n2)
        {
            if(array1[i] > array2[j])
            {
              
                cnt++;
                if(cnt == k)
                {
                    first = array2[j];
                }
                if(cnt == k+1)
                {
                    second = array2[j];
                    break;
                }
                  j++;
                
            }
            else{
            
                cnt++;
                if(cnt == k)
                {
                    first = array1[i];
                }
                if(cnt == k+1)
                {
                    second = array1[i];
                    break;
                }
                    i++;
            }
        }
        while(i < n1)
        {
           
                cnt++;
                if(cnt == k)
                {
                    first = array1[i];
                }
                if(cnt == k+1)
                {
                    second = array1[i];
                    break;
                }
                 i++;
            
        }
        while(j < n2)
        {
         
             cnt++;
                if(cnt == k)
                {
                    first = array2[j];
                }
                if(cnt == k+1)
                {
                    second = array2[j];
                    break;
                }
                   j++;
        }
        if((n1 + n2)%2 == 0)
        {
            return (double)(first + second)/2;
        }
        else{
            return (double)second;
        }
    }
    // if you have better approach than we would love to see  your approach so feel free to share your approach .
