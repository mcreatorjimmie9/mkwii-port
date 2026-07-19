/* Function at 0x806AE614, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806AE614(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AE624
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AE62C
    r30 = r3;
    if (==) goto 0x0x806ae678;
    /* li r4, -1 */ // 0x806AE638
    r3 = r3 + 0x1d0; // 0x806AE63C
    FUN_8064ED24(r4, r3); // bl 0x8064ED24
    r3 = r30 + 0x54; // 0x806AE644
    /* li r4, -1 */ // 0x806AE648
    FUN_8064EE50(r4, r3, r3, r4); // bl 0x8064EE50
    r3 = r30 + 0x44; // 0x806AE650
    /* li r4, -1 */ // 0x806AE654
    FUN_80668158(r3, r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806AE660
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806ae678;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AE67C
    r30 = *(8 + r1); // lwz @ 0x806AE680
    r0 = *(0x14 + r1); // lwz @ 0x806AE684
    return;
}