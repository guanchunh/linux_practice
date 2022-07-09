// declare
struct GraphicsObject;

// an instance  / object from GraphicsObject
struct GraphicsObject x;

int main()
{
    char A;
    char *ptrA = &A;
    char *ptrX = ptrA;
    
    ptrA++;
    ptrA--;

    ptrX = ptrA  + ((int)ptrA * 1);
}