class Solution {
    unordered_map<string, string> urlMap;
    int count;

    string toBase62(int num){
        string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result;
        while(num > 0){
            result = chars[num % 62] + result;
            num /= 62;
        }
        return result;
    }
public:
    Solution() : count(0) {}

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string code = toBase62(count++);
        urlMap[code] = longUrl;
        string base = "http://tinyurl.com/";
        return base + code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string code = shortUrl.substr(shortUrl.find_last_of('/') + 1);
        return urlMap.count(code) ? urlMap[code] : "";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));