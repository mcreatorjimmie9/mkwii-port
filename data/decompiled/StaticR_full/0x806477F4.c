/* Function at 0x806477F4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806477F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806477FC
    /* li r5, 5 */ // 0x80647800
    *(0x14 + r1) = r0; // stw @ 0x80647804
    r4 = r4 + 0; // 0x80647808
    /* li r6, 4 */ // 0x8064780C
    *(0xc + r1) = r31; // stw @ 0x80647810
    r31 = r3;
    FUN_805F1C60(r4, r6); // bl 0x805F1C60
    /* lis r3, 0 */ // 0x8064781C
    /* li r0, 0 */ // 0x80647820
    r3 = r3 + 0; // 0x80647824
    *(0 + r31) = r3; // stw @ 0x80647828
    r3 = r31;
    *(0x98 + r31) = r0; // stb @ 0x80647830
    *(0x9a + r31) = r0; // sth @ 0x80647834
    *(0x9c + r31) = r0; // sth @ 0x80647838
    r31 = *(0xc + r1); // lwz @ 0x8064783C
    r0 = *(0x14 + r1); // lwz @ 0x80647840
    return;
}