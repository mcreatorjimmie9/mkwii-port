/* Function at 0x8077A5AC, size=88 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8077A5AC(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x8077A5B4
    /* lis r7, 0 */ // 0x8077A5B8
    *(0x24 + r1) = r0; // stw @ 0x8077A5BC
    /* li r6, 2 */ // 0x8077A5C4
    r10 = *(0 + r5); // lwzu @ 0x8077A5C8
    r8 = *(0 + r7); // lwzu @ 0x8077A5CC
    r9 = *(4 + r5); // lwz @ 0x8077A5D0
    r0 = *(4 + r7); // lwz @ 0x8077A5D8
    /* li r7, 0 */ // 0x8077A5DC
    *(0x10 + r1) = r10; // stw @ 0x8077A5E0
    *(0x14 + r1) = r9; // stw @ 0x8077A5E4
    *(8 + r1) = r8; // stw @ 0x8077A5E8
    *(0xc + r1) = r0; // stw @ 0x8077A5EC
    FUN_808A1444(r7); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x8077A5F4
    return;
}