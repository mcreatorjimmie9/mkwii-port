/* Function at 0x807810F4, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807810F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80781100
    r31 = r3;
    r3 = *(0xb8 + r3); // lwz @ 0x80781108
    r12 = *(0 + r3); // lwz @ 0x8078110C
    r12 = *(0xc + r12); // lwz @ 0x80781110
    /* mtctr r12 */ // 0x80781114
    /* bctrl  */ // 0x80781118
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb8 + r31); // lwz @ 0x80781124
    r4 = r31 + 0x58; // 0x80781128
    r12 = *(0 + r3); // lwz @ 0x8078112C
    r12 = *(0x78 + r12); // lwz @ 0x80781130
    /* mtctr r12 */ // 0x80781134
    /* bctrl  */ // 0x80781138
    r3 = *(0xb8 + r31); // lwz @ 0x8078113C
    /* lfs f1, 0x40(r31) */ // 0x80781140
    r12 = *(0 + r3); // lwz @ 0x80781144
    r12 = *(0x6c + r12); // lwz @ 0x80781148
    /* mtctr r12 */ // 0x8078114C
    /* bctrl  */ // 0x80781150
    r3 = *(0xb8 + r31); // lwz @ 0x80781154
    r12 = *(0 + r3); // lwz @ 0x80781158
    r12 = *(0x80 + r12); // lwz @ 0x8078115C
    /* mtctr r12 */ // 0x80781160
    /* bctrl  */ // 0x80781164
    r4 = *(0xc8 + r31); // lwz @ 0x80781168
    /* lis r3, 0 */ // 0x8078116C
    /* lfs f1, 0(r3) */ // 0x80781170
    r3 = r31;
    r0 = r4 + 1; // 0x80781178
    *(0xc8 + r31) = r0; // stw @ 0x8078117C
    /* li r4, 0x35d */ // 0x80781180
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x80781188
    r31 = *(0xc + r1); // lwz @ 0x8078118C
    return;
}