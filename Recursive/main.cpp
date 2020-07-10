//
// Created by YongZhang on 2020/7/7.
//

#include <iostream>
#include <assert.h>
#include <vector>

using namespace std;


class Solution {

private:
    const string letterMap[10] = {
            " ", // 0
            "", // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs", // 7
            "tuv", //8
            "wxyz" //9
    };
    vector<string> res;

private:
    void findCombination(const string &digits, int index, const string &s) {
        if (index == digits.size()) {
            res.push_back(s);
            return;
        }
        char c = digits[index];
        assert(c >= '0' && c <= '9' && c != '1');
        string letters = letterMap[c - '0']; // 找到当前数据字符对应的字符
        for (int i = 0; i < letters.length(); i++) {
            findCombination(digits, index + 1, s + letters[i]);
        }
        return;
    }

public:
    vector<string> letterCombinations(string digits) {
        res.clear();
        if (digits == ""){
            return res;
        }
        findCombination(digits, 0, "");
        return res;
    }
};

int main() {
    return 0;
}

