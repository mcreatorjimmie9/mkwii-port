/* Function at 0x8066D018, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8066D018(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8066D028
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066D030
    r30 = r3;
    if (==) goto 0x0x8066d058;
    if (==) goto 0x0x8066d048;
    /* li r4, 0 */ // 0x8066D040
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x8066d058;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066D05C
    r30 = *(8 + r1); // lwz @ 0x8066D060
    r0 = *(0x14 + r1); // lwz @ 0x8066D064
    return;
}