// Q30
// Given a directed acyclic graph, with n vertices numbered from 0 to n-1, and an array edges where edges[i] = [fromi, toi] represents a directed edge from node fromi to node toi.
// Find the smallest set of vertices from which all nodes in the graph are reachable. It's guaranteed that a unique solution exists.
// Notice that you can return the vertices in any order.

// SOURCE CODE
class Solution {
public:

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int len = edges.size(), temp;
        bool isPres;
        vector <int> res;
        
        for(int i=0; i<len; i++){
            temp = edges[i][0];
            isPres = false;
            for(int j=0; j<len; j++){
                if(temp == edges[j][1]){
                    isPres = true;
                    break;
                }
            }
            if(!isPres){
                res.push_back(temp);
            }
        }
        
        len = res.size();
        if(len == 1){
            return res;
        } else if(len == 2){
            if(res[0] == res[1]){
                res.erase(res.begin());
                return res;
            } else {
                return res;
            }
        } else if(len ==3){
            int a = 0, b=0;
            if(res[a] == res[a+1] || res[a] == res[a+2]){
                res.erase(res.begin());
                b = 1;
            }
            a = res.size() - 3 + b;
            if(res[a] == res[a+1]){
                res.erase(res.begin()+1);
            }
            return res;
        }

        // Removing Duplicates
        for(int i=0; i<len; i++){
            temp = res[i];
            for(int j=i+1; j<len; j++){
                if(temp == res[j]){
                    res.erase(res.begin()+j);
                    len--;
                    j--;
                }
            }
        }
        
        return res;
    }
};