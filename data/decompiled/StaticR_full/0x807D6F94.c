/* Function at 0x807D6F94, size=96 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807D6F94(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = *(0 + r4); // lwz @ 0x807D6FA0
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x807D6FAC
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x807D6FB4
    r29 = r3;
    r3 = *(4 + r4); // lwz @ 0x807D6FBC
    *(8 + r1) = r0; // stw @ 0x807D6FC0
    r0 = *(8 + r4); // lwz @ 0x807D6FC4
    *(0xc + r1) = r3; // stw @ 0x807D6FC8
    /* lfs f1, 8(r1) */ // 0x807D6FCC
    /* lfs f0, 0xc(r1) */ // 0x807D6FD0
    *(0x10 + r1) = r0; // stw @ 0x807D6FD4
    /* fmuls f1, f1, f1 */ // 0x807D6FD8
    /* fmuls f0, f0, f0 */ // 0x807D6FDC
    /* lfs f2, 0x10(r1) */ // 0x807D6FE0
    /* fmuls f2, f2, f2 */ // 0x807D6FE4
    /* fadds f0, f1, f0 */ // 0x807D6FE8
    /* fadds f1, f2, f0 */ // 0x807D6FEC
    FUN_805E3430(); // bl 0x805E3430
}