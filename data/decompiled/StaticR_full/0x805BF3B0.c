/* Function at 0x805BF3B0, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_805BF3B0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r3, 0 */ // 0x805BF3B8
    *(0x24 + r1) = r0; // stw @ 0x805BF3BC
    /* stmw r26, 8(r1) */ // 0x805BF3C0
    r0 = *(0 + r3); // lwz @ 0x805BF3C4
    if (!=) goto 0x0x805bf524;
    /* li r3, 0x73f0 */ // 0x805BF3D0
    FUN_805E3430(r3); // bl 0x805E3430
    r26 = r3;
    if (==) goto 0x0x805bf51c;
    /* lis r4, 0 */ // 0x805BF3E4
    /* li r5, 0 */ // 0x805BF3E8
    r4 = r4 + 0; // 0x805BF3EC
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
}