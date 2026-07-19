/* Function at 0x805F973C, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F973C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805F974C
    *(0x18 + r1) = r30; // stw @ 0x805F9750
    r30 = r3;
    FUN_8061DC48(); // bl 0x8061DC48
    r0 = *(0x78 + r3); // lwz @ 0x805F975C
    /* lis r4, 0 */ // 0x805F9760
    *(0xc + r1) = r0; // stw @ 0x805F9764
    r5 = *(0x74 + r3); // lwz @ 0x805F9768
    /* lfs f1, 0xc(r1) */ // 0x805F976C
    /* lfs f0, 0(r4) */ // 0x805F9770
    r0 = *(0x7c + r3); // lwz @ 0x805F9774
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F9778
    *(8 + r1) = r5; // stw @ 0x805F977C
    *(0x10 + r1) = r0; // stw @ 0x805F9780
    if (<=) goto 0x0x805f978c;
    /* stfs f0, 0xc(r1) */ // 0x805F9788
    r3 = r30;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x805F9794
    /* stfs f0, 0x74(r3) */ // 0x805F9798
    /* lfs f0, 0xc(r1) */ // 0x805F979C
    /* stfs f0, 0x78(r3) */ // 0x805F97A0
    /* lfs f0, 0x10(r1) */ // 0x805F97A4
    /* stfs f0, 0x7c(r3) */ // 0x805F97A8
    r3 = *(0xc4 + r30); // lwz @ 0x805F97AC
    r0 = *(0xc8 + r30); // lwz @ 0x805F97B0
    if (<=) goto 0x0x805f97d4;
    r3 = *(0 + r30); // lwz @ 0x805F97BC
    /* li r31, 1 */ // 0x805F97C0
    r3 = *(4 + r3); // lwz @ 0x805F97C4
    r0 = *(0xc + r3); // lwz @ 0x805F97C8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x805F97D0
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x805F97D8
    r30 = *(0x18 + r1); // lwz @ 0x805F97DC
    r0 = *(0x24 + r1); // lwz @ 0x805F97E0
    return;
}