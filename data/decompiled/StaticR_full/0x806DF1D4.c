/* Function at 0x806DF1D4, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806DF1D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806DF1E4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806DF1EC
    r30 = r3;
    if (==) goto 0x0x806df218;
    if (==) goto 0x0x806df208;
    /* li r4, -1 */ // 0x806DF1FC
    r3 = r3 + 0xa8; // 0x806DF200
    FUN_805E35B8(r4, r3); // bl 0x805E35B8
    if (<=) goto 0x0x806df218;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806DF21C
    r30 = *(8 + r1); // lwz @ 0x806DF220
    r0 = *(0x14 + r1); // lwz @ 0x806DF224
    return;
}