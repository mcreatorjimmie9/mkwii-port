/* Function at 0x80745658, size=136 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80745658(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* li r5, 3 */ // 0x80745660
    *(0x64 + r1) = r0; // stw @ 0x80745664
    *(0x5c + r1) = r31; // stw @ 0x80745668
    r31 = r3;
    r4 = r31;
    FUN_805C70D8(r3, r4); // bl 0x805C70D8
    r4 = r31;
    /* li r5, 0 */ // 0x80745684
    FUN_805C70D8(r4, r4, r3, r5); // bl 0x805C70D8
    r4 = r31;
    /* li r5, 3 */ // 0x80745694
    FUN_805C70D8(r5, r4, r3, r5); // bl 0x805C70D8
    r4 = r31;
    /* li r5, 1 */ // 0x807456A4
    FUN_805C70D8(r5, r4, r3, r5); // bl 0x805C70D8
    r4 = r31;
    /* li r5, 3 */ // 0x807456B4
    FUN_805C70D8(r5, r4, r3, r5); // bl 0x805C70D8
    r4 = r31;
    /* li r5, 2 */ // 0x807456C4
    FUN_805C70D8(r5, r4, r3, r5); // bl 0x805C70D8
    r0 = *(0x64 + r1); // lwz @ 0x807456CC
    r31 = *(0x5c + r1); // lwz @ 0x807456D0
    return;
}