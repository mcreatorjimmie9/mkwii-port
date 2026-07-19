/* Function at 0x80666B5C, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80666B5C(int r3, int r4)
{
    r12 = *(4 + r3); // lwzu @ 0x80666B5C
    /* li r4, 1 */ // 0x80666B60
    r12 = *(0x38 + r12); // lwz @ 0x80666B64
    /* mtctr r12 */ // 0x80666B68
    /* bctr  */ // 0x80666B6C
}