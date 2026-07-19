/* Function at 0x8087521C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8087521C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8087522C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80875234
    r30 = r3;
    if (==) goto 0x0x80875260;
    if (==) goto 0x0x80875250;
    if (==) goto 0x0x80875250;
    /* li r4, 0 */ // 0x80875248
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x80875260;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80875264
    r30 = *(8 + r1); // lwz @ 0x80875268
    r0 = *(0x14 + r1); // lwz @ 0x8087526C
    return;
}