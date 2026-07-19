/* Function at 0x8078A9F0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078A9F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8078A9F8
    *(0xc + r1) = r31; // stw @ 0x8078AA00
    *(8 + r1) = r30; // stw @ 0x8078AA04
    r0 = *(0 + r3); // lwz @ 0x8078AA08
    if (!=) goto 0x0x8078aa7c;
    /* li r3, 0x190 */ // 0x8078AA14
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x8078aa74;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8078AA2C
    /* lis r4, 0 */ // 0x8078AA30
    r3 = r3 + 0; // 0x8078AA34
    *(0 + r30) = r3; // stw @ 0x8078AA38
}