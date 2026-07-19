/* Function at 0x806DDFE4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806DDFE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806DDFF4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806DDFFC
    r30 = r3;
    if (==) goto 0x0x806de024;
    /* li r4, -1 */ // 0x806DE008
    r3 = r3 + 0xa8; // 0x806DE00C
    FUN_805E35B8(r4, r3); // bl 0x805E35B8
    if (<=) goto 0x0x806de024;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806DE028
    r30 = *(8 + r1); // lwz @ 0x806DE02C
    r0 = *(0x14 + r1); // lwz @ 0x806DE030
    return;
}