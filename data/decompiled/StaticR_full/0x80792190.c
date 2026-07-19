/* Function at 0x80792190, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80792190(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x8079219C
    /* fmr f31, f1 */ // 0x807921A0
    *(0x14 + r1) = r31; // stw @ 0x807921A4
    /* li r31, 0 */ // 0x807921A8
    *(0x10 + r1) = r30; // stw @ 0x807921AC
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x807921B4
    r29 = r3;
    r3 = r3 + 0x8c; // 0x807921BC
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x807921d4;
    /* li r3, 0 */ // 0x807921CC
    /* b 0x80792258 */ // 0x807921D0
    r4 = *(0x80 + r29); // lwz @ 0x807921D4
    /* li r3, 0 */ // 0x807921D8
    if (==) goto 0x0x80792204;
    if (==) goto 0x0x807921f0;
    r0 = *(0x90 + r4); // lwz @ 0x807921E8
    /* b 0x807921f4 */ // 0x807921EC
    /* li r0, -1 */ // 0x807921F0
    if (!=) goto 0x0x80792204;
    r3 = r29 + 0x80; // 0x807921FC
    /* b 0x8079222c */ // 0x80792200
    r4 = *(0x84 + r29); // lwz @ 0x80792204
    if (==) goto 0x0x8079222c;
    if (==) goto 0x0x8079221c;
    r0 = *(0x90 + r4); // lwz @ 0x80792214
    /* b 0x80792220 */ // 0x80792218
    /* li r0, -1 */ // 0x8079221C
    if (!=) goto 0x0x8079222c;
    r3 = r29 + 0x84; // 0x80792228
    if (!=) goto 0x0x80792254;
    r12 = *(0 + r29); // lwz @ 0x80792234
    /* fmr f1, f31 */ // 0x80792238
    r3 = r29;
    r4 = r30;
    r12 = *(0xe0 + r12); // lwz @ 0x80792244
    /* mtctr r12 */ // 0x80792248
    /* bctrl  */ // 0x8079224C
    r31 = r3;
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80792258
    /* lfd f31, 0x18(r1) */ // 0x8079225C
    r31 = *(0x14 + r1); // lwz @ 0x80792260
    r30 = *(0x10 + r1); // lwz @ 0x80792264
    r29 = *(0xc + r1); // lwz @ 0x80792268
    return;
}