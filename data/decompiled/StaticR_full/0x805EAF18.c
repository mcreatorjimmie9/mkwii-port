/* Function at 0x805EAF18, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805EAF18(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805EAF28
    *(0x18 + r1) = r30; // stw @ 0x805EAF2C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805EAF34
    r29 = r3;
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    r3 = r29 + r0; // 0x805EAF44
    r3 = *(4 + r3); // lwz @ 0x805EAF48
    FUN_805ECA50(r4); // bl 0x805ECA50
    r31 = r31 + 1; // 0x805EAF50
    if (<) goto 0x0x805eaf3c;
    r0 = *(0x24 + r1); // lwz @ 0x805EAF5C
    r31 = *(0x1c + r1); // lwz @ 0x805EAF60
    r30 = *(0x18 + r1); // lwz @ 0x805EAF64
    r29 = *(0x14 + r1); // lwz @ 0x805EAF68
    return;
}