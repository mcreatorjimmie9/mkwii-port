/* Function at 0x806702E8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806702E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806702F8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80670300
    r30 = r3;
    if (==) goto 0x0x80670324;
    /* li r4, -1 */ // 0x8067030C
    FUN_805B9794(r4); // bl 0x805B9794
    if (<=) goto 0x0x80670324;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80670328
    r30 = *(8 + r1); // lwz @ 0x8067032C
    r0 = *(0x14 + r1); // lwz @ 0x80670330
    return;
}