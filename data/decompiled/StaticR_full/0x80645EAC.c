/* Function at 0x80645EAC, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80645EAC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x80645EC4
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80645ECC
    r28 = r3;
    r31 = *(0x11 + r4); // lbz @ 0x80645ED4
    if (!=) goto 0x0x80645ef8;
    /* lis r3, 0 */ // 0x80645EE0
    /* li r5, 0 */ // 0x80645EE4
    r3 = *(0 + r3); // lwz @ 0x80645EE8
    r4 = r4 + 0x10; // 0x80645EEC
    FUN_805A7EF8(r3, r5, r4); // bl 0x805A7EF8
    r31 = r3;
    /* lis r3, 0 */ // 0x80645EF8
    /* clrlwi r4, r31, 0x18 */ // 0x80645EFC
    r3 = *(0 + r3); // lwz @ 0x80645F00
    FUN_805A4968(r3); // bl 0x805A4968
    r3 = *(0 + r3); // lwz @ 0x80645F08
    /* lfs f2, 8(r3) */ // 0x80645F10
    /* lfs f1, 4(r3) */ // 0x80645F14
    /* lfs f0, 0(r3) */ // 0x80645F18
    /* stfs f0, 0(r28) */ // 0x80645F1C
    /* stfs f1, 4(r28) */ // 0x80645F20
    /* stfs f2, 8(r28) */ // 0x80645F24
    if (==) goto 0x0x80645f3c;
    /* lis r3, 0 */ // 0x80645F2C
    /* lfs f0, 0(r3) */ // 0x80645F30
    /* fadds f0, f1, f0 */ // 0x80645F34
    /* stfs f0, 4(r28) */ // 0x80645F38
    if (==) goto 0x0x80645f6c;
    /* lis r3, 0 */ // 0x80645F44
    /* clrlwi r4, r31, 0x18 */ // 0x80645F48
    r3 = *(0 + r3); // lwz @ 0x80645F4C
    FUN_805A4968(r3); // bl 0x805A4968
    r4 = *(0 + r3); // lwz @ 0x80645F54
    /* lis r3, 0 */ // 0x80645F58
    /* lfs f1, 0(r3) */ // 0x80645F5C
    /* lfs f0, 0xc(r4) */ // 0x80645F60
    /* fmuls f0, f0, f1 */ // 0x80645F64
    /* stfs f0, 0(r30) */ // 0x80645F68
    r0 = *(0x24 + r1); // lwz @ 0x80645F6C
    r31 = *(0x1c + r1); // lwz @ 0x80645F70
    r30 = *(0x18 + r1); // lwz @ 0x80645F74
    r29 = *(0x14 + r1); // lwz @ 0x80645F78
    r28 = *(0x10 + r1); // lwz @ 0x80645F7C
    return;
}