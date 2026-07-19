/* Function at 0x8074C008, size=464 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8074C008(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8074C020
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8074C028
    if (==) goto 0x0x8074c04c;
    if (==) goto 0x0x8074c0a8;
    if (==) goto 0x0x8074c104;
    if (==) goto 0x0x8074c160;
    /* b 0x8074c1b8 */ // 0x8074C048
    r0 = *(0x120 + r3); // lwz @ 0x8074C04C
    if (!=) goto 0x0x8074c1b8;
    /* lis r29, 0 */ // 0x8074C058
    /* li r0, 0 */ // 0x8074C05C
    /* lfs f0, 0(r29) */ // 0x8074C060
    *(0x120 + r3) = r0; // stw @ 0x8074C064
    /* stfs f0, 0x124(r3) */ // 0x8074C068
    r12 = *(0 + r3); // lwz @ 0x8074C06C
    r12 = *(0x90 + r12); // lwz @ 0x8074C070
    /* mtctr r12 */ // 0x8074C074
    /* bctrl  */ // 0x8074C078
    r3 = *(8 + r30); // lwz @ 0x8074C07C
    /* lis r5, 0 */ // 0x8074C080
    /* lfs f1, 0(r29) */ // 0x8074C084
    /* li r4, 5 */ // 0x8074C088
    r3 = *(0x28 + r3); // lwz @ 0x8074C08C
    /* lfs f2, 0(r5) */ // 0x8074C090
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r30;
    /* li r4, 0x293 */ // 0x8074C09C
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    /* b 0x8074c1b8 */ // 0x8074C0A4
    r0 = *(0x120 + r3); // lwz @ 0x8074C0A8
    if (!=) goto 0x0x8074c1b8;
    /* lis r29, 0 */ // 0x8074C0B4
    /* li r0, 0 */ // 0x8074C0B8
    /* lfs f0, 0(r29) */ // 0x8074C0BC
    *(0x120 + r3) = r0; // stw @ 0x8074C0C0
    /* stfs f0, 0x124(r3) */ // 0x8074C0C4
    r12 = *(0 + r3); // lwz @ 0x8074C0C8
    r12 = *(0x90 + r12); // lwz @ 0x8074C0CC
    /* mtctr r12 */ // 0x8074C0D0
    /* bctrl  */ // 0x8074C0D4
    r3 = *(8 + r30); // lwz @ 0x8074C0D8
    /* lis r5, 0 */ // 0x8074C0DC
    /* lfs f1, 0(r29) */ // 0x8074C0E0
    /* li r4, 5 */ // 0x8074C0E4
    r3 = *(0x28 + r3); // lwz @ 0x8074C0E8
    /* lfs f2, 0(r5) */ // 0x8074C0EC
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r30;
    /* li r4, 0x293 */ // 0x8074C0F8
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    /* b 0x8074c1b8 */ // 0x8074C100
    r0 = *(0x120 + r3); // lwz @ 0x8074C104
    if (!=) goto 0x0x8074c1b8;
    /* lis r29, 0 */ // 0x8074C110
    /* li r0, 0 */ // 0x8074C114
    /* lfs f0, 0(r29) */ // 0x8074C118
    *(0x120 + r3) = r0; // stw @ 0x8074C11C
    /* stfs f0, 0x124(r3) */ // 0x8074C120
    r12 = *(0 + r3); // lwz @ 0x8074C124
    r12 = *(0x90 + r12); // lwz @ 0x8074C128
    /* mtctr r12 */ // 0x8074C12C
    /* bctrl  */ // 0x8074C130
    r3 = *(8 + r30); // lwz @ 0x8074C134
    /* lis r5, 0 */ // 0x8074C138
    /* lfs f1, 0(r29) */ // 0x8074C13C
    /* li r4, 5 */ // 0x8074C140
    r3 = *(0x28 + r3); // lwz @ 0x8074C144
    /* lfs f2, 0(r5) */ // 0x8074C148
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r30;
    /* li r4, 0x293 */ // 0x8074C154
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    /* b 0x8074c1b8 */ // 0x8074C15C
    r0 = *(0x120 + r3); // lwz @ 0x8074C160
    if (!=) goto 0x0x8074c1b8;
    /* lis r29, 0 */ // 0x8074C16C
    /* li r0, 0 */ // 0x8074C170
    /* lfs f0, 0(r29) */ // 0x8074C174
    *(0x120 + r3) = r0; // stw @ 0x8074C178
    /* stfs f0, 0x124(r3) */ // 0x8074C17C
    r12 = *(0 + r3); // lwz @ 0x8074C180
    r12 = *(0x90 + r12); // lwz @ 0x8074C184
    /* mtctr r12 */ // 0x8074C188
    /* bctrl  */ // 0x8074C18C
    r3 = *(8 + r30); // lwz @ 0x8074C190
    /* lis r5, 0 */ // 0x8074C194
    /* lfs f1, 0(r29) */ // 0x8074C198
    /* li r4, 5 */ // 0x8074C19C
    r3 = *(0x28 + r3); // lwz @ 0x8074C1A0
    /* lfs f2, 0(r5) */ // 0x8074C1A4
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r30;
    /* li r4, 0x293 */ // 0x8074C1B0
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x8074C1BC
    r30 = *(0x18 + r1); // lwz @ 0x8074C1C0
    r29 = *(0x14 + r1); // lwz @ 0x8074C1C4
    r0 = *(0x24 + r1); // lwz @ 0x8074C1C8
    return;
}