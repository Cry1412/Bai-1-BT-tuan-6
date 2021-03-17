void rFilter(char* s) {
    char* last = s + strlen(s) - 1;
    while (last >= s && !('a' <= *(last) && *(last) <= 'z' || 'A' <= *(last) && *(last) <= 'Z')) {
        *(last) = '_';
        last--;
    }
}
