/* Function at 0x807CF000, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */

int FUN_807CF000(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807CF004
    /* lis r5, 0 */ // 0x807CF008
    /* lis r7, 0 */ // 0x807CF00C
    *(0x3c + r1) = r31; // stw @ 0x807CF010
    r4 = r4 + 0; // 0x807CF014
    r5 = r5 + 0; // 0x807CF018
    /* li r31, 0 */ // 0x807CF01C
    *(0x38 + r1) = r30; // stw @ 0x807CF020
    /* lis r6, 0 */ // 0x807CF024
    r30 = r3 + 8; // 0x807CF028
    *(0x34 + r3) = r4; // stw @ 0x807CF02C
    /* lis r4, 0 */ // 0x807CF030
    *(8 + r3) = r5; // stw @ 0x807CF034
    *(0xc + r3) = r31; // stw @ 0x807CF038
    r5 = *(0 + r7); // lwzu @ 0x807CF03C
    r0 = *(4 + r7); // lwz @ 0x807CF040
    *(0x14 + r3) = r0; // stw @ 0x807CF044
    *(0x10 + r3) = r5; // stw @ 0x807CF048
    r0 = *(8 + r7); // lwz @ 0x807CF04C
    *(0x18 + r3) = r0; // stw @ 0x807CF050
    r5 = *(0 + r7); // lwz @ 0x807CF054
    r0 = *(4 + r7); // lwz @ 0x807CF058
    *(0x20 + r3) = r0; // stw @ 0x807CF05C
    *(0x1c + r3) = r5; // stw @ 0x807CF060
    r0 = *(8 + r7); // lwz @ 0x807CF064
    *(0x24 + r3) = r0; // stw @ 0x807CF068
    r5 = *(0 + r7); // lwz @ 0x807CF06C
    r0 = *(4 + r7); // lwz @ 0x807CF070
    *(0x2c + r3) = r0; // stw @ 0x807CF074
    *(0x28 + r3) = r5; // stw @ 0x807CF078
    r0 = *(8 + r7); // lwz @ 0x807CF07C
    *(0x30 + r3) = r0; // stw @ 0x807CF080
    r9 = *(0 + r4); // lwzu @ 0x807CF084
    r5 = *(0 + r6); // lwzu @ 0x807CF088
    r12 = *(0 + r7); // lwz @ 0x807CF08C
    r11 = *(4 + r7); // lwz @ 0x807CF090
    r10 = *(8 + r7); // lwz @ 0x807CF094
    r8 = *(4 + r4); // lwz @ 0x807CF098
    r7 = *(8 + r4); // lwz @ 0x807CF09C
    r4 = *(4 + r6); // lwz @ 0x807CF0A0
    r0 = *(8 + r6); // lwz @ 0x807CF0A4
    *(0x18 + r3) = r0; // stw @ 0x807CF0A8
    *(0xc + r3) = r3; // stw @ 0x807CF0AC
    *(0x10 + r3) = r5; // stw @ 0x807CF0B0
    *(0x14 + r3) = r4; // stw @ 0x807CF0B4
    *(0x1c + r3) = r9; // stw @ 0x807CF0B8
    *(0x20 + r3) = r8; // stw @ 0x807CF0BC
    *(0x24 + r3) = r7; // stw @ 0x807CF0C0
    *(0x28 + r3) = r12; // stw @ 0x807CF0C4
    *(0x2c + r3) = r11; // stw @ 0x807CF0C8
    *(0x30 + r3) = r10; // stw @ 0x807CF0CC
    *(0 + r3) = r30; // stw @ 0x807CF0D0
    *(4 + r3) = r31; // stw @ 0x807CF0D4
    r31 = *(0x3c + r1); // lwz @ 0x807CF0D8
    *(8 + r1) = r12; // stw @ 0x807CF0DC
    r30 = *(0x38 + r1); // lwz @ 0x807CF0E0
    *(0xc + r1) = r11; // stw @ 0x807CF0E4
    *(0x10 + r1) = r10; // stw @ 0x807CF0E8
    *(0x14 + r1) = r9; // stw @ 0x807CF0EC
    *(0x18 + r1) = r8; // stw @ 0x807CF0F0
    *(0x1c + r1) = r7; // stw @ 0x807CF0F4
    *(0x20 + r1) = r5; // stw @ 0x807CF0F8
    *(0x24 + r1) = r4; // stw @ 0x807CF0FC
    *(0x28 + r1) = r0; // stw @ 0x807CF100
    return;
}