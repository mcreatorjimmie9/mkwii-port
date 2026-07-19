/* Function at 0x8080B5C0, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8080B5C0(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x8080B5C8
    /* lis r4, 0 */ // 0x8080B5CC
    *(0x24 + r1) = r0; // stw @ 0x8080B5D0
    r5 = r5 + 0; // 0x8080B5D4
    /* li r0, 0 */ // 0x8080B5D8
    r8 = *(0 + r4); // lwz @ 0x8080B5E0
    r5 = *(0 + r5); // lwz @ 0x8080B5E8
    /* li r6, 1 */ // 0x8080B5EC
    *(0x10 + r1) = r5; // stw @ 0x8080B5F0
    *(0xc + r1) = r8; // stw @ 0x8080B5F8
    *(8 + r1) = r0; // stb @ 0x8080B5FC
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x8080B604
    return;
}