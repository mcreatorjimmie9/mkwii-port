/* Function at 0x8066E240, size=188 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 5 function(s) */

int FUN_8066E240(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* stmw r21, 0x14(r1) */ // 0x8066E24C
    /* slwi r31, r4, 2 */ // 0x8066E250
    r30 = r3;
    r21 = r4;
    r5 = *(4 + r3); // lwz @ 0x8066E25C
    /* lwzx r0, r5, r31 */ // 0x8066E260
    if (==) goto 0x0x8066e350;
    /* lis r3, 0 */ // 0x8066E26C
    r3 = *(0 + r3); // lwz @ 0x8066E270
    r3 = *(0 + r3); // lwz @ 0x8066E274
    r3 = *(0 + r3); // lwz @ 0x8066E278
    FUN_80694774(r3); // bl 0x80694774
    if (==) goto 0x0x8066e29c;
    r4 = *(4 + r30); // lwz @ 0x8066E288
    /* lis r3, 0 */ // 0x8066E28C
    r3 = *(0 + r3); // lwz @ 0x8066E290
    /* lwzx r4, r4, r31 */ // 0x8066E294
    FUN_80800A0C(r3); // bl 0x80800A0C
    /* mulli r23, r21, 0x24 */ // 0x8066E29C
    /* li r21, 0 */ // 0x8066E2A0
    /* lis r26, 0 */ // 0x8066E2A4
    r27 = r21;
    r26 = r26 + 0; // 0x8066E2AC
    /* li r29, 0 */ // 0x8066E2B0
    /* li r28, 0 */ // 0x8066E2B4
    r22 = r30 + r28; // 0x8066E2B8
    r0 = *(8 + r22); // lwz @ 0x8066E2BC
    if (==) goto 0x0x8066e308;
    r3 = r0 + r23; // 0x8066E2C8
    FUN_805E3430(); // bl 0x805E3430
    /* lhzx r5, r26, r29 */ // 0x8066E2D0
    /* addis r25, r3, -0x8000 */ // 0x8066E2D4
    r3 = r25;
    /* li r4, 0 */ // 0x8066E2DC
    /* slwi r0, r5, 1 */ // 0x8066E2E0
    r24 = r5 * r0; // 0x8066E2E4
    r5 = r24;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r25;
    r4 = r24;
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}