/* Function at 0x8083E024, size=144 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8083E024(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r7;
    r30 = r6;
    *(0x24 + r1) = r29; // stw @ 0x8083E040
    r29 = r5;
    *(0x20 + r1) = r28; // stw @ 0x8083E048
    r28 = r4;
    r0 = *(0 + r6); // lbz @ 0x8083E050
    if (==) goto 0x0x8083e0bc;
    /* lis r3, 0 */ // 0x8083E05C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x8083E064
    FUN_805A4968(r3, r4); // bl 0x805A4968
    r5 = *(0 + r3); // lwz @ 0x8083E06C
    r4 = r28;
    /* lfs f2, 8(r5) */ // 0x8083E078
    /* lfs f1, 4(r5) */ // 0x8083E07C
    /* lfs f0, 0(r5) */ // 0x8083E080
    /* stfs f0, 8(r1) */ // 0x8083E084
    /* stfs f1, 0xc(r1) */ // 0x8083E088
    /* stfs f2, 0x10(r1) */ // 0x8083E08C
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0(r31) */ // 0x8083E094
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083E098
    if (>=) goto 0x0x8083e0ac;
    /* stfs f1, 0(r31) */ // 0x8083E0A0
    /* li r0, 1 */ // 0x8083E0A4
    /* b 0x8083e0b0 */ // 0x8083E0A8
    /* li r0, 0 */ // 0x8083E0AC
}