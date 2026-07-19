/* Function at 0x805ECA50, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_805ECA50(int r3, int r4, int r5)
{
    /* lis r0, 1 */ // 0x805ECA50
    r5 = *(4 + r3); // lwz @ 0x805ECA54
    r0 = r0 << r4; // slw
    r0 = r5 | r0; // 0x805ECA5C
    *(4 + r3) = r0; // stw @ 0x805ECA60
    return;
}