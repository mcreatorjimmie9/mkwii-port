/* Function at 0x80918220, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80918220(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x80918228
    /* lis r4, 0 */ // 0x8091822C
    *(0x24 + r1) = r0; // stw @ 0x80918230
    r5 = r5 + 0; // 0x80918234
    /* li r0, 0 */ // 0x80918238
    r8 = *(0 + r4); // lwz @ 0x80918240
    r5 = *(0 + r5); // lwz @ 0x80918248
    /* li r6, 1 */ // 0x8091824C
    *(0x10 + r1) = r5; // stw @ 0x80918250
    *(0xc + r1) = r8; // stw @ 0x80918258
    *(8 + r1) = r0; // stb @ 0x8091825C
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80918264
    return;
}