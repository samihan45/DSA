
class Solution {
public:
vector<vector<string>> findMismatchedSegments(string s1, string s2)
    {

vector<vector<string>> ans;

int i = 0;
int n = s1.length();
while(i<n)
{
if(s1[i]==s2[i])
{i++;
continue;
}
int start = i;
while(i<n && s1[i]!=s2[i])
{
i++;
}

string sub1 = s1.substr (start,i-start);
string sub2 = s2.substr (start,i-start);

ans.push_back({sub1,sub2});
}

return ans;
}
};
