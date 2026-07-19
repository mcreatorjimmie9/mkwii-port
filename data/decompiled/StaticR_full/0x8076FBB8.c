/* Function at 0x8076FBB8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076FBB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8076FBC8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8076FBD0
    r30 = r3;
    if (==) goto 0x0x8076fbf4;
    /* li r4, 0 */ // 0x8076FBDC
    FUN_8076CA84(r4); // bl 0x8076CA84
    if (<=) goto 0x0x8076fbf4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8076FBF8
    r30 = *(8 + r1); // lwz @ 0x8076FBFC
    r0 = *(0x14 + r1); // lwz @ 0x8076FC00
    return;
}