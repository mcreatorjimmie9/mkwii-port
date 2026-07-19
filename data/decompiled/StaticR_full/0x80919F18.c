/* Function at 0x80919F18, size=72 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80919F18(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x80919F20
    /* li r6, 1 */ // 0x80919F24
    *(0x24 + r1) = r0; // stw @ 0x80919F28
    /* li r0, 0 */ // 0x80919F2C
    r5 = *(0 + r4); // lwz @ 0x80919F34
    *(0x10 + r1) = r5; // stw @ 0x80919F3C
    *(0xc + r1) = r0; // stw @ 0x80919F44
    *(8 + r1) = r0; // stb @ 0x80919F48
    FUN_808A1444(r4, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80919F50
    return;
}