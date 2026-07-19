/* Function at 0x806AEAC8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806AEAC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AEAD4
    r31 = r3;
    FUN_8064A340(); // bl 0x8064A340
    if (!=) goto 0x0x806aeb14;
    r3 = r31 + 0x98; // 0x806AEAE8
    /* li r4, 4 */ // 0x806AEAEC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r3 = *(0x38 + r3); // lwz @ 0x806AEAF4
    r0 = r3 + -1; // 0x806AEAF8
    if (>) goto 0x0x806aeb14;
    r3 = r31;
    /* li r4, 0x40 */ // 0x806AEB08
    /* li r5, -1 */ // 0x806AEB0C
    FUN_806A03F0(r3, r4, r5); // bl 0x806A03F0
    r0 = *(0x14 + r1); // lwz @ 0x806AEB14
    r31 = *(0xc + r1); // lwz @ 0x806AEB18
    return;
}