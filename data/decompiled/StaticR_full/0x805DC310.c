/* Function at 0x805DC310, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DC310(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805DC320
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805DC328
    r30 = r3;
    if (==) goto 0x0x805dc35c;
    if (==) goto 0x0x805dc34c;
    /* lis r4, 0 */ // 0x805DC338
    r4 = r4 + 0; // 0x805DC33C
    *(0 + r3) = r4; // stw @ 0x805DC340
    r3 = *(0x14 + r3); // lwz @ 0x805DC344
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805dc35c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805DC360
    r30 = *(8 + r1); // lwz @ 0x805DC364
    r0 = *(0x14 + r1); // lwz @ 0x805DC368
    return;
}