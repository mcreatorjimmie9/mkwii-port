/* Function at 0x805ECA00, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_805ECA00(int r3, int r4, int r5)
{
    /* lis r0, 1 */ // 0x805ECA00
    r5 = *(4 + r3); // lwz @ 0x805ECA04
    r0 = r0 << r4; // slw
    r0 = r5 | r0; // 0x805ECA0C
    *(4 + r3) = r0; // stw @ 0x805ECA10
    return;
}