/* Function at 0x80838250, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80838250(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80838268
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80838270
    r29 = r5;
    if (==) goto 0x0x808382c4;
    if (==) goto 0x0x808382c4;
    /* .byte 0xe0, 0x64, 0x00, 0x54 */ // 0x80838284
    /* lis r3, 0 */ // 0x80838288
    /* .byte 0xe0, 0x44, 0x01, 0xa8 */ // 0x8083828C
    /* .byte 0xe0, 0x24, 0x80, 0x50 */ // 0x80838290
    /* .byte 0x10, 0x63, 0x00, 0xb2 */ // 0x80838294
    /* .byte 0xe0, 0x44, 0x81, 0xa4 */ // 0x80838298
    /* lfs f0, 0(r3) */ // 0x8083829C
    /* .byte 0x10, 0x41, 0x18, 0xba */ // 0x808382A0
    /* .byte 0x10, 0x22, 0x18, 0xd4 */ // 0x808382A4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808382A8
    /* mfcr r0 */ // 0x808382AC
    /* srwi r0, r0, 0x1f */ // 0x808382B0
    *(0x1dc + r4) = r0; // stb @ 0x808382B4
    r3 = r0;
    r4 = r4 + 0x54; // 0x808382BC
    FUN_80825CB0(r3, r4); // bl 0x80825CB0
    r3 = r30;
    r4 = r31;
    r5 = r29;
    FUN_80826540(r4, r3, r4, r5); // bl 0x80826540
    r30 = r3;
    if (==) goto 0x0x808382f4;
    if (!=) goto 0x0x808382f4;
    /* lfs f1, 0x54(r31) */ // 0x808382E8
    FUN_80825D38(); // bl 0x80825D38
}