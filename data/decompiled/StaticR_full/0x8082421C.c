/* Function at 0x8082421C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8082421C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x80824224
    *(0xc + r1) = r31; // stw @ 0x8082422C
    *(8 + r1) = r30; // stw @ 0x80824230
    r31 = *(0 + r3); // lwz @ 0x80824234
    if (==) goto 0x0x80824354;
    /* li r0, 0 */ // 0x80824240
    *(0 + r3) = r0; // stw @ 0x80824244
    if (==) goto 0x0x80824354;
    FUN_8083FE54(); // bl 0x8083FE54
    /* lis r3, 0 */ // 0x80824250
    r0 = *(0 + r3); // lbz @ 0x80824254
    if (==) goto 0x0x80824264;
    FUN_80825BFC(r3); // bl 0x80825BFC
    FUN_80869E00(r3); // bl 0x80869E00
    FUN_8086D764(); // bl 0x8086D764
    /* lis r4, 0 */ // 0x8082426C
    r3 = r31 + 0x48; // 0x80824270
    r4 = r4 + 0; // 0x80824274
    /* li r5, 0x24 */ // 0x80824278
    /* li r6, 0xf */ // 0x8082427C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8082434c;
    /* lis r4, 0 */ // 0x8082428C
    /* lis r3, 0 */ // 0x80824290
    r4 = r4 + 0; // 0x80824294
    *(0 + r31) = r4; // stw @ 0x80824298
}