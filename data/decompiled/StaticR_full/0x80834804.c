/* Function at 0x80834804, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80834804(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8083481C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80834824
    r29 = r5;
    if (==) goto 0x0x80834878;
    if (==) goto 0x0x80834878;
    /* .byte 0xe0, 0x64, 0x00, 0x54 */ // 0x80834838
    /* lis r3, 0 */ // 0x8083483C
    /* .byte 0xe0, 0x44, 0x01, 0xa8 */ // 0x80834840
    /* .byte 0xe0, 0x24, 0x80, 0x50 */ // 0x80834844
    /* .byte 0x10, 0x63, 0x00, 0xb2 */ // 0x80834848
    /* .byte 0xe0, 0x44, 0x81, 0xa4 */ // 0x8083484C
    /* lfs f0, 0(r3) */ // 0x80834850
    /* .byte 0x10, 0x41, 0x18, 0xba */ // 0x80834854
    /* .byte 0x10, 0x22, 0x18, 0xd4 */ // 0x80834858
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083485C
    /* mfcr r0 */ // 0x80834860
    /* srwi r0, r0, 0x1f */ // 0x80834864
    *(0x2d0 + r4) = r0; // stb @ 0x80834868
    r3 = r0;
    r4 = r4 + 0x54; // 0x80834870
    FUN_80825CB0(r3, r4); // bl 0x80825CB0
    r3 = r31;
    r4 = r30;
    r5 = r29;
    FUN_80826540(r4, r3, r4, r5); // bl 0x80826540
    if (==) goto 0x0x80834898;
    r4 = r30 + 0x268; // 0x80834890
    /* b 0x8083489c */ // 0x80834894
    /* li r4, 0 */ // 0x80834898
    r5 = r29;
    FUN_8082642C(r4, r4, r5); // bl 0x8082642C
    r31 = r3;
    if (==) goto 0x0x808348c4;
    if (!=) goto 0x0x808348c4;
    /* lfs f1, 0x54(r30) */ // 0x808348B8
    FUN_80825D38(); // bl 0x80825D38
}