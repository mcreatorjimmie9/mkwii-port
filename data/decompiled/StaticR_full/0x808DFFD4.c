/* Function at 0x808DFFD4, size=108 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808DFFD4(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808DFFDC
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x808DFFEC
    *(0x34 + r1) = r29; // stw @ 0x808DFFF0
    r4 = *(0 + r4); // lwz @ 0x808DFFF4
    r0 = *(0x25 + r4); // lbz @ 0x808DFFF8
    if (!=) goto 0x0x808e0158;
    r12 = *(0 + r3); // lwz @ 0x808E0004
    r12 = *(0x34 + r12); // lwz @ 0x808E0008
    /* mtctr r12 */ // 0x808E000C
    /* bctrl  */ // 0x808E0010
    /* lis r30, 0 */ // 0x808E0014
    r4 = r30 + 0; // 0x808E0018
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x808e015c;
    r12 = *(0 + r31); // lwz @ 0x808E0028
    r3 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x808E0030
    /* mtctr r12 */ // 0x808E0034
    /* bctrl  */ // 0x808E0038
    r5 = r30 + 0; // 0x808E003C
}