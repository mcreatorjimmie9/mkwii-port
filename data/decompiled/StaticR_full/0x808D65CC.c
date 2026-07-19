/* Function at 0x808D65CC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808D65CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808D65DC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808D65E4
    r30 = r3;
    if (==) goto 0x0x808d6634;
    /* addic. r3, r3, 0x19c */ // 0x808D65F0
    if (==) goto 0x0x808d6610;
    /* lis r4, 0 */ // 0x808D65F8
    r3 = r3 + 0x68; // 0x808D65FC
    r4 = r4 + 0; // 0x808D6600
    /* li r5, 0xc */ // 0x808D6604
    /* li r6, 5 */ // 0x808D6608
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x808d6624;
    r3 = r30;
    /* li r4, 0 */ // 0x808D661C
    FUN_806A0540(r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x808d6634;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808D6638
    r30 = *(8 + r1); // lwz @ 0x808D663C
    r0 = *(0x14 + r1); // lwz @ 0x808D6640
    return;
}