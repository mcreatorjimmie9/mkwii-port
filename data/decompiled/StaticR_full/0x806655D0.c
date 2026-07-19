/* Function at 0x806655D0, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806655D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806655E0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806655E8
    r30 = r3;
    if (==) goto 0x0x80665640;
    r3 = *(8 + r3); // lwz @ 0x806655F4
    if (==) goto 0x0x80665608;
    r3 = r3 + -0x10; // 0x80665600
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0xc + r30); // lwz @ 0x80665608
    if (==) goto 0x0x8066561c;
    r3 = r3 + -0x10; // 0x80665614
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x10 + r30); // lwz @ 0x8066561C
    if (==) goto 0x0x80665630;
    r3 = r3 + -0x10; // 0x80665628
    FUN_805E3430(r3); // bl 0x805E3430
    if (<=) goto 0x0x80665640;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80665644
    r30 = *(8 + r1); // lwz @ 0x80665648
    r0 = *(0x14 + r1); // lwz @ 0x8066564C
    return;
}