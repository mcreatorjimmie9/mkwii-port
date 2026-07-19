/* Function at 0x80847834, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */

int FUN_80847834(int r3, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r9, 0 */ // 0x80847838
    r9 = r9 + 0; // 0x8084783C
    *(0x2c + r1) = r31; // stw @ 0x80847840
    r7 = *(0x68 + r3); // lwz @ 0x80847844
    r0 = *(4 + r3); // lwz @ 0x80847848
    if (!=) goto 0x0x8084785c;
    /* li r3, 0 */ // 0x80847854
    /* b 0x80847a44 */ // 0x80847858
    /* lfs f1, 0x18(r9) */ // 0x8084785C
    /* lfs f2, 0(r9) */ // 0x80847864
    /* lfs f3, 0x10(r9) */ // 0x8084786C
    /* li r12, 1 */ // 0x80847870
    /* b 0x80847a20 */ // 0x80847874
    r9 = *(0x68 + r3); // lwz @ 0x80847878
    r10 = *(8 + r3); // lwz @ 0x8084787C
    r9 = *(0 + r9); // lhz @ 0x80847880
    r31 = *(0 + r3); // lwz @ 0x80847884
    /* slwi r9, r9, 4 */ // 0x80847888
    /* .byte 0xe0, 0xa3, 0x00, 0x3c */ // 0x8084788C
    r9 = r10 + r9; // 0x80847890
    r11 = *(4 + r9); // lhz @ 0x80847894
    r10 = *(8 + r9); // lhz @ 0x80847898
    /* mulli r11, r11, 0xc */ // 0x8084789C
    r11 = r31 + r11; // 0x808478A0
    /* .byte 0xe0, 0x8b, 0x00, 0x00 */ // 0x808478A4
    /* mulli r10, r10, 0xc */ // 0x808478A8
    /* vmsumshm v0, v5, v4, v0 */ // 0x808478AC
    /* .byte 0xe0, 0xa3, 0x80, 0x44 */ // 0x808478B0
    /* .byte 0xe0, 0x8b, 0x80, 0x08 */ // 0x808478B4
    r10 = r0 + r10; // 0x808478B8
}