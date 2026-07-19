/* Function at 0x8080A92C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8080A92C(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x8080A934
    /* lis r4, 0 */ // 0x8080A938
    *(0x24 + r1) = r0; // stw @ 0x8080A93C
    r5 = r5 + 0; // 0x8080A940
    /* li r8, 0 */ // 0x8080A944
    r0 = *(0 + r4); // lbz @ 0x8080A94C
    r5 = *(0 + r5); // lwz @ 0x8080A954
    /* li r6, 1 */ // 0x8080A958
    *(0x10 + r1) = r5; // stw @ 0x8080A95C
    *(0xc + r1) = r8; // stw @ 0x8080A964
    *(8 + r1) = r0; // stb @ 0x8080A968
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x8080A970
    return;
}