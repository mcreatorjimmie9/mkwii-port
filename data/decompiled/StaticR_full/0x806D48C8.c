/* Function at 0x806D48C8, size=100 bytes */
/* Stack frame: 1440 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_806D48C8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -1440(r1) */
    /* saved r22 */
    /* stmw r22, 0x578(r1) */ // 0x806D48D4
    r23 = r3;
    r24 = r4;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r24 + 0x2490; // 0x806D48E8
    *(0x90 + r1) = r0; // stw @ 0x806D48EC
    r3 = r23 + 0x4f4; // 0x806D48F0
    /* li r4, 0x1775 */ // 0x806D48F8
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r28, 0 */ // 0x806D4900
    /* lis r4, 0 */ // 0x806D4904
    /* lis r5, 0 */ // 0x806D4908
    *(0x16b4 + r23) = r28; // stw @ 0x806D490C
    r4 = r4 + 0; // 0x806D4914
    r5 = r5 + 0; // 0x806D4918
    /* li r26, 0 */ // 0x806D491C
    /* li r6, 0x20 */ // 0x806D4920
    /* li r7, 0x22 */ // 0x806D4924
    FUN_805E3430(r4, r5, r6, r7); // bl 0x805E3430
}