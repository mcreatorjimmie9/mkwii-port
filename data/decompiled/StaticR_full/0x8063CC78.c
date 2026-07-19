/* Function at 0x8063CC78, size=120 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 2 function(s) */

int FUN_8063CC78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* li r5, 0x80 */ // 0x8063CC80
    /* li r6, 0x80 */ // 0x8063CC84
    *(0x44 + r1) = r0; // stw @ 0x8063CC88
    /* stmw r20, 0x10(r1) */ // 0x8063CC8C
    r30 = r3;
    FUN_805F1EA0(r5, r6); // bl 0x805F1EA0
    /* lis r21, 0 */ // 0x8063CC98
    /* lis r23, 0 */ // 0x8063CC9C
    /* lis r24, 0 */ // 0x8063CCA0
    /* lis r25, 0 */ // 0x8063CCA4
    /* lis r26, 0 */ // 0x8063CCA8
    /* lis r27, 0 */ // 0x8063CCAC
    /* lis r28, 0 */ // 0x8063CCB0
    /* lis r29, 0 */ // 0x8063CCB4
    r21 = r21 + 0; // 0x8063CCB8
    r23 = r23 + 0; // 0x8063CCBC
    r24 = r24 + 0; // 0x8063CCC0
    r25 = r25 + 0; // 0x8063CCC4
    r26 = r26 + 0; // 0x8063CCC8
    r27 = r27 + 0; // 0x8063CCCC
    r28 = r28 + 0; // 0x8063CCD0
    r29 = r29 + 0; // 0x8063CCD4
    /* li r31, 0 */ // 0x8063CCD8
    /* li r22, 0 */ // 0x8063CCDC
    r4 = *(0x10 + r30); // lwz @ 0x8063CCE0
    /* li r3, 0xc */ // 0x8063CCE4
    /* li r5, 4 */ // 0x8063CCE8
    FUN_805E3430(r3, r5); // bl 0x805E3430
}