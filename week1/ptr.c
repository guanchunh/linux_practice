int main()
{
    char A;
    char *ptrA = &A;
    char *ptrX = ptrA;
    char C[]; //compiler error
    ptrA++;
    ptrA--;

    ptrX = ptrA  + ((int)ptrA * 1);
}