/* Function at 0x807113CC, size=88 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807113CC(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x807113D4
    /* lis r7, 0 */ // 0x807113D8
    *(0x24 + r1) = r0; // stw @ 0x807113DC
    /* li r6, 2 */ // 0x807113E4
    r10 = *(0 + r5); // lwzu @ 0x807113E8
    r8 = *(0 + r7); // lwzu @ 0x807113EC
    r9 = *(4 + r5); // lwz @ 0x807113F0
    r0 = *(4 + r7); // lwz @ 0x807113F8
    /* li r7, 0 */ // 0x807113FC
    *(0x10 + r1) = r10; // stw @ 0x80711400
    *(0x14 + r1) = r9; // stw @ 0x80711404
    *(8 + r1) = r8; // stw @ 0x80711408
    *(0xc + r1) = r0; // stw @ 0x8071140C
    FUN_808A1444(r7); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80711414
    return;
}