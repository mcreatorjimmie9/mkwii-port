/* Function at 0x8068334C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8068334C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068335C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80683364
    r30 = r3;
    if (==) goto 0x0x80683398;
    /* li r4, -1 */ // 0x80683370
    r3 = r3 + 0x58; // 0x80683374
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x80683380
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80683398;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8068339C
    r30 = *(8 + r1); // lwz @ 0x806833A0
    r0 = *(0x14 + r1); // lwz @ 0x806833A4
    return;
}