/* Function at 0x808BEE70, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808BEE70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808BEE80
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808BEE88
    r30 = r3;
    if (==) goto 0x0x808beeac;
    /* li r4, 0 */ // 0x808BEE94
    FUN_806498AC(r4); // bl 0x806498AC
    if (<=) goto 0x0x808beeac;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808BEEB0
    r30 = *(8 + r1); // lwz @ 0x808BEEB4
    r0 = *(0x14 + r1); // lwz @ 0x808BEEB8
    return;
}