/* Function at 0x808605B0, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808605B0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808605B8
    *(0x1c + r1) = r31; // stw @ 0x808605C0
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808605C8
    r30 = r3;
    /* lfs f0, 0(r3) */ // 0x808605D0
    /* stfs f0, 8(r4) */ // 0x808605D4
    /* lfs f0, 0(r5) */ // 0x808605D8
    /* lfs f1, 4(r3) */ // 0x808605DC
    /* stfs f1, 0x18(r4) */ // 0x808605E0
    /* lfs f1, 8(r3) */ // 0x808605E4
    /* stfs f1, 0x28(r4) */ // 0x808605E8
    /* lfs f1, 8(r3) */ // 0x808605EC
    /* fmuls f1, f1, f1 */ // 0x808605F0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808605F4
    if (>=) goto 0x0x80860620;
    /* lfs f0, 4(r3) */ // 0x808605FC
    /* lis r4, 0 */ // 0x80860600
    /* lfs f1, 0(r3) */ // 0x80860604
    /* fneg f2, f0 */ // 0x80860608
    /* lfs f0, 0(r4) */ // 0x8086060C
    /* stfs f1, 0xc(r1) */ // 0x80860610
    /* stfs f2, 8(r1) */ // 0x80860614
    /* stfs f0, 0x10(r1) */ // 0x80860618
    /* b 0x80860640 */ // 0x8086061C
    /* lfs f0, 0(r3) */ // 0x80860620
    /* lis r4, 0 */ // 0x80860624
    /* lfs f2, 8(r3) */ // 0x80860628
    /* fneg f1, f0 */ // 0x8086062C
    /* lfs f0, 0(r4) */ // 0x80860630
    /* stfs f2, 8(r1) */ // 0x80860634
    /* stfs f0, 0xc(r1) */ // 0x80860638
    /* stfs f1, 0x10(r1) */ // 0x8086063C
    FUN_805E3430(r3); // bl 0x805E3430
}