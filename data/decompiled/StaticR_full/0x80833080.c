/* Function at 0x80833080, size=164 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80833080(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80833090
    r31 = r31 + 0; // 0x80833094
    *(0x68 + r1) = r30; // stw @ 0x80833098
    *(0x64 + r1) = r29; // stw @ 0x8083309C
    r29 = r3;
    r4 = *(0x1a4 + r3); // lwz @ 0x808330A4
    r0 = r4 + 1; // 0x808330A8
    *(0x1a4 + r3) = r0; // stw @ 0x808330AC
    if (<) goto 0x0x808330c0;
    /* li r0, 0 */ // 0x808330B8
    *(0x1a4 + r3) = r0; // stw @ 0x808330BC
    r4 = *(0x1a4 + r3); // lwz @ 0x808330C0
    /* lis r0, 0x4330 */ // 0x808330C4
    /* lfs f0, 0(r31) */ // 0x808330C8
    /* xoris r4, r4, 0x8000 */ // 0x808330D0
    *(0x54 + r1) = r4; // stw @ 0x808330D4
    /* lfd f4, 0x118(r31) */ // 0x808330D8
    *(0x50 + r1) = r0; // stw @ 0x808330E0
    /* lfs f2, 0x120(r31) */ // 0x808330E4
    /* lfd f3, 0x50(r1) */ // 0x808330E8
    /* stfs f0, 0x18(r1) */ // 0x808330EC
    /* fsubs f3, f3, f4 */ // 0x808330F0
    /* lfs f1, 0x124(r31) */ // 0x808330F4
    /* fmuls f0, f2, f3 */ // 0x808330F8
    /* fmuls f0, f1, f0 */ // 0x808330FC
    /* stfs f0, 0x14(r1) */ // 0x80833100
    /* stfs f0, 0x1c(r1) */ // 0x80833104
    r0 = *(0x7c + r29); // lwz @ 0x80833108
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8083310C
    if (==) goto 0x0x8083311c;
    r5 = r29 + 0x8c; // 0x80833114
    /* b 0x80833120 */ // 0x80833118
    r5 = *(0x98 + r29); // lwz @ 0x8083311C
    FUN_805E3430(r5); // bl 0x805E3430
}