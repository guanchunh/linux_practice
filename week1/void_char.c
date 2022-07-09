int main()
{
    char *X = 0;
    void *Y = 0;
    char c = *X;
    char d = *Y; //void has no clear space and cannot be taken out
}