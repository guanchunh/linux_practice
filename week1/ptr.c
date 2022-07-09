int main()
{
    char A;
    char *ptrA = &A;
    char *ptrX = ptrA;
    
    ptrA++;
    ptrA--;

    ptrX = ptrA  + ((int)ptrA * 1);
}