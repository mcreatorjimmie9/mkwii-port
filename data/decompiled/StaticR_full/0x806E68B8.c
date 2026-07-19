/* Function at 0x806E68B8, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_806E68B8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x806E68C4
    r27 = r3;
    r22 = r4;
    r23 = r5;
    /* li r25, 0 */ // 0x806E68D4
    /* li r28, 0 */ // 0x806E68D8
    /* lis r29, 0 */ // 0x806E68DC
    /* li r30, 1 */ // 0x806E68E0
    /* li r31, 0 */ // 0x806E68E4
    r26 = r22;
    /* li r24, 0 */ // 0x806E68EC
    /* b 0x806e6924 */ // 0x806E68F0
    r3 = *(0 + r29); // lwz @ 0x806E68F4
    r4 = r3 + r28; // 0x806E68F8
    r3 = r3 + 0x1c; // 0x806E68FC
    r4 = r4 + 0x9c; // 0x806E6900
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0 + r26); // lwz @ 0x806E6908
    if (!=) goto 0x0x806e691c;
    *(0x25f5 + r27) = r30; // stb @ 0x806E6914
    /* b 0x806e692c */ // 0x806E6918
    r26 = r26 + 4; // 0x806E691C
    r24 = r24 + 1; // 0x806E6920
    if (<) goto 0x0x806e68f4;
    if (!=) goto 0x0x806e695c;
    r3 = *(0 + r29); // lwz @ 0x806E6934
    r4 = r3 + r28; // 0x806E6938
    r3 = r3 + 0x1c; // 0x806E693C
    r4 = r4 + 0x9c; // 0x806E6940
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x806e6958;
    *(0x25f5 + r27) = r30; // stb @ 0x806E6950
}