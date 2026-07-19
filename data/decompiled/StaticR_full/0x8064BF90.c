/* Function at 0x8064BF90, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8064BF90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x8064BF98
    *(0x14 + r1) = r0; // stw @ 0x8064BF9C
    *(0xc + r1) = r31; // stw @ 0x8064BFA0
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x8064BFA8
    *(0x13ac + r3) = r4; // stw @ 0x8064BFAC
    if (!=) goto 0x0x8064bfd4;
    /* li r4, 0 */ // 0x8064BFB8
    r3 = r3 + 0x3dc; // 0x8064BFBC
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31 + 0x11f8; // 0x8064BFC4
    /* li r4, 0x13c4 */ // 0x8064BFC8
    /* li r5, 0 */ // 0x8064BFCC
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x8064BFD4
    r31 = *(0xc + r1); // lwz @ 0x8064BFD8
    return;
}