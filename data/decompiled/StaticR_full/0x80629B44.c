/* Function at 0x80629B44, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80629B44(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80629B58
    r29 = r3;
    r3 = *(4 + r3); // lwz @ 0x80629B60
    FUN_8063DF38(); // bl 0x8063DF38
    r3 = *(8 + r29); // lwz @ 0x80629B68
    FUN_806414A8(); // bl 0x806414A8
    /* lis r3, 0 */ // 0x80629B70
    /* lis r31, 0 */ // 0x80629B74
    /* lfs f0, 0(r3) */ // 0x80629B78
    r4 = r3 + 0; // 0x80629B7C
    /* stfs f0, 0xc(r29) */ // 0x80629B80
    /* lis r30, 0 */ // 0x80629B84
    /* lfs f2, 0(r31) */ // 0x80629B88
    r3 = r29 + 0x24; // 0x80629B8C
    /* lfs f0, 4(r4) */ // 0x80629B90
    /* stfs f0, 0x10(r29) */ // 0x80629B94
    /* fmr f3, f2 */ // 0x80629B98
    /* fmr f4, f2 */ // 0x80629B9C
    /* lfs f1, 0(r30) */ // 0x80629BA0
    /* lfs f0, 8(r4) */ // 0x80629BA4
    /* stfs f0, 0x14(r29) */ // 0x80629BA8
    FUN_805E3430(); // bl 0x805E3430
}