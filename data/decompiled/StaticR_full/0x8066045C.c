/* Function at 0x8066045C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8066045C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x80660468
    *(0xc + r1) = r31; // stw @ 0x8066046C
    r31 = r3;
    *(0x260 + r3) = r0; // stw @ 0x80660474
    r4 = *(0x264 + r3); // lwz @ 0x80660478
    r5 = *(0x64 + r4); // lwz @ 0x8066047C
    if (==) goto 0x0x80660498;
    r7 = r4 + 0x74; // 0x80660488
    /* li r4, 4 */ // 0x8066048C
    /* li r6, -1 */ // 0x80660490
    FUN_80660598(r7, r4, r6); // bl 0x80660598
    /* lis r6, 0 */ // 0x80660498
    r4 = *(0x260 + r31); // lwz @ 0x8066049C
    r3 = r31;
    /* li r5, 0x10 */ // 0x806604A4
    r6 = r6 + 0; // 0x806604A8
    FUN_805E3430(r6, r3, r5, r6); // bl 0x805E3430
}