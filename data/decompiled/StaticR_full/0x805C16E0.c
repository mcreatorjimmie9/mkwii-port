/* Function at 0x805C16E0, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805C16E0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805C16F4
    r31 = r31 + 0; // 0x805C16F8
    *(0x18 + r1) = r30; // stw @ 0x805C16FC
    *(0x14 + r1) = r29; // stw @ 0x805C1700
    r29 = r3;
    if (>) goto 0x0x805c199c;
    /* lis r5, 0 */ // 0x805C170C
    /* slwi r0, r4, 2 */ // 0x805C1710
    r5 = r5 + 0; // 0x805C1714
    /* lwzx r5, r5, r0 */ // 0x805C1718
    /* mtctr r5 */ // 0x805C171C
    /* bctr  */ // 0x805C1720
    /* li r3, 0xc */ // 0x805C1724
    FUN_805E3430(r5, r3); // bl 0x805E3430
}