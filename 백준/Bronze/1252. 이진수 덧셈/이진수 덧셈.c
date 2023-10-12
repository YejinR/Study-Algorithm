#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], result[1000];
    scanf("%s %s", s1, s2);
    
    int start1 = strlen(s1) - 1;
    int start2 = strlen(s2) - 1;
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == '1') {
            start1 = i;
            break;
        }
    }
    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] == '1') {
            start2 = i;
            break;
        }
    }
    
    int end1 = strlen(s1) - 1;
    int end2 = strlen(s2) - 1;
    int carry = 0;
    int resultIdx = 0;
    while (1) {
        int tmp = (s1[end1] - '0') + (s2[end2] - '0') + carry;
        carry = tmp / 2;
        result[resultIdx] = (tmp % 2) + '0';
        
        end1--;
        end2--;
        resultIdx++;
        
        if (end1 + 1 == start1)
            break;
        if (end2 + 1 == start2)
            break;
    }
    
    for (; start1 != end1 + 1; end1--) {
        int tmp = (s1[end1] - '0') + carry;
        carry = tmp / 2;
        result[resultIdx] = (tmp % 2) + '0';
        resultIdx++;
    }
    for (; start2 != end2 + 1; end2--) {
        int tmp = (s2[end2] - '0') + carry;
        carry = tmp / 2;
        result[resultIdx] = (tmp % 2) + '0';
        resultIdx++;
    }
    
    if (carry == 1) {
        result[resultIdx] = carry + '0';
        resultIdx++;
    }
    
    result[resultIdx] = '\0';
    
    // 문자열 뒤집기
    int len = strlen(result);
    for (int i = 0; i < len / 2; i++) {
        char temp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = temp;
    }
    
    printf("%s", result);
    
    return 0;
}
