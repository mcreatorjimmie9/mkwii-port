/* Function at 0x80671C70, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80671C70(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80671C78
    /* stfd f31, 0x18(r1) */ // 0x80671C80
    /* fmr f31, f1 */ // 0x80671C84
    *(0x14 + r1) = r31; // stw @ 0x80671C88
    r31 = r5;
    *(0x10 + r1) = r30; // stw @ 0x80671C90
    r30 = r3;
    r3 = *(0 + r6); // lwz @ 0x80671C98
    FUN_80698C44(); // bl 0x80698C44
    if (==) goto 0x0x80671cac;
    *(0x10 + r30) = r31; // stw @ 0x80671CA8
    /* fctiwz f0, f31 */ // 0x80671CAC
    /* li r0, 1 */ // 0x80671CB0
    /* stfs f31, 0x18(r30) */ // 0x80671CB4
    /* lis r3, 0 */ // 0x80671CB8
    /* li r5, 0xff */ // 0x80671CBC
    *(0xc + r30) = r0; // stb @ 0x80671CC0
    /* stfd f0, 8(r1) */ // 0x80671CC4
    r3 = *(0 + r3); // lwz @ 0x80671CC8
    r4 = *(0xc + r1); // lwz @ 0x80671CCC
    FUN_80698CD0(r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x80671CD4
    /* lfd f31, 0x18(r1) */ // 0x80671CD8
    r31 = *(0x14 + r1); // lwz @ 0x80671CDC
    r30 = *(0x10 + r1); // lwz @ 0x80671CE0
    return;
}