/* Function at 0x808D3DE8, size=292 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */

int FUN_808D3DE8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    r0 = r4 + -0x18; // 0x808D3DEC
    /* lis r7, 0 */ // 0x808D3DF4
    *(0x3c + r1) = r31; // stw @ 0x808D3DF8
    r7 = r7 + 0; // 0x808D3DFC
    if (<=) goto 0x0x808d3e20;
    r0 = r4 + -0x1e; // 0x808D3E04
    if (<=) goto 0x0x808d3e28;
    r0 = r4 + -0x24; // 0x808D3E10
    if (<=) goto 0x0x808d3e30;
    /* b 0x808d3e34 */ // 0x808D3E1C
    /* li r4, 0x18 */ // 0x808D3E20
    /* b 0x808d3e34 */ // 0x808D3E24
    /* li r4, 0x19 */ // 0x808D3E28
    /* b 0x808d3e34 */ // 0x808D3E2C
    /* li r4, 0x1a */ // 0x808D3E30
    /* li r0, 7 */ // 0x808D3E34
    /* slwi r12, r5, 2 */ // 0x808D3E38
    /* slwi r11, r4, 2 */ // 0x808D3E40
    /* lfd f4, 0x70(r7) */ // 0x808D3E44
    /* li r31, 0 */ // 0x808D3E48
    /* lfs f2, 0x64(r7) */ // 0x808D3E4C
    /* li r8, 0 */ // 0x808D3E50
    /* lfs f0, 0x68(r7) */ // 0x808D3E54
    /* li r10, 0 */ // 0x808D3E58
    /* lis r5, 0x4330 */ // 0x808D3E5C
    /* mtctr r0 */ // 0x808D3E60
    r4 = *(0x178 + r3); // lwz @ 0x808D3E64
    r0 = *(0x17c + r3); // lwz @ 0x808D3E6C
    /* lwzx r6, r11, r4 */ // 0x808D3E70
    /* lwzx r4, r12, r0 */ // 0x808D3E74
    /* lhax r6, r6, r8 */ // 0x808D3E78
    /* lhax r0, r4, r8 */ // 0x808D3E7C
    r0 = r6 + r0; // 0x808D3E80
    *(0 + r9) = r0; // stw @ 0x808D3E84
    if (!=) goto 0x0x808d3e98;
    r4 = *(0 + r9); // lwz @ 0x808D3E8C
    r0 = r4 + 5; // 0x808D3E90
    *(0 + r9) = r0; // stw @ 0x808D3E94
    if (!=) goto 0x0x808d3ea8;
    /* lfs f1, 0x5c(r7) */ // 0x808D3EA0
    /* b 0x808d3eac */ // 0x808D3EA4
    /* lfs f1, 0x60(r7) */ // 0x808D3EA8
    r4 = *(0 + r9); // lwz @ 0x808D3EAC
    /* fadds f1, f2, f1 */ // 0x808D3EB0
    *(0x30 + r1) = r5; // stw @ 0x808D3EB4
    r8 = r8 + 2; // 0x808D3EB8
    r4 = r4 + 5; // 0x808D3EBC
    r0 = *(0x174 + r3); // lwz @ 0x808D3EC0
    /* xoris r4, r4, 0x8000 */ // 0x808D3EC4
    *(0x34 + r1) = r4; // stw @ 0x808D3EC8
    r4 = r0 + r10; // 0x808D3ECC
    r4 = *(0x174 + r4); // lwz @ 0x808D3ED0
    /* lfd f3, 0x30(r1) */ // 0x808D3ED8
    r9 = r9 + 4; // 0x808D3EDC
    /* stfs f0, 0xc(r1) */ // 0x808D3EE0
    r31 = r31 + 1; // 0x808D3EE4
    /* fsubs f3, f3, f4 */ // 0x808D3EE8
    /* fdivs f1, f3, f1 */ // 0x808D3EEC
    /* stfs f1, 0x44(r4) */ // 0x808D3EF0
    /* stfs f1, 8(r1) */ // 0x808D3EF4
    /* stfs f0, 0x48(r4) */ // 0x808D3EF8
    if (counter-- != 0) goto 0x0x808d3e64;
    r31 = *(0x3c + r1); // lwz @ 0x808D3F00
    return;
}