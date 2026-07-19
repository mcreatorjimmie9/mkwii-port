/* Function at 0x806C3608, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806C3608(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C3618
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C3620
    r30 = r3;
    if (==) goto 0x0x806c3654;
    /* li r4, -1 */ // 0x806C362C
    r3 = r3 + 0x58; // 0x806C3630
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806C363C
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c3654;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C3658
    r30 = *(8 + r1); // lwz @ 0x806C365C
    r0 = *(0x14 + r1); // lwz @ 0x806C3660
    return;
}