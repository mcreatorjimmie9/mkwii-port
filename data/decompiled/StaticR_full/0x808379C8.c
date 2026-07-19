/* Function at 0x808379C8, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808379C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808379E0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808379E8
    r29 = r5;
    if (==) goto 0x0x80837a3c;
    if (==) goto 0x0x80837a3c;
    /* .byte 0xe0, 0x64, 0x00, 0x54 */ // 0x808379FC
    /* lis r3, 0 */ // 0x80837A00
    /* .byte 0xe0, 0x44, 0x01, 0xa8 */ // 0x80837A04
    /* .byte 0xe0, 0x24, 0x80, 0x50 */ // 0x80837A08
    /* .byte 0x10, 0x63, 0x00, 0xb2 */ // 0x80837A0C
    /* .byte 0xe0, 0x44, 0x81, 0xa4 */ // 0x80837A10
    /* lfs f0, 0(r3) */ // 0x80837A14
    /* .byte 0x10, 0x41, 0x18, 0xba */ // 0x80837A18
    /* .byte 0x10, 0x22, 0x18, 0xd4 */ // 0x80837A1C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80837A20
    /* mfcr r0 */ // 0x80837A24
    /* srwi r0, r0, 0x1f */ // 0x80837A28
    *(0x335 + r4) = r0; // stb @ 0x80837A2C
    r3 = r0;
    r4 = r4 + 0x54; // 0x80837A34
    FUN_80825CB0(r3, r4); // bl 0x80825CB0
    r3 = r31;
    r4 = r30;
    r5 = r29;
    FUN_80826540(r4, r3, r4, r5); // bl 0x80826540
    /* lis r4, 0 */ // 0x80837A4C
    /* li r5, 0 */ // 0x80837A50
    r0 = *(0 + r4); // lbz @ 0x80837A54
    if (!=) goto 0x0x80837a6c;
    if (==) goto 0x0x80837a6c;
    /* li r5, 1 */ // 0x80837A68
    if (==) goto 0x0x80837a7c;
    r4 = r30 + 0x268; // 0x80837A74
    /* b 0x80837a80 */ // 0x80837A78
    /* li r4, 0 */ // 0x80837A7C
    r5 = r29;
    FUN_8082642C(r4, r4, r5); // bl 0x8082642C
    r31 = r3;
    if (==) goto 0x0x80837aa8;
    if (!=) goto 0x0x80837aa8;
    /* lfs f1, 0x54(r30) */ // 0x80837A9C
    FUN_80825D38(); // bl 0x80825D38
}