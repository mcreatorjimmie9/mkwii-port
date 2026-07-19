/* Function at 0x806720E0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806720E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806720EC
    r31 = r3;
    r3 = r4;
    FUN_8069FF04(r3); // bl 0x8069FF04
    /* lfs f0, 4(r31) */ // 0x806720FC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80672100
    if (<=) goto 0x0x8067210c;
    /* stfs f1, 4(r31) */ // 0x80672108
    r0 = *(0x14 + r1); // lwz @ 0x8067210C
    r31 = *(0xc + r1); // lwz @ 0x80672110
    return;
}