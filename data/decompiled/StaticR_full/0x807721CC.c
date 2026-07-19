/* Function at 0x807721CC, size=100 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807721CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807721D8
    r31 = r3;
    r7 = *(0 + r3); // lwz @ 0x807721E0
    if (==) goto 0x0x80772274;
    r6 = *(0x10 + r7); // lwz @ 0x807721EC
    r0 = *(0x14 + r7); // lwz @ 0x807721F4
    *(0x24 + r1) = r0; // stw @ 0x807721FC
    r5 = r31 + 0x10; // 0x80772200
    *(0x20 + r1) = r6; // stw @ 0x80772204
    r0 = *(0x18 + r7); // lwz @ 0x80772208
    *(0x28 + r1) = r0; // stw @ 0x8077220C
    FUN_805A4498(r5); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0xc(r31) */ // 0x8077221C
    r3 = *(0 + r31); // lwz @ 0x80772220
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80772224
    /* lfs f0, 0xc(r3) */ // 0x80772228
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077222C
}