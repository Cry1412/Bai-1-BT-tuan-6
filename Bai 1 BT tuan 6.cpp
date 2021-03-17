void reverse(char* s)
{
    char* left, * right, ch;
    left = s;
    right = s + strlen(s) - 1;
    while (left < right) {
        ch = *right;
        *right = *left;
        *left = ch;
        left++;
        right--;
    }
}
