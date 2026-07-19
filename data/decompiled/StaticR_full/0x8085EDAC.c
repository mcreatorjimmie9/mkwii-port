/* Function at 0x8085EDAC, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8085EDAC(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8085EDBC
    /* lfs f1, 0(r31) */ // 0x8085EDC0
    *(0x28 + r1) = r30; // stw @ 0x8085EDC4
    /* lis r30, 0 */ // 0x8085EDC8
    /* lfs f0, 0(r30) */ // 0x8085EDCC
    *(0x24 + r1) = r29; // stw @ 0x8085EDD0
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x8085EDD8
    r28 = r3;
    *(0x40 + r3) = r4; // stw @ 0x8085EDE0
    /* stfs f1, 4(r3) */ // 0x8085EDE4
    /* stfs f0, 8(r3) */ // 0x8085EDE8
    /* stfs f1, 0xc(r3) */ // 0x8085EDEC
    r3 = r29;
    FUN_8061DA88(r3); // bl 0x8061DA88
}