/* Function at 0x807A95F4, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_807A95F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = r3 + -0xf; // 0x807A9600
    *(0xc + r1) = r31; // stw @ 0x807A9608
    if (>) goto 0x0x807a967c;
    /* lis r3, 0 */ // 0x807A9610
    r3 = *(0 + r3); // lwz @ 0x807A9614
    r31 = *(0x10 + r3); // lwz @ 0x807A9618
    r3 = r31;
    FUN_8069526C(r3, r3); // bl 0x8069526C
    if (==) goto 0x0x807a9640;
    if (==) goto 0x0x807a9650;
    if (==) goto 0x0x807a9660;
    /* b 0x807a96d8 */ // 0x807A963C
    /* lis r3, 0 */ // 0x807A9640
    r3 = *(0 + r3); // lwz @ 0x807A9644
    FUN_8078AF68(r3); // bl 0x8078AF68
    /* b 0x807a96d8 */ // 0x807A964C
    /* lis r3, 0 */ // 0x807A9650
    r3 = *(0 + r3); // lwz @ 0x807A9654
    FUN_807A481C(r3); // bl 0x807A481C
    /* b 0x807a96d8 */ // 0x807A965C
    r0 = r31 + -0x32; // 0x807A9660
    if (>) goto 0x0x807a96d8;
    /* lis r3, 0 */ // 0x807A966C
    r3 = *(0 + r3); // lwz @ 0x807A9670
    FUN_807A481C(r3); // bl 0x807A481C
    /* b 0x807a96d8 */ // 0x807A9678
    if (!=) goto 0x0x807a96d8;
    /* lis r3, 0 */ // 0x807A9684
    r3 = *(0 + r3); // lwz @ 0x807A9688
    r31 = *(0x10 + r3); // lwz @ 0x807A968C
    r3 = r31;
    FUN_8069526C(r3, r3); // bl 0x8069526C
    if (!=) goto 0x0x807a96d8;
    r0 = r31 + -0x35; // 0x807A96A0
    if (<=) goto 0x0x807a96b4;
    if (!=) goto 0x0x807a96d8;
    /* lis r3, 0 */ // 0x807A96B4
    r3 = *(0 + r3); // lwz @ 0x807A96B8
    r0 = *(0xb74 + r3); // lwz @ 0x807A96BC
    if (!=) goto 0x0x807a96d8;
    /* lis r3, 0 */ // 0x807A96C8
    /* li r4, 0x21b */ // 0x807A96CC
    r3 = *(0 + r3); // lwz @ 0x807A96D0
    FUN_8078BCD8(r3, r4); // bl 0x8078BCD8
    r0 = *(0x14 + r1); // lwz @ 0x807A96D8
    r31 = *(0xc + r1); // lwz @ 0x807A96DC
    return;
}