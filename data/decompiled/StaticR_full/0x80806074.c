/* Function at 0x80806074, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_80806074(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x80806084
    /* li r30, 0 */ // 0x8080608C
    *(0x24 + r1) = r29; // stw @ 0x80806090
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x80806098
    r28 = r3;
    /* b 0x808060e8 */ // 0x808060A0
    r3 = *(0 + r31); // lwz @ 0x808060A4
    r4 = r30;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DECC(r4); // bl 0x8061DECC
    if (==) goto 0x0x808060e4;
    r3 = *(0 + r31); // lwz @ 0x808060BC
    r4 = r30;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DA88(r4); // bl 0x8061DA88
    /* lfs f0, 0(r3) */ // 0x808060CC
    /* stfs f0, 8(r1) */ // 0x808060D0
    /* lfs f0, 4(r3) */ // 0x808060D4
    /* stfs f0, 0xc(r1) */ // 0x808060D8
    /* lfs f0, 8(r3) */ // 0x808060DC
    /* stfs f0, 0x10(r1) */ // 0x808060E0
    r30 = r30 + 1; // 0x808060E4
    r3 = *(0 + r31); // lwz @ 0x808060E8
    r0 = *(0x24 + r3); // lbz @ 0x808060EC
    if (<) goto 0x0x808060a4;
    r3 = r28;
    r5 = r29 + 0x30; // 0x80806100
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    r0 = *(0x34 + r1); // lwz @ 0x80806108
    r31 = *(0x2c + r1); // lwz @ 0x8080610C
}