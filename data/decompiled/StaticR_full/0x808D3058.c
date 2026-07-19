/* Function at 0x808D3058, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D3058(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r5 = r4;
    /* lis r4, 0 */ // 0x808D3064
    *(0x24 + r1) = r0; // stw @ 0x808D3068
    r4 = r4 + 0; // 0x808D306C
    /* lfs f1, 4(r5) */ // 0x808D3070
    *(0x1c + r1) = r31; // stw @ 0x808D3074
    r31 = r3;
    FUN_805A443C(r4, r3); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x808D3084
    /* stfs f0, 0x17c(r31) */ // 0x808D3088
    /* lfs f0, 0xc(r1) */ // 0x808D308C
    /* stfs f0, 0x180(r31) */ // 0x808D3090
    /* lfs f0, 0x10(r1) */ // 0x808D3094
    /* stfs f0, 0x184(r31) */ // 0x808D3098
    r31 = *(0x1c + r1); // lwz @ 0x808D309C
    r0 = *(0x24 + r1); // lwz @ 0x808D30A0
    return;
}