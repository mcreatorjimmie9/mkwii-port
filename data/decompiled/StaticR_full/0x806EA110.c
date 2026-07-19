/* Function at 0x806EA110, size=232 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806EA110(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806EA118
    *(0x34 + r1) = r0; // stw @ 0x806EA11C
    *(0x2c + r1) = r31; // stw @ 0x806EA120
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806EA128
    r4 = r31;
    FUN_807031A8(r4); // bl 0x807031A8
    if (!=) goto 0x0x806ea1e4;
    /* lis r11, 0 */ // 0x806EA13C
    r10 = *(2 + r11); // lhz @ 0x806EA144
    r9 = *(4 + r11); // lhz @ 0x806EA148
    r8 = *(6 + r11); // lhz @ 0x806EA14C
    r7 = *(8 + r11); // lhz @ 0x806EA150
    r6 = *(0xa + r11); // lhz @ 0x806EA154
    r5 = *(0xc + r11); // lhz @ 0x806EA158
    r4 = *(0xe + r11); // lhz @ 0x806EA15C
    r3 = *(0x10 + r11); // lhz @ 0x806EA160
    r0 = *(0x12 + r11); // lhz @ 0x806EA164
    r11 = *(0 + r11); // lhz @ 0x806EA168
    *(0 + r31) = r11; // sth @ 0x806EA16C
    *(2 + r31) = r10; // sth @ 0x806EA170
    *(4 + r31) = r9; // sth @ 0x806EA174
    *(6 + r31) = r8; // sth @ 0x806EA178
    *(8 + r31) = r7; // sth @ 0x806EA17C
    *(0xa + r31) = r6; // sth @ 0x806EA180
    *(0xc + r31) = r5; // sth @ 0x806EA184
    *(0xe + r31) = r4; // sth @ 0x806EA188
    *(0x10 + r31) = r3; // sth @ 0x806EA18C
    *(0x12 + r31) = r0; // sth @ 0x806EA190
    *(0x14 + r31) = r11; // sth @ 0x806EA194
    *(0x16 + r31) = r10; // sth @ 0x806EA198
    *(0x18 + r31) = r9; // sth @ 0x806EA19C
    *(0x1a + r31) = r8; // sth @ 0x806EA1A0
    *(0x1c + r31) = r7; // sth @ 0x806EA1A4
    *(0x1e + r31) = r6; // sth @ 0x806EA1A8
    *(0x20 + r31) = r5; // sth @ 0x806EA1AC
    *(0x22 + r31) = r4; // sth @ 0x806EA1B0
    *(0x24 + r31) = r3; // sth @ 0x806EA1B4
    *(8 + r1) = r11; // sth @ 0x806EA1B8
    *(0xa + r1) = r10; // sth @ 0x806EA1BC
    *(0xc + r1) = r9; // sth @ 0x806EA1C0
    *(0xe + r1) = r8; // sth @ 0x806EA1C4
    *(0x10 + r1) = r7; // sth @ 0x806EA1C8
    *(0x12 + r1) = r6; // sth @ 0x806EA1CC
    *(0x14 + r1) = r5; // sth @ 0x806EA1D0
    *(0x16 + r1) = r4; // sth @ 0x806EA1D4
    *(0x18 + r1) = r3; // sth @ 0x806EA1D8
    *(0x1a + r1) = r0; // sth @ 0x806EA1DC
    *(0x26 + r31) = r0; // sth @ 0x806EA1E0
    r0 = *(0x34 + r1); // lwz @ 0x806EA1E4
    r31 = *(0x2c + r1); // lwz @ 0x806EA1E8
    return;
}