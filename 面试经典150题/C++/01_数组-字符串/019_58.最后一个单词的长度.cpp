/*
给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

示例 1：
输入：s = "Hello World"
输出：5
解释：最后一个单词是“World”，长度为 5。

示例 2：
输入：s = "   fly me   to   the moon  "
输出：4
解释：最后一个单词是“moon”，长度为 4。
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = s.size() - 1;
        while(s[index] == ' '){
            index--;
        }
        int wordLength = 0;
        while(index >= 0 && s[index] != ' '){
            wordLength++;
            index--;
        }
        return wordLength;
    }
};