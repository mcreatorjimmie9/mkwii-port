/* Function at 0x806CB260, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806CB260(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806CB26C
    r31 = r3;
    r0 = *(0x17c + r3); // lbz @ 0x806CB274
    if (==) goto 0x0x806cb2a0;
    /* lis r4, 0 */ // 0x806CB280
    /* lfs f0, 0(r4) */ // 0x806CB284
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806CB288
    if (<=) goto 0x0x806cb294;
    /* b 0x806cb298 */ // 0x806CB290
    /* fneg f1, f1 */ // 0x806CB294
    /* stfs f1, 0x180(r3) */ // 0x806CB298
    /* b 0x806cb2b0 */ // 0x806CB29C
    /* lis r5, 0 */ // 0x806CB2A0
    /* lfs f0, 0(r5) */ // 0x806CB2A4
    /* stfs f0, 0x180(r3) */ // 0x806CB2A8
    FUN_8069FE14(r5); // bl 0x8069FE14
    r3 = r31;
    FUN_806CB2CC(r5, r3); // bl 0x806CB2CC
    r0 = *(0x14 + r1); // lwz @ 0x806CB2B8
    r31 = *(0xc + r1); // lwz @ 0x806CB2BC
    return;
}