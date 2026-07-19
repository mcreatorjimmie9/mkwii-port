/* Function at 0x808604C0, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808604C0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808604C8
    *(0x1c + r1) = r31; // stw @ 0x808604D0
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808604D8
    r30 = r3;
    /* lfs f0, 0(r3) */ // 0x808604E0
    /* stfs f0, 4(r4) */ // 0x808604E4
    /* lfs f0, 0(r5) */ // 0x808604E8
    /* lfs f1, 4(r3) */ // 0x808604EC
    /* stfs f1, 0x14(r4) */ // 0x808604F0
    /* lfs f1, 8(r3) */ // 0x808604F4
    /* stfs f1, 0x24(r4) */ // 0x808604F8
    /* lfs f1, 4(r3) */ // 0x808604FC
    /* fmuls f1, f1, f1 */ // 0x80860500
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80860504
    if (>=) goto 0x0x80860530;
    /* lfs f0, 0(r3) */ // 0x8086050C
    /* lis r4, 0 */ // 0x80860510
    /* lfs f2, 8(r3) */ // 0x80860514
    /* fneg f1, f0 */ // 0x80860518
    /* lfs f0, 0(r4) */ // 0x8086051C
    /* stfs f2, 8(r1) */ // 0x80860520
    /* stfs f0, 0xc(r1) */ // 0x80860524
    /* stfs f1, 0x10(r1) */ // 0x80860528
    /* b 0x80860550 */ // 0x8086052C
    /* lfs f0, 8(r3) */ // 0x80860530
    /* lis r4, 0 */ // 0x80860534
    /* lfs f1, 4(r3) */ // 0x80860538
    /* fneg f2, f0 */ // 0x8086053C
    /* lfs f0, 0(r4) */ // 0x80860540
    /* stfs f0, 8(r1) */ // 0x80860544
    /* stfs f2, 0xc(r1) */ // 0x80860548
    /* stfs f1, 0x10(r1) */ // 0x8086054C
    FUN_805E3430(r3); // bl 0x805E3430
}