/* Function at 0x807C2E0C, size=428 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_807C2E0C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x807C2E10
    r7 = r7 + 0; // 0x807C2E14
    /* lis r11, 0 */ // 0x807C2E18
    *(0x1c + r1) = r31; // stw @ 0x807C2E1C
    /* li r0, 0 */ // 0x807C2E20
    /* lfs f3, 0xc0(r7) */ // 0x807C2E24
    r10 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807C2E2C
    /* li r12, -1 */ // 0x807C2E30
    /* lfs f2, 0x18(r7) */ // 0x807C2E34
    /* li r31, 0 */ // 0x807C2E38
    /* lfs f1, 0x28(r4) */ // 0x807C2E3C
    /* li r5, 1 */ // 0x807C2E40
    r8 = *(0xa + r4); // lbz @ 0x807C2E44
    /* lfs f4, 0x24(r4) */ // 0x807C2E48
    *(4 + r11) = r0; // stw @ 0x807C2E50
    *(8 + r11) = r0; // stw @ 0x807C2E54
    *(0xc + r11) = r0; // stw @ 0x807C2E58
    *(0x10 + r11) = r0; // stw @ 0x807C2E5C
    *(0x14 + r11) = r0; // stw @ 0x807C2E60
    *(0x18 + r11) = r0; // stw @ 0x807C2E64
    *(0x1c + r11) = r0; // stw @ 0x807C2E68
    *(0x20 + r11) = r0; // stw @ 0x807C2E6C
    *(0x24 + r11) = r0; // stw @ 0x807C2E70
    *(0x28 + r11) = r0; // stw @ 0x807C2E74
    *(0x2c + r11) = r0; // stw @ 0x807C2E78
    /* b 0x807c2efc */ // 0x807C2E7C
    r30 = *(4 + r10); // lwz @ 0x807C2E80
    r9 = *(0x14 + r30); // lwz @ 0x807C2E84
    r0 = *(0xa + r9); // lbz @ 0x807C2E88
    if (!=) goto 0x0x807c2ef4;
    /* lfs f0, 0x28(r9) */ // 0x807C2E94
    /* fdivs f0, f0, f4 */ // 0x807C2E98
    /* fmuls f0, f3, f0 */ // 0x807C2E9C
    /* fsubs f0, f0, f2 */ // 0x807C2EA0
    /* fctiwz f0, f0 */ // 0x807C2EA4
    /* stfd f0, 8(r1) */ // 0x807C2EA8
    r6 = *(0xc + r1); // lwz @ 0x807C2EAC
    r6 = r6 + 6; // 0x807C2EB0
    if (<=) goto 0x0x807c2ec4;
    /* li r6, 0xb */ // 0x807C2EBC
    /* b 0x807c2ed0 */ // 0x807C2EC0
    if (>=) goto 0x0x807c2ed0;
    /* li r6, 0 */ // 0x807C2ECC
    if (!=) goto 0x0x807c2ee0;
    r12 = r6;
    /* b 0x807c2ef4 */ // 0x807C2EDC
    r0 = *(0x20 + r30); // lbz @ 0x807C2EE0
    if (==) goto 0x0x807c2ef4;
    /* slwi r0, r6, 2 */ // 0x807C2EEC
    /* stwx r5, r11, r0 */ // 0x807C2EF0
    r31 = r31 + 1; // 0x807C2EF8
    r0 = *(0x34 + r3); // lwz @ 0x807C2EFC
    if (<) goto 0x0x807c2e80;
    if (>) goto 0x0x807c2fa8;
    /* lis r3, 0 */ // 0x807C2F10
    /* slwi r0, r12, 2 */ // 0x807C2F14
    r3 = r3 + 0; // 0x807C2F18
    /* lwzx r0, r3, r0 */ // 0x807C2F1C
    if (==) goto 0x0x807c2fa8;
    /* li r0, 0x14 */ // 0x807C2F28
    r4 = r7 + 0x70; // 0x807C2F2C
    /* mtctr r0 */ // 0x807C2F30
    r0 = *(0 + r4); // lwz @ 0x807C2F34
    r5 = r12 + r0; // 0x807C2F38
    if (<=) goto 0x0x807c2f4c;
    /* li r5, 0xb */ // 0x807C2F44
    /* b 0x807c2f58 */ // 0x807C2F48
    if (>=) goto 0x0x807c2f58;
    /* li r5, 0 */ // 0x807C2F54
    /* slwi r0, r5, 2 */ // 0x807C2F58
    /* lwzx r0, r3, r0 */ // 0x807C2F5C
    if (!=) goto 0x0x807c2fa0;
    r3 = r5 + -6; // 0x807C2F68
    /* lis r0, 0x4330 */ // 0x807C2F6C
    /* xoris r3, r3, 0x8000 */ // 0x807C2F70
    *(0xc + r1) = r3; // stw @ 0x807C2F74
    /* lfd f3, 0xc8(r7) */ // 0x807C2F78
    *(8 + r1) = r0; // stw @ 0x807C2F7C
    /* lfs f1, 0x18(r7) */ // 0x807C2F80
    /* lfd f2, 8(r1) */ // 0x807C2F84
    /* lfs f0, 0xc0(r7) */ // 0x807C2F88
    /* fsubs f2, f2, f3 */ // 0x807C2F8C
    /* fadds f1, f1, f2 */ // 0x807C2F90
    /* fdivs f0, f1, f0 */ // 0x807C2F94
    /* fmuls f1, f4, f0 */ // 0x807C2F98
    /* b 0x807c2fa8 */ // 0x807C2F9C
    r4 = r4 + 4; // 0x807C2FA0
    if (counter-- != 0) goto 0x0x807c2f34;
    r31 = *(0x1c + r1); // lwz @ 0x807C2FA8
    r30 = *(0x18 + r1); // lwz @ 0x807C2FAC
    return;
}