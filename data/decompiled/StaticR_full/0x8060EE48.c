/* Function at 0x8060EE48, size=276 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8060EE48(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x8060EE54
    r31 = r3;
    r3 = *(0x260 + r3); // lwz @ 0x8060EE5C
    FUN_80642834(); // bl 0x80642834
    r5 = *(0x260 + r31); // lwz @ 0x8060EE64
    r3 = r31;
    /* lfs f3, 0x160(r31) */ // 0x8060EE6C
    /* lfs f2, 0x2c(r5) */ // 0x8060EE74
    /* lfs f1, 0x30(r5) */ // 0x8060EE78
    /* fmuls f5, f3, f2 */ // 0x8060EE7C
    /* lfs f0, 0x34(r5) */ // 0x8060EE80
    /* fmuls f4, f3, f1 */ // 0x8060EE84
    /* lfs f1, 0x70(r5) */ // 0x8060EE88
    /* fmuls f3, f3, f0 */ // 0x8060EE8C
    /* lfs f0, 0x74(r5) */ // 0x8060EE90
    /* lfs f2, 0x6c(r5) */ // 0x8060EE94
    /* fmuls f6, f4, f1 */ // 0x8060EE98
    /* stfs f5, 0x20(r1) */ // 0x8060EE9C
    /* fmuls f7, f3, f0 */ // 0x8060EEA0
    /* fmuls f5, f5, f2 */ // 0x8060EEA4
    /* stfs f4, 0x24(r1) */ // 0x8060EEA8
    /* stfs f3, 0x28(r1) */ // 0x8060EEAC
    /* stfs f2, 0x14(r1) */ // 0x8060EEB0
    /* stfs f1, 0x18(r1) */ // 0x8060EEB4
    /* stfs f0, 0x1c(r1) */ // 0x8060EEB8
    /* stfs f5, 8(r1) */ // 0x8060EEBC
    /* stfs f6, 0xc(r1) */ // 0x8060EEC0
    /* stfs f7, 0x10(r1) */ // 0x8060EEC4
    FUN_8060EF5C(); // bl 0x8060EF5C
    /* lfs f1, 0x178(r31) */ // 0x8060EECC
    /* lfs f0, 0x17c(r31) */ // 0x8060EED0
    /* lfs f2, 0x180(r31) */ // 0x8060EED4
    /* fmuls f3, f1, f0 */ // 0x8060EED8
    /* lfs f1, 0x160(r31) */ // 0x8060EEDC
    /* lfs f0, 0x28(r1) */ // 0x8060EEE0
    /* fmuls f2, f2, f3 */ // 0x8060EEE4
    /* fmuls f2, f1, f2 */ // 0x8060EEE8
    /* stfs f2, 0x170(r31) */ // 0x8060EEEC
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8060EEF0
    if (>=) goto 0x0x8060eefc;
    /* b 0x8060ef00 */ // 0x8060EEF8
    /* fmr f2, f0 */ // 0x8060EEFC
    /* lis r3, 0 */ // 0x8060EF00
    /* lfs f0, 0x28(r1) */ // 0x8060EF04
    /* lfs f1, 0(r3) */ // 0x8060EF08
    /* stfs f2, 0x174(r31) */ // 0x8060EF0C
    /* fcmpu cr0, f1, f0 */ // 0x8060EF10
    if (==) goto 0x0x8060ef24;
    r3 = r31;
    r4 = r31 + 0x164; // 0x8060EF1C
    FUN_8061EEE0(r3, r4); // bl 0x8061EEE0
    /* lis r3, 0 */ // 0x8060EF24
    /* lfs f0, 0x16c(r31) */ // 0x8060EF28
    /* lfs f1, 0(r3) */ // 0x8060EF2C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060EF30
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8060EF34
    if (!=) goto 0x0x8060ef40;
    /* b 0x8060ef44 */ // 0x8060EF3C
    /* fdivs f1, f1, f0 */ // 0x8060EF40
    /* stfs f1, 0x184(r31) */ // 0x8060EF44
    r31 = *(0x3c + r1); // lwz @ 0x8060EF48
    r0 = *(0x44 + r1); // lwz @ 0x8060EF4C
    return;
}