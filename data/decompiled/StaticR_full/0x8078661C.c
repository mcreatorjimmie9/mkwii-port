/* Function at 0x8078661C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078661C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x80786624
    *(0xc + r1) = r31; // stw @ 0x8078662C
    *(8 + r1) = r30; // stw @ 0x80786630
    r0 = *(0 + r3); // lwz @ 0x80786634
    if (!=) goto 0x0x8078668c;
    /* li r3, 0x2c */ // 0x80786640
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80786684;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80786658
    r30 = r31 + 0x14; // 0x8078665C
    r3 = r3 + 0; // 0x80786660
    *(0 + r31) = r3; // stw @ 0x80786664
}