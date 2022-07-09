int main()
{
    char A;
    char *ptrA = &A;
    char *ptrX = ptrA;
    
    ptrA++;
    ptrA--;

    ptrX = ptrA * 1; //compilr error
}