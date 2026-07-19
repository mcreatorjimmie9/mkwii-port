/* Function at 0x80659028, size=192 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_80659028(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x80659034
    r30 = r3;
    /* li r29, 0 */ // 0x8065903C
    /* lis r25, 0 */ // 0x80659040
    /* lis r31, 0 */ // 0x80659044
    /* lis r24, 1 */ // 0x80659048
    /* li r27, 0 */ // 0x8065904C
    /* li r28, -1 */ // 0x80659050
    /* li r26, 1 */ // 0x80659054
    r5 = *(0 + r31); // lwz @ 0x80659058
    r3 = r30 + 8; // 0x8065905C
    r0 = *(0x36 + r5); // lha @ 0x80659060
    if (<) goto 0x0x80659084;
    /* clrlwi r4, r0, 0x18 */ // 0x8065906C
    r0 = r24 + -0x6c10; // 0x80659070
    r0 = r0 * r4; // 0x80659074
    r4 = r5 + r0; // 0x80659078
    r4 = r4 + 0x38; // 0x8065907C
    /* b 0x80659088 */ // 0x80659080
    /* li r4, 0 */ // 0x80659084
    /* clrlwi r0, r29, 0x10 */ // 0x80659088
    /* mulli r0, r0, 0x1c0 */ // 0x8065908C
    r4 = r4 + r0; // 0x80659090
    r4 = r4 + 0x59d0; // 0x80659094
    FUN_805A92DC(r4, r4); // bl 0x805A92DC
    r0 = *(0x20 + r30); // lhz @ 0x8065909C
    /* clrlwi. r0, r0, 0x1f */ // 0x806590A0
    if (==) goto 0x0x80659108;
    r3 = r30;
    r4 = r30 + 0x10; // 0x806590AC
    /* li r5, 8 */ // 0x806590B0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = *(0x20 + r30); // lhz @ 0x806590B8
    /* clrlwi. r0, r3, 0x1f */ // 0x806590BC
    if (!=) goto 0x0x806590cc;
    /* li r0, 0 */ // 0x806590C4
    /* b 0x806590dc */ // 0x806590C8
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x806590CC
    /* li r0, 2 */ // 0x806590D0
    if (==) goto 0x0x806590dc;
    /* li r0, 1 */ // 0x806590D8
    if (!=) goto 0x0x80659100;
    r3 = *(0 + r25); // lwz @ 0x806590E4
}