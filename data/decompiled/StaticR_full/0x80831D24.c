/* Function at 0x80831D24, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80831D24(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80831D30
    r31 = r3;
    r0 = *(0x185 + r3); // lbz @ 0x80831D38
    if (==) goto 0x0x80831dd8;
    r4 = *(0x188 + r3); // lwz @ 0x80831D44
    /* lis r0, 0x4330 */ // 0x80831D48
    /* lis r7, 0 */ // 0x80831D4C
    /* lis r5, 0 */ // 0x80831D50
    /* xoris r6, r4, 0x8000 */ // 0x80831D54
    *(0xc + r1) = r6; // stw @ 0x80831D58
    /* lfd f3, 0(r7) */ // 0x80831D5C
    /* lis r4, 0 */ // 0x80831D60
    *(8 + r1) = r0; // stw @ 0x80831D64
    /* lfs f0, 0(r5) */ // 0x80831D68
    /* lfd f1, 8(r1) */ // 0x80831D6C
    *(0x14 + r1) = r6; // stw @ 0x80831D70
    /* fsubs f2, f1, f3 */ // 0x80831D74
    /* .byte 0xe0, 0xc3, 0x00, 0x44 */ // 0x80831D78
    *(0x10 + r1) = r0; // stw @ 0x80831D7C
    /* .byte 0xe0, 0xa3, 0x00, 0x50 */ // 0x80831D80
    /* lfd f1, 0x10(r1) */ // 0x80831D84
    /* fsubs f2, f2, f0 */ // 0x80831D88
    /* vsel v4, v6, v5, v0 */ // 0x80831D8C
    /* lfs f0, 0x68(r3) */ // 0x80831D90
    /* fsubs f1, f1, f3 */ // 0x80831D94
    /* .byte 0xe0, 0xc3, 0x80, 0x4c */ // 0x80831D98
    /* .byte 0xe0, 0xa3, 0x80, 0x58 */ // 0x80831D9C
    /* xssubsp f4, v3, f0 */ // 0x80831DA0
    /* fdivs f1, f2, f1 */ // 0x80831DA4
    /* lfs f2, 0(r4) */ // 0x80831DA8
    /* fmuls f0, f0, f1 */ // 0x80831DAC
    /* vsel v4, v6, v5, v0 */ // 0x80831DB0
    /* stfs f0, 0x68(r3) */ // 0x80831DB4
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80831DB8
}