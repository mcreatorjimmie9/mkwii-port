/* Function at 0x805F837C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805F837C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F8384
    r5 = r5 + 0; // 0x805F8388
    *(0x14 + r1) = r0; // stw @ 0x805F838C
    /* lfs f2, 0x94(r5) */ // 0x805F8390
    *(0xc + r1) = r31; // stw @ 0x805F8394
    r31 = r4;
    /* fmr f3, f2 */ // 0x805F839C
    /* lfs f1, 0(r5) */ // 0x805F83A0
    *(8 + r1) = r30; // stw @ 0x805F83A4
    r30 = r3;
    /* lfs f4, 4(r5) */ // 0x805F83AC
    /* li r4, 0 */ // 0x805F83B0
    FUN_805F84B4(r4); // bl 0x805F84B4
    r3 = r30;
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F83C0
    /* clrlwi r0, r3, 0x18 */ // 0x805F83C4
    r3 = *(0 + r4); // lwz @ 0x805F83C8
    /* mulli r0, r0, 0x248 */ // 0x805F83CC
    r5 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F83D4
    /* li r4, 1 */ // 0x805F83D8
    r3 = r3 + r0; // 0x805F83DC
    FUN_80823BBC(r5, r4); // bl 0x80823BBC
    r0 = *(0x14 + r1); // lwz @ 0x805F83E4
    r31 = *(0xc + r1); // lwz @ 0x805F83E8
    r30 = *(8 + r1); // lwz @ 0x805F83EC
    return;
}