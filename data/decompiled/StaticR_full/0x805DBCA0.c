/* Function at 0x805DBCA0, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DBCA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805DBCB4
    r0 = *(8 + r3); // lwz @ 0x805DBCB8
    if (<) goto 0x0x805dbd14;
    /* li r5, -1 */ // 0x805DBCC4
    /* li r6, 0 */ // 0x805DBCC8
    *(4 + r3) = r0; // sth @ 0x805DBCCC
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0x14 + r3); // lwz @ 0x805DBCD4
    *(8 + r3) = r5; // stw @ 0x805DBCD8
    r5 = *(0x18 + r3); // lwz @ 0x805DBCDC
    *(0xc + r3) = r6; // stw @ 0x805DBCE0
    /* lhzx r0, r4, r0 */ // 0x805DBCE4
    /* mulli r0, r0, 0x1c */ // 0x805DBCE8
    r30 = r5 + r0; // 0x805DBCEC
    r3 = r30 + 4; // 0x805DBCF0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805dbd3c;
    r3 = *(0x1c + r31); // lwz @ 0x805DBD00
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805dbd3c */ // 0x805DBD10
    r4 = *(0xc + r3); // lwz @ 0x805DBD14
    r0 = *(4 + r3); // lhz @ 0x805DBD18
    r4 = r4 + 1; // 0x805DBD1C
    *(0xc + r3) = r4; // stw @ 0x805DBD20
    r4 = *(0x14 + r3); // lwz @ 0x805DBD24
}