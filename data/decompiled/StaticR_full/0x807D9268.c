/* Function at 0x807D9268, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D9268(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D9278
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D9280
    r30 = r3;
    if (==) goto 0x0x807d92a4;
    /* li r4, 0 */ // 0x807D928C
    FUN_807D6D14(r4); // bl 0x807D6D14
    if (<=) goto 0x0x807d92a4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807D92A8
    r30 = *(8 + r1); // lwz @ 0x807D92AC
    r0 = *(0x14 + r1); // lwz @ 0x807D92B0
    return;
}