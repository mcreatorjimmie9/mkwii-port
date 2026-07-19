/* Function at 0x805ACDE0, size=324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805ACDE0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805ACDF4
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805ACDFC
    r0 = *(0xc + r3); // lhz @ 0x805ACE00
    r6 = r0 rlwinm 0x15; // rlwinm
    if (==) goto 0x0x805ace20;
    /* li r0, 0 */ // 0x805ACE10
    *(0 + r4) = r0; // stw @ 0x805ACE14
    /* li r3, 0 */ // 0x805ACE18
    /* b 0x805acf98 */ // 0x805ACE1C
    r4 = *(0 + r3); // lwz @ 0x805ACE20
    /* addis r0, r4, -0x524b */ // 0x805ACE24
    if (==) goto 0x0x805ace38;
    /* li r0, 0 */ // 0x805ACE30
    /* b 0x805acea8 */ // 0x805ACE34
    r4 = *(8 + r3); // lwz @ 0x805ACE38
    /* srwi r0, r4, 0x1a */ // 0x805ACE3C
    if (<) goto 0x0x805ace50;
    /* li r0, 0 */ // 0x805ACE48
    /* b 0x805acea8 */ // 0x805ACE4C
    r0 = r4 rlwinm 0xc; // rlwinm
    if (<) goto 0x0x805ace64;
    /* li r0, 0 */ // 0x805ACE5C
    /* b 0x805acea8 */ // 0x805ACE60
    r0 = r4 rlwinm 0x13; // rlwinm
    if (<=) goto 0x0x805ace78;
    /* li r0, 0 */ // 0x805ACE70
    /* b 0x805acea8 */ // 0x805ACE74
    r0 = r4 rlwinm 0x1c; // rlwinm
    if (<=) goto 0x0x805ace8c;
    /* li r0, 0 */ // 0x805ACE84
    /* b 0x805acea8 */ // 0x805ACE88
    r5 = r4 rlwinm 0x17; // rlwinm
    /* li r4, 0xc */ // 0x805ACE90
    /* subfic r0, r5, 0xc */ // 0x805ACE94
    /* orc r4, r4, r5 */ // 0x805ACE98
    /* srwi r0, r0, 1 */ // 0x805ACE9C
    /* subf r0, r0, r4 */ // 0x805ACEA0
    /* srwi r0, r0, 0x1f */ // 0x805ACEA4
    if (!=) goto 0x0x805aceb8;
    /* li r0, 0 */ // 0x805ACEB0
    /* b 0x805acf04 */ // 0x805ACEB4
    if (!=) goto 0x0x805acee8;
    r4 = *(0x88 + r3); // lwz @ 0x805ACEC0
    r3 = r30;
    r29 = r4 + 0x8c; // 0x805ACEC8
    r4 = r29;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* lwzx r0, r30, r29 */ // 0x805ACED4
    /* subf r0, r0, r3 */ // 0x805ACED8
    /* cntlzw r0, r0 */ // 0x805ACEDC
    /* srwi r0, r0, 5 */ // 0x805ACEE0
    /* b 0x805acf04 */ // 0x805ACEE4
    r3 = r30;
    /* li r4, 0x27fc */ // 0x805ACEEC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0x27fc + r30); // lwz @ 0x805ACEF4
    /* subf r0, r0, r3 */ // 0x805ACEF8
    /* cntlzw r0, r0 */ // 0x805ACEFC
    /* srwi r0, r0, 5 */ // 0x805ACF00
    if (!=) goto 0x0x805acf1c;
    /* li r0, 0 */ // 0x805ACF0C
    *(0 + r31) = r0; // stw @ 0x805ACF10
    /* li r3, 0 */ // 0x805ACF14
    /* b 0x805acf98 */ // 0x805ACF18
    r3 = r31;
    /* li r4, 0 */ // 0x805ACF20
}