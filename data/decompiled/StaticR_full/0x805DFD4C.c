/* Function at 0x805DFD4C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DFD4C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x805DFD5C
    r31 = r31 + 0; // 0x805DFD60
    *(0x18 + r1) = r30; // stw @ 0x805DFD64
    r3 = *(0x88 + r31); // lwz @ 0x805DFD68
    /* clrlwi. r0, r3, 0x1f */ // 0x805DFD6C
    if (==) goto 0x0x805dfd88;
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x805dfe5c;
    /* li r3, 1 */ // 0x805DFD80
    /* b 0x805dfe60 */ // 0x805DFD84
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x805DFD88
    if (==) goto 0x0x805dfda4;
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805dfe5c;
    /* li r3, 1 */ // 0x805DFD9C
    /* b 0x805dfe60 */ // 0x805DFDA0
}