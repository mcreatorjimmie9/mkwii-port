/* Function at 0x805E1180, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805E1180(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* lis r4, 0 */ // 0x805E1188
    /* lis r5, 0 */ // 0x805E118C
    *(0x34 + r1) = r0; // stw @ 0x805E1190
    /* stmw r22, 8(r1) */ // 0x805E1194
    /* li r27, 0 */ // 0x805E1198
    r30 = *(0 + r4); // lhz @ 0x805E119C
    /* lis r4, 0x1062 */ // 0x805E11A0
    r31 = *(0 + r5); // lhz @ 0x805E11A4
    r26 = r3;
    r25 = r30 * r27; // 0x805E11AC
    r23 = r4 + 0x4dd3; // 0x805E11B0
    /* li r29, 1 */ // 0x805E11B4
    /* li r28, 8 */ // 0x805E11B8
    /* li r22, 0 */ // 0x805E11BC
    /* lis r24, -0x8000 */ // 0x805E11C0
    /* b 0x805e12a8 */ // 0x805E11C4
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805e11f8;
    if (==) goto 0x0x805e1200;
    /* addis r0, r3, 0 */ // 0x805E11E0
    if (==) goto 0x0x805e1208;
}