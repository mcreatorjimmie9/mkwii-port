/* Function at 0x806FFC04, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806FFC04(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* lis r3, 1 */ // 0x806FFC0C
    *(0x34 + r1) = r0; // stw @ 0x806FFC10
    r0 = r3 + -0x6c10; // 0x806FFC14
    /* stmw r27, 0x1c(r1) */ // 0x806FFC18
    r30 = r4;
    r28 = r5 * r0; // 0x806FFC20
    /* lis r29, 0 */ // 0x806FFC24
    r3 = r30;
    /* li r4, 0 */ // 0x806FFC2C
    /* li r5, 0x430 */ // 0x806FFC30
    r0 = *(0 + r29); // lwz @ 0x806FFC34
    r6 = r0 + r28; // 0x806FFC38
    r31 = r6 + 0x38; // 0x806FFC3C
    FUN_805E3430(r4, r5); // bl 0x805E3430
}