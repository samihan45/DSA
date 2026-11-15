class Solution {
public:
long long countValidSubstrings(string s) 
{
long long ans = 0;
int lastA = -1;
int lastAB = -1;
int bad = -1;
for(int i=0;i<s.length();i++)
{
if(s[i]=='a')
{
lastA = i;
}
else if(s[i]=='b')
{
if(lastA!=-1)
{
lastAB = lastA;
}
}
else if(s[i]=='c')
{
if(lastAB!=-1)
{
bad = max(bad,lastAB);
}
}
ans += i-bad;
}
return ans;
}
};