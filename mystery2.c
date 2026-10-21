/* Binary Puzzle 2 (slide 31) */
int mystery2(char *s) {
    int a = 0;
    while(s[a]) {
        a = a + 1;
    }
    return a;
}
