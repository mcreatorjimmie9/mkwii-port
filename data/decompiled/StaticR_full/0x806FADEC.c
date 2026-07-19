/* Function at 0x806FADEC, size=80 bytes */
/* Stack frame: 768 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_806FADEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -768(r1) */
    /* saved r25 */
    /* stmw r25, 0x2e4(r1) */ // 0x806FADF8
    r25 = r4 + 0x1c; // 0x806FADFC
    r28 = r4;
    r29 = r5;
    r27 = r3;
    r4 = r25;
    FUN_806FFC04(r4); // bl 0x806FFC04
    if (!=) goto 0x0x806fae24;
    /* li r3, 0 */ // 0x806FAE1C
    /* b 0x806faf7c */ // 0x806FAE20
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r5, 0 */ // 0x806FAE28
    r4 = r3;
    /* li r6, 0x14 */ // 0x806FAE34
    r5 = r5 + 0; // 0x806FAE38
}