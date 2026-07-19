/* Function at 0x806586B4, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806586B4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x806586C0
    r28 = r5;
    r27 = r4;
    r26 = r3;
    r4 = r28;
    r6 = *(0x14 + r3); // lwz @ 0x806586D4
    r31 = *(8 + r6); // lwz @ 0x806586D8
    r8 = *(0xc + r31); // lhz @ 0x806586DC
    r0 = *(0xe + r31); // lhz @ 0x806586E0
    r7 = *(0 + r31); // lbz @ 0x806586E4
    r25 = r8 * r0; // 0x806586E8
    r6 = *(1 + r31); // lbz @ 0x806586EC
    r7 = r7 + 1; // 0x806586F0
    r0 = r6 + 1; // 0x806586F4
    r6 = r5 u/ r25; // 0x806586F8
    r6 = r6 * r25; // 0x806586FC
    /* subf r9, r6, r5 */ // 0x80658700
    r6 = r9 u/ r8; // 0x80658704
    r5 = r6 * r8; // 0x80658708
    /* subf r5, r5, r9 */ // 0x8065870C
    r30 = r5 * r7; // 0x80658710
    r29 = r6 * r0; // 0x80658714
    FUN_805E3430(); // bl 0x805E3430
}