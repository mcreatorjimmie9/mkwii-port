/* Function at 0x805AFD44, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AFD44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805AFD54
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x805AFD5C
    r12 = *(0x38 + r12); // lwz @ 0x805AFD60
    /* mtctr r12 */ // 0x805AFD64
    /* bctrl  */ // 0x805AFD68
    r0 = *(0x18 + r30); // lbz @ 0x805AFD6C
    /* lis r3, 0 */ // 0x805AFD70
    /* lfs f0, 0(r3) */ // 0x805AFD74
    /* li r31, 0 */ // 0x805AFD78
    /* li r6, 7 */ // 0x805AFD7C
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r30) = r31; // sth @ 0x805AFD84
    r3 = r30 + 0x90; // 0x805AFD88
    /* li r4, 0 */ // 0x805AFD8C
    /* li r5, 0xc */ // 0x805AFD90
    *(0xa + r30) = r31; // sth @ 0x805AFD94
    /* stfs f0, 0x10(r30) */ // 0x805AFD98
    /* stfs f0, 0xc(r30) */ // 0x805AFD9C
    *(0x14 + r30) = r6; // stb @ 0x805AFDA0
    *(0x15 + r30) = r6; // stb @ 0x805AFDA4
    *(0x16 + r30) = r31; // stb @ 0x805AFDA8
    *(0x17 + r30) = r31; // stb @ 0x805AFDAC
    *(0x18 + r30) = r0; // stb @ 0x805AFDB0
    FUN_805E3430(); // bl 0x805E3430
}