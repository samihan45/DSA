class Solution {
public:
bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) 
{
vector<int> t;
vector<int> c;
vector<int> cnt;
for(int i=0;i<types.size();i++)
{
int x = types[i];
int y = colors[i];

if(t.size()>0 && t.back()==x && c.back()==y){
cnt.back()++;
}
else{
t.push_back(x);
c.push_back(y);
cnt.push_back(1);
}
if(cnt.back()==groupSize[x])
{
t.pop_back();
c.pop_back();
cnt.pop_back();
}
}
if(t.size()==0)
{
return true;
}
return false;
}
};
