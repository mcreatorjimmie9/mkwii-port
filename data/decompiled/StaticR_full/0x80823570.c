/* Function at 0x80823570, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80823570(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80823580
    r31 = r31 + 0; // 0x80823584
    *(8 + r1) = r30; // stw @ 0x80823588
    r30 = r3;
    FUN_8061DC70(); // bl 0x8061DC70
    /* lfs f1, 0x34(r3) */ // 0x80823594
    /* lfs f0, 0x20(r31) */ // 0x80823598
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082359C
    if (<=) goto 0x0x808235b4;
    r0 = *(0xc + r30); // lhz @ 0x808235A4
    r0 = r0 | 0x10; // 0x808235A8
    *(0xc + r30) = r0; // sth @ 0x808235AC
    /* b 0x808235cc */ // 0x808235B0
    /* lfs f0, 0x24(r31) */ // 0x808235B4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808235B8
    if (>=) goto 0x0x808235cc;
    r0 = *(0xc + r30); // lhz @ 0x808235C0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r30) = r0; // sth @ 0x808235C8
    /* lfs f0, 0x28(r31) */ // 0x808235CC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808235D0
    if (>=) goto 0x0x808235e8;
    r0 = *(0xc + r30); // lhz @ 0x808235D8
    r0 = r0 | 0x20; // 0x808235DC
    *(0xc + r30) = r0; // sth @ 0x808235E0
    /* b 0x80823600 */ // 0x808235E4
    /* lfs f0, 0x2c(r31) */ // 0x808235E8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808235EC
    if (<=) goto 0x0x80823600;
    r0 = *(0xc + r30); // lhz @ 0x808235F4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r30) = r0; // sth @ 0x808235FC
    r0 = *(0x14 + r1); // lwz @ 0x80823600
    r31 = *(0xc + r1); // lwz @ 0x80823604
    r30 = *(8 + r1); // lwz @ 0x80823608
    return;
}