

//The string contains an arithmetic expression that uses parentheses, including nested ones, to check whether brackets are placed correctly in it."
#include <cstdio>
int IsBalanced(char* p)
{
    int db;
    for(db = 0; *p && db >= 0; ++p)
    {
        if(*p == '(') ++db;
        else if(*p == ')') --db;
    }
    return db;
}
 
int main()
{
    FILE* pf = fopen("1.txt", "r");
    if(pf)
    {
        char buf[BUFSIZ];
        int line, rv;
        for(line = 0; fgets(buf, BUFSIZ, pf); ++line)
        {
            if(rv = IsBalanced(buf))
            {
                printf("Not balanced in line %d, rv is %d\n", line, rv);
                break;
            }
        }
        fclose(pf);
    }
    else perror("fopen() failed");
    return 0;
}
