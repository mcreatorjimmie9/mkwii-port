/* Function at 0x805C68E8, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805C68E8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805C68FC
    r30 = r4;
    r0 = *(4 + r3); // lbz @ 0x805C6904
    *(8 + r1) = r0; // stb @ 0x805C6908
    r12 = *(0 + r3); // lwz @ 0x805C690C
    r12 = *(0x14 + r12); // lwz @ 0x805C6910
    /* mtctr r12 */ // 0x805C6914
    /* bctrl  */ // 0x805C6918
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x805C692C
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x805C6934
    r31 = *(0x1c + r1); // lwz @ 0x805C6938
    r30 = *(0x18 + r1); // lwz @ 0x805C693C
    return;
}