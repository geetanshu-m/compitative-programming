#include <algorithm>
    #include <iostream>
    #include <vector>
    using namespace std;
     
    #define forl(i,s,e) for (int i = int(s); i < int(e); i++)
     
    int minsum(vector<int> v) {
        return min_element(v.begin(), v.end())-v.begin()+1;
    }
     
    int main() {
        int ntests;
        cin>>ntests;
        forl(i,0,ntests) {
            int n;
            cin>>n;
            vector<int> input(n);
            forl(j,0,n)
                cin>>input[j];
            cout<<minsum(input)<<endl;
        }    
    	return 0;
    }
