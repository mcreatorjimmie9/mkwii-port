/* Function at 0x805E12C8, size=140 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r17 */
/* Calls: 2 function(s) */

int FUN_805E12C8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* saved r17 */
    /* lis r7, 0 */ // 0x805E12D0
    /* lis r8, 0 */ // 0x805E12D4
    *(0x54 + r1) = r0; // stw @ 0x805E12D8
    /* stmw r17, 0x14(r1) */ // 0x805E12DC
    /* lis r28, 0 */ // 0x805E12E0
    r25 = *(0 + r7); // lhz @ 0x805E12E4
    /* li r22, 0 */ // 0x805E12E8
    /* lis r7, 0x1062 */ // 0x805E12EC
    r26 = *(0 + r8); // lhz @ 0x805E12F0
    r18 = r25 * r22; // 0x805E12F4
    r19 = r3;
    r20 = r4;
    r21 = r5;
    /* slwi r27, r6, 2 */ // 0x805E1304
    r28 = r28 + 0; // 0x805E1308
    r30 = r7 + 0x4dd3; // 0x805E130C
    /* li r24, 1 */ // 0x805E1310
    /* li r23, 8 */ // 0x805E1314
    /* li r29, 0 */ // 0x805E1318
    /* lis r31, -0x8000 */ // 0x805E131C
    /* b 0x805e143c */ // 0x805E1320
    /* lwzx r4, r28, r27 */ // 0x805E1324
    r3 = r20;
    /* li r5, 0 */ // 0x805E132C
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r17 = r3;
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r0 = r3 + -0x17; // 0x805E133C
    if (<=) goto 0x0x805e1394;
    if (==) goto 0x0x805e1378;
}