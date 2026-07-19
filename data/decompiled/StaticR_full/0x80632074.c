/* Function at 0x80632074, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80632074(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8063207C
    *(0x14 + r1) = r0; // stw @ 0x80632080
    *(0xc + r1) = r31; // stw @ 0x80632084
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x8063208C
    if (==) goto 0x0x806320a4;
    /* lis r4, 0 */ // 0x80632098
    r4 = *(0 + r4); // lbz @ 0x8063209C
    FUN_8064847C(r4); // bl 0x8064847C
    /* lis r3, 0 */ // 0x806320A4
    r0 = *(0 + r3); // lwz @ 0x806320A8
    /* clrlwi. r0, r0, 0x1f */ // 0x806320AC
    if (!=) goto 0x0x806320bc;
    r3 = *(0x30 + r31); // lwz @ 0x806320B4
    FUN_805DDD14(r3); // bl 0x805DDD14
    FUN_808CB0F4(); // bl 0x808CB0F4
    r0 = *(0x14 + r1); // lwz @ 0x806320C0
    r31 = *(0xc + r1); // lwz @ 0x806320C4
    return;
}