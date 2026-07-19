/* Function at 0x805ECA18, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_805ECA18(int r3, int r4, int r5)
{
    /* lis r0, 1 */ // 0x805ECA18
    r5 = *(4 + r3); // lwz @ 0x805ECA1C
    r0 = r0 << r4; // slw
    /* andc r0, r5, r0 */ // 0x805ECA24
    *(4 + r3) = r0; // stw @ 0x805ECA28
    return;
}