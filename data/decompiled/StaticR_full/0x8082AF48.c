/* Function at 0x8082AF48, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082AF48(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8082AF54
    /* li r31, 0 */ // 0x8082AF58
    r0 = *(0x160 + r3); // lwz @ 0x8082AF5C
    if (<=) goto 0x0x8082af90;
    r0 = *(0x78 + r3); // lwz @ 0x8082AF68
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082AF6C
    if (==) goto 0x0x8082af90;
    /* lis r4, 0 */ // 0x8082AF74
    r3 = r3 + 0x168; // 0x8082AF78
    r4 = r4 + 0; // 0x8082AF7C
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x8082af90;
    /* li r31, 1 */ // 0x8082AF8C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8082AF94
    r0 = *(0x14 + r1); // lwz @ 0x8082AF98
}