/* Function at 0x807B82F8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807B82F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B8304
    r31 = r3;
    FUN_807B7144(); // bl 0x807B7144
    FUN_807C0164(); // bl 0x807C0164
    if (!=) goto 0x0x807b8328;
    r3 = r31;
    r4 = r31 + 0x8c; // 0x807B8320
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807B8328
    r31 = *(0xc + r1); // lwz @ 0x807B832C
    return;
}