/* Function at 0x80780D40, size=676 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_80780D40(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x80780D48
    *(0x14 + r1) = r29; // stw @ 0x80780D58
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x80780D60
    r5 = *(0 + r4); // lwz @ 0x80780D64
    r0 = *(0xb74 + r5); // lwz @ 0x80780D68
    if (!=) goto 0x0x80780df8;
    r3 = *(0xb8 + r3); // lwz @ 0x80780D74
    r12 = *(0 + r3); // lwz @ 0x80780D78
    r12 = *(0xc + r12); // lwz @ 0x80780D7C
    /* mtctr r12 */ // 0x80780D80
    /* bctrl  */ // 0x80780D84
    r3 = r29;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb8 + r29); // lwz @ 0x80780D90
    r4 = r29 + 0x58; // 0x80780D94
    r12 = *(0 + r3); // lwz @ 0x80780D98
    r12 = *(0x78 + r12); // lwz @ 0x80780D9C
    /* mtctr r12 */ // 0x80780DA0
    /* bctrl  */ // 0x80780DA4
    r3 = *(0xb8 + r29); // lwz @ 0x80780DA8
    /* lfs f1, 0x40(r29) */ // 0x80780DAC
    r12 = *(0 + r3); // lwz @ 0x80780DB0
    r12 = *(0x6c + r12); // lwz @ 0x80780DB4
    /* mtctr r12 */ // 0x80780DB8
    /* bctrl  */ // 0x80780DBC
    r3 = *(0xb8 + r29); // lwz @ 0x80780DC0
    r12 = *(0 + r3); // lwz @ 0x80780DC4
    r12 = *(0x80 + r12); // lwz @ 0x80780DC8
    /* mtctr r12 */ // 0x80780DCC
    /* bctrl  */ // 0x80780DD0
    r4 = *(0xc8 + r29); // lwz @ 0x80780DD4
    /* lis r3, 0 */ // 0x80780DD8
    /* lfs f1, 0(r3) */ // 0x80780DDC
    r3 = r29;
    r0 = r4 + 1; // 0x80780DE4
    *(0xc8 + r29) = r0; // stw @ 0x80780DE8
    /* li r4, 0x35d */ // 0x80780DEC
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    /* b 0x807810d4 */ // 0x80780DF4
    /* lis r4, 0 */ // 0x80780DF8
    r0 = *(0xc4 + r3); // lwz @ 0x80780DFC
    r4 = *(0 + r4); // lwz @ 0x80780E00
    r6 = *(0x20 + r4); // lwz @ 0x80780E04
    if (<) goto 0x0x807810d4;
    r4 = *(0x24 + r5); // lbz @ 0x80780E10
    /* li r31, 0 */ // 0x80780E14
    r12 = *(0 + r3); // lwz @ 0x80780E18
    r0 = r6 u/ r4; // 0x80780E1C
    r12 = *(0x30 + r12); // lwz @ 0x80780E20
    r0 = r0 * r4; // 0x80780E24
    /* subf r0, r0, r6 */ // 0x80780E28
    /* clrlwi r30, r0, 0x18 */ // 0x80780E2C
    /* mtctr r12 */ // 0x80780E30
    /* bctrl  */ // 0x80780E34
    /* lis r4, 0x101 */ // 0x80780E38
    r0 = *(0x20 + r3); // lwz @ 0x80780E3C
    r3 = r4 + 0x101; // 0x80780E40
    /* andc. r0, r3, r0 */ // 0x80780E44
    if (!=) goto 0x0x80780e64;
    /* lis r3, 0 */ // 0x80780E4C
    r3 = *(0 + r3); // lwz @ 0x80780E50
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80780e64;
    /* li r31, 1 */ // 0x80780E60
    r0 = *(0xc1 + r29); // lbz @ 0x80780E64
    if (==) goto 0x0x80780ebc;
    r5 = *(0xcc + r29); // lwz @ 0x80780E70
    /* li r30, 0 */ // 0x80780E74
    r4 = *(0xc8 + r29); // lwz @ 0x80780E78
    r3 = *(0xd0 + r29); // lwz @ 0x80780E7C
    r0 = r5 ^ r4; // 0x80780E80
    r3 = r5 + r3; // 0x80780E88
    /* subf r4, r4, r3 */ // 0x80780E8C
    r3 = r0 >> 1; // srawi
    r0 = r0 & r5; // 0x80780E94
    /* cntlzw r4, r4 */ // 0x80780E98
    /* subf r0, r0, r3 */ // 0x80780E9C
    /* srwi r5, r4, 5 */ // 0x80780EA0
    /* srwi r28, r0, 0x1f */ // 0x80780EA4
    if (<) goto 0x0x80780f64;
    if (!=) goto 0x0x80780f64;
    /* li r30, 1 */ // 0x80780EB4
    /* b 0x80780f64 */ // 0x80780EB8
    /* lis r3, 0 */ // 0x80780EBC
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x80780EC4
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DA88(r3, r4); // bl 0x8061DA88
    /* lfs f3, 0x30(r29) */ // 0x80780ED0
    /* lfs f0, 0(r3) */ // 0x80780ED4
    /* lfs f2, 0x38(r29) */ // 0x80780ED8
    /* lfs f1, 8(r3) */ // 0x80780EDC
    /* fsubs f3, f3, f0 */ // 0x80780EE0
    /* lfs f0, 0xbc(r29) */ // 0x80780EE4
    /* fsubs f1, f2, f1 */ // 0x80780EE8
    /* fmuls f2, f3, f3 */ // 0x80780EEC
    /* fmuls f1, f1, f1 */ // 0x80780EF0
    /* fadds f1, f2, f1 */ // 0x80780EF4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80780EF8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80780EFC
    /* mfcr r3 */ // 0x80780F00
    r4 = *(0xcc + r29); // lwz @ 0x80780F04
    /* rlwinm. r3, r3, 3, 0x1f, 0x1f */ // 0x80780F08
    r0 = *(0xd0 + r29); // lwz @ 0x80780F0C
    r3 = *(0xc8 + r29); // lwz @ 0x80780F10
    /* li r5, 0 */ // 0x80780F14
    r0 = r4 + r0; // 0x80780F18
    /* subf r0, r3, r0 */ // 0x80780F1C
    /* cntlzw r0, r0 */ // 0x80780F20
    /* srwi r0, r0, 5 */ // 0x80780F24
    if (==) goto 0x0x80780f38;
    if (==) goto 0x0x80780f38;
    /* li r5, 1 */ // 0x80780F34
    r0 = r4 ^ r3; // 0x80780F38
    r3 = r0 >> 1; // srawi
    /* li r30, 0 */ // 0x80780F44
    r0 = r0 & r4; // 0x80780F48
    /* subf r0, r0, r3 */ // 0x80780F4C
    /* srwi r28, r0, 0x1f */ // 0x80780F50
    if (<) goto 0x0x80780f64;
    if (!=) goto 0x0x80780f64;
    /* li r30, 1 */ // 0x80780F60
    if (==) goto 0x0x80780f94;
    r0 = *(0xc0 + r29); // lbz @ 0x80780F6C
    /* li r3, 0 */ // 0x80780F70
    *(0xc8 + r29) = r3; // stw @ 0x80780F74
    if (==) goto 0x0x80780f94;
    r12 = *(0 + r29); // lwz @ 0x80780F80
    r3 = r29;
    r12 = *(0x94 + r12); // lwz @ 0x80780F88
    /* mtctr r12 */ // 0x80780F8C
    /* bctrl  */ // 0x80780F90
    if (==) goto 0x0x80780ff4;
    if (!=) goto 0x0x80781030;
    r3 = *(0xb8 + r29); // lwz @ 0x80780FA4
    r12 = *(0 + r3); // lwz @ 0x80780FA8
    r12 = *(0xc + r12); // lwz @ 0x80780FAC
    /* mtctr r12 */ // 0x80780FB0
    /* bctrl  */ // 0x80780FB4
    r3 = r29;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb8 + r29); // lwz @ 0x80780FC0
    r4 = r29 + 0x58; // 0x80780FC4
    r12 = *(0 + r3); // lwz @ 0x80780FC8
    r12 = *(0x78 + r12); // lwz @ 0x80780FCC
    /* mtctr r12 */ // 0x80780FD0
    /* bctrl  */ // 0x80780FD4
    r3 = *(0xb8 + r29); // lwz @ 0x80780FD8
    /* lfs f1, 0x40(r29) */ // 0x80780FDC
    r12 = *(0 + r3); // lwz @ 0x80780FE0
}