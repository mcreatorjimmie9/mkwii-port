/* Function at 0x8080E308, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080E308(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080E318
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8080E320
    r30 = r3;
    if (==) goto 0x0x8080e364;
    r0 = *(8 + r3); // lwz @ 0x8080E32C
    /* lis r4, 0 */ // 0x8080E330
    r4 = r4 + 0; // 0x8080E334
    *(0 + r3) = r4; // stw @ 0x8080E338
    if (==) goto 0x0x8080e354;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080E34C
    *(8 + r30) = r0; // stw @ 0x8080E350
    if (<=) goto 0x0x8080e364;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8080E368
    r30 = *(8 + r1); // lwz @ 0x8080E36C
    r0 = *(0x14 + r1); // lwz @ 0x8080E370
}