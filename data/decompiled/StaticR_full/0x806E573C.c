/* Function at 0x806E573C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E573C(int r3, int r4, int r5, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806E5744
    *(0x14 + r1) = r0; // stw @ 0x806E5748
    *(0xc + r1) = r31; // stw @ 0x806E574C
    r31 = r3;
    r0 = *(0 + r4); // lwz @ 0x806E5754
    if (!=) goto 0x0x806e57b0;
    r4 = r31;
    /* li r3, 0x29c8 */ // 0x806E5764
    /* li r5, 4 */ // 0x806E5768
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x806e5780;
    r4 = r31;
    FUN_806E6C1C(r5, r4); // bl 0x806E6C1C
    /* lis r8, 0 */ // 0x806E5780
}