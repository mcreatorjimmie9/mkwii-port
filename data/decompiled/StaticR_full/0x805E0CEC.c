/* Function at 0x805E0CEC, size=80 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805E0CEC(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    /* lis r4, 0 */ // 0x805E0CF4
    *(0x44 + r1) = r0; // stw @ 0x805E0CF8
    /* stmw r22, 0x18(r1) */ // 0x805E0CFC
    r30 = r4 + 0; // 0x805E0D00
    /* lis r29, 0 */ // 0x805E0D04
    r23 = r3;
    r29 = r29 + 0; // 0x805E0D0C
    /* li r22, 0 */ // 0x805E0D14
    r0 = *(0x6c + r30); // lwz @ 0x805E0D18
    r5 = *(0 + r3); // lwz @ 0x805E0D1C
    r3 = r29 + 0x1320; // 0x805E0D20
    /* slwi r0, r0, 2 */ // 0x805E0D24
    r24 = r5 + r0; // 0x805E0D28
    r25 = r5 + 8; // 0x805E0D2C
    /* li r5, 1 */ // 0x805E0D30
    r24 = r24 + 8; // 0x805E0D34
    FUN_805E3430(r5); // bl 0x805E3430
}