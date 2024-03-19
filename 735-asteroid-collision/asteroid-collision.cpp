class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int asteroid : asteroids){
            bool exploded = false;
            while(!st.empty() && st.top() > 0 && asteroid < 0){
                if(abs(asteroid) > st.top()){
                    st.pop();
                }
                else if(abs(asteroid) == st.top()){
                    exploded = true;
                    st.pop();
                    break;
                }
                else {
                    exploded = true;
                    break;
                }
            }
            if(!exploded){
                st.push(asteroid);
            }
        }
        vector<int> result(st.size());
        for(int i=result.size()-1;i>=0;i--){
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};