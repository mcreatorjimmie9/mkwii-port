/* Function at 0x805CEFB4, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_805CEFB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805CEFCC
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x805CEFD4
    *(0x10 + r1) = r28; // stw @ 0x805CEFD8
    r28 = r5;
    if (!=) goto 0x0x805ceff4;
    /* lis r5, 0 */ // 0x805CEFE4
    /* slwi r0, r4, 2 */ // 0x805CEFE8
    r5 = r5 + 0; // 0x805CEFEC
    /* lwzx r30, r5, r0 */ // 0x805CEFF0
    r3 = *(4 + r3); // lwz @ 0x805CEFF4
    /* slwi r29, r4, 2 */ // 0x805CEFF8
    /* lwzx r3, r3, r29 */ // 0x805CEFFC
    FUN_805BA42C(r5); // bl 0x805BA42C
    if (!=) goto 0x0x805cf094;
    r0 = *(0 + r30); // lbz @ 0x805CF00C
    /* extsb. r0, r0 */ // 0x805CF010
    if (==) goto 0x0x805cf094;
    r6 = *(4 + r31); // lwz @ 0x805CF018
    r4 = r30;
    r3 = r31 + 0x344; // 0x805CF020
    /* li r5, 0x40 */ // 0x805CF024
    /* lwzx r30, r6, r29 */ // 0x805CF028
    *(0x338 + r31) = r30; // stw @ 0x805CF02C
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805CF034
    *(0x384 + r31) = r28; // stw @ 0x805CF038
    r3 = *(0x584 + r31); // lwz @ 0x805CF03C
    r4 = r4 + 0; // 0x805CF040
    /* li r5, 0 */ // 0x805CF044
    /* li r6, 0 */ // 0x805CF048
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    FUN_805CEC04(r4, r5, r6, r3); // bl 0x805CEC04
    r3 = r30;
}