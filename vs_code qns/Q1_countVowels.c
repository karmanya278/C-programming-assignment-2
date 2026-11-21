#include <stdio.h>
#include <ctype.h>
int main() {
    int v = 0, c = 0, d = 0, s = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isdigit(ch)) d++;
        else if (isspace(ch)) s++;
        else if (isalpha(ch)) {
            char l = tolower(ch);
            if (l=='a' || l=='e' || l=='i' || l=='o' || l=='u') v++;
            else c++;
        }
    }
    printf("%d %d %d %d\n", v, c, d, s);
    return 0;
}
