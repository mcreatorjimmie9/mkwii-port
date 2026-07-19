/* Function at 0x807C3060, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_807C3060(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807C306C
    /* lis r28, 0 */ // 0x807C3070
    r30 = r3;
    r3 = *(0 + r28); // lwz @ 0x807C3078
    FUN_807BFFC0(); // bl 0x807BFFC0
    r5 = *(4 + r30); // lwz @ 0x807C3080
    r29 = r3;
    r3 = *(0 + r28); // lwz @ 0x807C3088
    /* li r4, 0x64 */ // 0x807C308C
    r0 = r5 + -1; // 0x807C3090
    /* cntlzw r0, r0 */ // 0x807C3094
    /* srwi r27, r0, 5 */ // 0x807C3098
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0xc + r30); // lwz @ 0x807C30A0
    /* clrlwi r26, r3, 0x18 */ // 0x807C30A4
    /* li r31, 0 */ // 0x807C30A8
    r3 = *(0 + r4); // lwz @ 0x807C30AC
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C30B4
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C30BC
    r3 = *(0 + r28); // lwz @ 0x807C30C0
    r4 = *(0xc + r4); // lwz @ 0x807C30C4
    r3 = *(0x8c + r3); // lwz @ 0x807C30C8
    /* lwzx r4, r4, r0 */ // 0x807C30CC
    r4 = *(0x20 + r4); // lbz @ 0x807C30D0
    r4 = r4 + -1; // 0x807C30D4
    FUN_807C1700(r4); // bl 0x807C1700
    r4 = *(0 + r3); // lbz @ 0x807C30DC
    if (>=) goto 0x0x807c3150;
    r3 = *(0 + r28); // lwz @ 0x807C30E8
    /* li r4, 3 */ // 0x807C30EC
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* clrlwi r3, r3, 0x18 */ // 0x807C30F8
    if (==) goto 0x0x807c3114;
    if (==) goto 0x0x807c3128;
    if (==) goto 0x0x807c313c;
    /* b 0x807c3164 */ // 0x807C3110
    /* li r31, 3 */ // 0x807C3118
    if (!=) goto 0x0x807c3164;
    r31 = r3 + 1; // 0x807C3120
    /* b 0x807c3164 */ // 0x807C3124
    /* li r31, 4 */ // 0x807C312C
    if (!=) goto 0x0x807c3164;
    r31 = r3 + 2; // 0x807C3134
    /* b 0x807c3164 */ // 0x807C3138
    /* li r31, 5 */ // 0x807C3140
    if (!=) goto 0x0x807c3164;
    r31 = r3 + 3; // 0x807C3148
    /* b 0x807c3164 */ // 0x807C314C
    r0 = *(1 + r3); // lbz @ 0x807C3150
    r0 = r4 + r0; // 0x807C3154
    if (>=) goto 0x0x807c3164;
    /* li r31, -1 */ // 0x807C3160
    *(8 + r30) = r31; // stw @ 0x807C3164
    r0 = *(0x24 + r1); // lwz @ 0x807C316C
    return;
}