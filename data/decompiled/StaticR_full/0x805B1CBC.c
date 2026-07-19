/* Function at 0x805B1CBC, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_805B1CBC(int r3)
{
    r3 = *(4 + r3); // lwz @ 0x805B1CBC
    r12 = *(0 + r3); // lwz @ 0x805B1CC0
    r12 = *(0x1c + r12); // lwz @ 0x805B1CC4
    /* mtctr r12 */ // 0x805B1CC8
    /* bctr  */ // 0x805B1CCC
}