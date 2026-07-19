/* Function at 0x808A94D0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808A94D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808A94E4
    r30 = r3;
    FUN_808A8B3C(); // bl 0x808A8B3C
    /* lis r4, 0 */ // 0x808A94F0
    r3 = r30;
    r4 = r4 + 0; // 0x808A94F8
    *(0 + r30) = r4; // stw @ 0x808A94FC
    r4 = *(0 + r31); // lwz @ 0x808A9500
    r0 = *(0x32 + r4); // lha @ 0x808A9504
    *(0xc8 + r30) = r0; // sth @ 0x808A9508
    r31 = *(0xc + r1); // lwz @ 0x808A950C
    r30 = *(8 + r1); // lwz @ 0x808A9510
    r0 = *(0x14 + r1); // lwz @ 0x808A9514
    return;
}