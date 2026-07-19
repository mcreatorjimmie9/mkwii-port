/* Function at 0x807B0238, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B0238(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807B0240
    *(0x14 + r1) = r0; // stw @ 0x807B0244
    /* li r0, 0 */ // 0x807B0248
    /* lfs f0, 0(r4) */ // 0x807B024C
    *(0xc + r1) = r31; // stw @ 0x807B0250
    r31 = r3;
    /* stfs f0, 0xc(r3) */ // 0x807B0258
    /* stfs f0, 0x10(r3) */ // 0x807B025C
    /* stfs f0, 0x14(r3) */ // 0x807B0260
    *(0x1c + r3) = r0; // stb @ 0x807B0264
    /* li r3, 0xc */ // 0x807B0268
    FUN_805E3430(r3); // bl 0x805E3430
}